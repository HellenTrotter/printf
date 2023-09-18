#include <stdio.h>

int _printf(const char *format, ...);

int main(void)
{
int result1;
int result2;
int result3;
int result4;
int result5;
const char *str = NULL;
int result6;

result1 = _printf("% ");
printf("Result 1: %d\n", result1);

result2 = _printf("%");
printf("Result 2: %d\n", result2);

result3 = _printf(NULL);
printf("Result 3: %d\n", result3);

result4 = _printf("%s", str);
printf("Result 4: %d\n", result4);

result5 = _printf("%k");
printf("Result 5: %d\n", result5);

result6 = _printf("hello %");
printf("Result 6: %d\n", result6);

return 0;
}

