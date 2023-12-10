#include <stdio.h>
#include <string.h>
int main()
{
    char a[20];
    char b[20];
    int j = 0;

    printf("Enter name:");
    scanf("%s", &a);

    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    printf("%s\n", b);
    int result = strcmp(a, b);
    if (result == 0)
    {
        printf("Given string is palendrom");
    }
    else
    {
        printf("Given string is not palendrome");
    }
    return 0;
}
