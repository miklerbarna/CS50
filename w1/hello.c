#include<stdio.h>

void nod(void);
float discount(float price);

int main(void)
{
    /*
    char name[20];
    printf("What is your name?\n");
    scanf("%s",name);
    printf("Hello, %s\n",name);
    */

    /*
    //calc
    printf("Give two numbers:\n");
    int x;
    int y;
    printf("X: ");
    scanf("%i",&x);
    printf("Y: ");
    scanf("%i",&y);
    int z = x + y;
    if ( x < y)
    {
        printf("X is smaller than Y\n");
    }
    else if (x > y)
    {
        printf("Y is smaller than X\n");

    }
    else
    {
        printf("X is equal to Y\n");
    }

    printf("The sum: %i\n", z);

    


    //parity

    int num1;
    printf("Give a number: ");
    scanf("%i", &num1);
    (num1 % 2 == 0) ? printf("The number is even\n") : printf("The number is odd\n");
    */

    for (int i = 0; i < 4; i++)
    {
        nod();
    }

    float regular;
    scanf("%f", &regular);
    printf("Discounted: %.2f\n", discount(regular));



}

void nod(void)
{
    printf("noDon\n");
}

float discount(float price)
{
    return price * .85;
}