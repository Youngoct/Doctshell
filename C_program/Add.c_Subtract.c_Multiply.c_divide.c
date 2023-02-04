#include <stdio.h>

/**
 * print_my_name - function that print a name
 *
 *Return:0 as success
 */
int print_my_name(){
	printf("ismail\n");
	return (0);
}
/**
 * main - sum,takeaway,multiply,divide the value assign to the variable
 *
 *Return:0 as success
 */
int main(void)
{
	int q = 12000;
	int w = 1000;
	int add = q + w;
	int takeaway = q - w;
	int multiply = q * w;
	int divide = q / w;

	printf("total = %i\n", add);
	printf("total = %i\n", takeaway);
	printf("total = %i\n", multiply);
	printf("total = %i\n", divide);
	print_my_name();
	return (0);
}
