#include "main.h"
/**
 * _atoi - Entry Function
 * @str: char
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
        int sign, m;
        unsigned int Iam;

        Iam = m = 0;
        sign = 1;
        while (!(str[m] <= '9' && str[m] >= '0') && str[m] != '\0')
        {
                if (str[m] == '-')
                        sign *= -1;
                m++;
        }
        while (str[m] >= '0' && str[m] <= '9')
        {
                Iam = Iam * 10 + str[m] - '0';
                m++;
        }
        return (Iam * sign);
}
