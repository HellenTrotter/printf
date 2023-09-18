#include <limits.h>
#include <stdio.h>
#include "main.h"
#define ZERO 0

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int my_char = 48; 
int len;
int len2;
(void)len;
(void)len2;

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
printf("%d=%d\n", len, len2);
_printf("%d=%d\n", len, len2);
_printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Percent:[%%]\n");
printf("Percent:[%%]\n");
_printf("%");
_printf("%r");
_printf("Unknown:[%r]\n");
_printf("css%ccs%scscscs\n", 'T', "Test");
_printf("% ");
_printf(NULL);
_printf("%\0");
_printf("%s", "This sentence is retrieved from var_args!\n");
_printf("%s",NULL);
_printf("Hello : %c. How are you?\n", 'K');
_printf("What is character A in int format %c?\n", my_char);
_printf("Let's try to printf a simple sentence.\n");
printf("Let's try to printf a simple sentence.\n");
_printf("empty Character:[%c]\n", ' ');
printf("empty Character:[%c]\n", ' ');
_printf("Character:[%c]\n", 'H');
printf("Character:[%c]\n", 'H');
_printf("Character:[%c%c]\n", 'H', 'I');
printf("Character:[%c%c]\n", 'H', 'I');
_printf("Character:[%c%c%c]\n", 'H', 'I', '!');
printf("Character:[%c%c%c]\n", 'H', 'I', '!');
_printf("Character:[%c %c %c]\n", 'H', 'I', '!');
printf("Character:[%c %c %c]\n", 'H', 'I', '!');
_printf("Two c with Space:[%c %c]\n", 'H', 'I');
printf("Two c with Space:[%c %c]\n", 'H', 'I');
_printf("empty String:[%s]\n", "");
printf("empty String:[%s]\n", "");
_printf("Space String:[%s]\n", " ");
printf("Space String:[%s]\n", " ");
_printf("String:[%s]\n", "I am a string !");
printf("String:[%s]\n", "I am a string !");
_printf("String:[%s%s]\n", "I am a string !", "second string !");
_printf("String:[%s%s]\n", "I am a string !", "second string !");
printf("String:[%s %s]\n", "I am a string !", "second string !");

return (0);
}
