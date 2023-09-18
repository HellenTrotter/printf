#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int num1;
int num2;

num1 = _printf("A %s sentence\n", "simple");
num2 = printf("A %s sentence\n", "simple");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);
    
num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);

num1 = _printf("A simple %v entence\n");
num2 = printf("A simple %v entence\n");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);

num1 = _printf("Percentage: %%\n");
num2 = printf("Percentage: %%\n");
_printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);
return 0;

}
