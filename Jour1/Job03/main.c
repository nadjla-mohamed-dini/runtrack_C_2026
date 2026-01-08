#include <stdio.h>

int char_is_digit(char c);
int str_is_digit(const char *str);

int main (void)
{
    printf("test pour char digit: \n");
    printf("char_is_digit('5') = %d\n", char_is_digit('5'));
    printf("char_is_digit('a') = %d\n", char_is_digit('a'));

    printf("\nTest str_is_digit:\n");
    printf("str_is_digit(\"12345\") = %d\n", str_is_digit("12345"));
    printf("str_is_digit(\"12a45\") = %d\n", str_is_digit("12a45"));

    return 0;

}