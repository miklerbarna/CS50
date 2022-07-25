#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shiftword(char* plain, int shift);
char shiftletter(char letter, int shift);

int main(int argc, char* argv[]) 
{
    setvbuf(stdout, NULL, _IONBF, 0);
    if (argc != 2)
    {
        printf("Too many arguments");
        return 1;
    }

    int shift = atoi(argv[1]);
    char plain[50];
    printf("Plain text: ");
    scanf("%s", &plain);
    // printf("%s\n", plain);
    shiftword(plain, shift);
    printf("%s\n", plain);

}

void shiftword(char* plain, int shift)
{
    int length = strlen(plain);
    for (int  i = 0; i < length; i++)
    {
        plain[i] = shiftletter(plain[i], shift);
    }
}


char shiftletter(char letter, int shift)
{
    if (letter >= 97 == letter <= 122)//lowercase
    {
        return (((letter - 96) + shift ) % 26) + 96;
    }
    else if (letter >= 65 && letter <= 90) //uppercase
    {
        return (((letter - 65) + shift ) % 26) + 65;
    }
    else //characters
    {
        return letter;
    }
}