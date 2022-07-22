#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

void swap(int *a, int *b);

int main (void)
{

    char s[100];
    scanf("%s", &s);
    // printf("%s", s);

    char *t = malloc(sizeof(char) * strlen(s));


    for (int i = 0, n = strlen(s) + 1; i < n; i++)  //or just strcpy(t, s)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);
    printf("t: %s\n", t);
    printf("s: %s\n", s); //untouched


    free(t);

    int x = 12;
    int y = 44;

    printf("X: %i, Y: %i\n", x, y);
    swap(&x, &y);
    printf("X: %i, Y: %i\n", x, y);
}


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}