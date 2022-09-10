#include <stdio.h>
int main(void) /*this is the entry point*/
{
	printf("size of char: %i byte(s)\n", sizeof(char));
	printf("size of int: %i byte(s)\n", sizeof(int));
	printf("size of long int: %i bytes\n", sizeof(long int));
	printf("size of long long int: %i bytes\n", sizeof(long long int));
	printf("size of float: %i bytes\n", sizeof(float));
	return (0); /*end of program*/
}
