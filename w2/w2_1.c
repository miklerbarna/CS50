#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(void)
{
    char* str;
    scanf("%s", str);
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        printf("%c", str[i]);
    }
    printf("\nIn Uppercase:\n");
    for (int i = 0, n = strlen(str); i < n; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)  // 97 == "a", and 122 == "z"
        {
            printf("%c", str[i] - 32);
        }
        else
        {
            printf("%c", str[i]);
        }
    }


}