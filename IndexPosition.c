#include <stdio.h>

int main()
{
    char buf[50];
    printf("Please Enter a String:");
    scanf("%s", buf);
    int i = 0;
    for (int i = 0; buf[i] != '\0'; i++)

        printf("Index position of %d is =%c \n", i, buf[i]);

    return 0;
}