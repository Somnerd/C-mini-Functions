
#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size


int main()
{
    char str[MAX_SIZE];
    char * s = str;

    /* Input string from user */
    printf("Enter your text : ");
    gets(str);

    while(*s)
    {
        *s = (*s > 'a' && *s <= 'z') ? *s-32 : *s;
        s++;
    }

    printf("Uppercase string : %s",str);
    return 0;
}
