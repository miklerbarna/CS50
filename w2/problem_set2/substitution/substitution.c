#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void transform(char* plain, char* key);
char switch_char(char letter, char* key);

int main(int argc, char* argv[]) 
{
    setvbuf(stdout, NULL, _IONBF, 0);


    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    if (strlen(argv[1]) != 26)
    {
        printf("Key must contain exactly 26 characters");
        return 2;
    }

    char* key = argv[1];
    // printf("%s\n", key);
    char plain[50];
    printf("plaintext: ");
    scanf("%s", plain);

    printf("%s\n", plain);
    transform(plain, key);
    printf("%s\n", plain);
}


void transform(char* plain, char* key)
{
    int length = strlen(plain);
    for (int i = 0; i < length; i++)
    {
        plain[i] = switch_char(plain[i], key);
    }
    
}

char switch_char(char letter, char* key)
{
    int place;
    if (letter >= 97 && letter <= 122)
    {
        place = letter - 96;
        return key[place - 1];
    }
    else if (letter >= 65 && letter <= 90)
    {
        place = letter - 64;
        return key[place - 1];
    }
    else
    {
        return letter;
    }
}