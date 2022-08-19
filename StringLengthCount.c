#include <stdio.h>

int main()
{
    char w[100];
    printf("Enter a String for calculating Length: ");
    scanf("%s", w);
    int i;

    for (i = 0; w[i] != '\0'; i++);

        printf("Length of the string: %d", i);

    return 0;
}