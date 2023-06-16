#include <stdio.h>
#include <time.h>
/**
 * main function- a program that assigns a random number to the variable n each time it is executed and then prints to stdout
 * time.h used in conjuction with the srand function
 * return: 0(success0
 */
int main(void){
	int n;
	srand(time(NULL));  // Seed the random number generator
        	n = rand();  // Generate a random number

		/*code goes here*/

		printf("The number is %d\n", n);

    		if (n > 0) {
        		printf("n is positive\n");
   	        } else if (n == 0) {
        		printf("n is zero\n");
   	        } else {
        		printf("n is negative\n");
    		}

    		printf("\n");

    		return 0;
}
