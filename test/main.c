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
int len;
int len2;
int num3;

num1 = _printf("A %s sentence\n", "simple");
num2 = printf("A %s sentence\n", "simple");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);
    
num1 = _printf("A %c%c%s sentence\n", 's', 'i', "mple");
num2 = printf("A %c%c%s sentence\n", 's', 'i', "mple");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);

num1 = _printf("A simple %v entence\n");
printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n", num2);

num1 = _printf("Percentage: %%\n");
num2 = printf("Percentage: %%\n");
_printf("Len:[%d]\n", num1);
printf("Len1:[%d]\n\n", num2);
num1 = _printf("%%%%%%%%\n");
num2 = printf("%%%%%%%%\n");
_printf("Len1:[%d]\n\n", num1);
printf("Len1:[%d]\n\n", num2);
_printf("%c\n:", 48);
num1 = _printf("Unknown:[%r]\n");
_printf("Len1:[%d]\n", num1);
num2= _printf("a single specifier symbol followed by terminator %\n");
_printf("Len1:[%d]\n", num2);
num3 = _printf("specifier symbol with a space after it % \n");
_printf("Len1:[%d]\n", num3);
num2 = _printf(NULL);
_printf("Len:[%d]\n", num2);
num1 = _printf("string is null [%s]\n", "null");
_printf("String is null:[%d]\n", num1);

_printf("%c", '\0');
num3 = _printf("%c", '\0');
_printf("Len of character is null [%d]\n", num3);


len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
fflush(stdout);
if (len != len2)
{
printf("Lengths differ.\n");
fflush(stdout);
return (1);
}
return 0;

}
