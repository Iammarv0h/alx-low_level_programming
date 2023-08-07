#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

struct elf_header
{
	unsigned char e_ident[EI_NIDENT];
	short e_type;
	short e_machine;
	unsigned int e_version;
	unsigned long int e_entry;
	unsigned long int e_phoff;
	unsigned long int e_shoff;
	unsigned int e_flags;
	unsigned short e_ehsize;
	unsigned short e_phentsize;
	unsigned short e_phnum;
	unsigned short e_shentsize;
	unsigned short e_shnum;
	unsigned short e_shstrndx;
};

void check_elf(struct elf_header *header)
{
	int index;

	for (index = 0; index < EI_NIDENT; index++)
	{
		if (header->e_ident[index] != 127 &&
		    header->e_ident[index] != 'E' &&
		    header->e_ident[index] != 'L' &&
		    header->e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void print_magic(struct elf_header *header)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", header->e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

void print_class(struct elf_header *header)
{
	printf("  Class:                             ");

	switch (header->e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}
}

void print_data(struct elf_header *header)
{
	printf("  Data:                              ");

	switch (header->e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header->e_ident[EI_CLASS]);
	}
}

void print_version(struct elf_header *header)
{
	printf("  Version:                           %d",
	       header->e_ident[EI_VERSION]);

	switch (header->e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

void print_osabi(struct elf_header *header)
{
	printf("  OS/ABI:                            ");

	switch (header->e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
