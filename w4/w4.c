#include<stdio.h>
#include<string.h>

int string_comp(char* s1, char* s2);


int main (void)
{
    /*
    int n = 50;
    int *p = &n; //Pointer to the memory adress of n

    printf("%p\n", p); //%p for memory addresses
    printf("%p\n", &n);
    printf("%i\n", *p);


    int arr[4]  = {1,3,5,7};
    int *p_arr = &arr[0];
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", p_arr);  //You can see that an int takes up 16 bits (this is the min size, the compiler can decide to use 32 bits)
        p_arr++;
    }
     
    char *s ="HA CS50!"; //s is a char pointer that points to the start of the string
    printf("%c\n", *s);
    
    for (int i = 0; i < 8; i++)
    {
        printf("%c", *s);
        s++;
    }
    printf("\n");
    printf("\n");
    
    //or with more steps

    char *str = "Hello";
    char *p_str = &str[0];
    printf("%p\n", &str[1]);
    printf("%p\n", &str[2]);
    printf("%p\n", &str[3]);
 
    printf("%c\n", *p_str);
    printf("%c\n", *(p_str + 1));
    printf("%c\n", *(p_str + 2));
    printf("%c\n", *(p_str + 3));
    printf("%c\n", *(p_str + 4));
    
    printf("%c" , p_str[0]);
    printf("%c" , p_str[1]);
    printf("%c" , p_str[2]);
    printf("%c" , p_str[3]);
    printf("%c" , p_str[4]);
    

   */

  char *s1 = "Hello";
  char *s2 = "Hello2";

    if (*s1 == *s2)  //not good
    {
        printf("Same\n");
    }
    else 
    {
        printf("Different\n");
    }

    if (strcmp(s1, s2) == 0)  //good
    {
        printf("Same\n");
    }
    else 
    {
        printf("Different\n");
    }


    char *str1 = "alma";
    char *str2 = "alma";
    printf("%i\n", string_comp(str1,str2)); 

}


int string_comp(char* s1, char* s2)
{
    int i = 0;
    while(s1[i] != '\0' || s2[i] != '\0')
    {
       if(s1[i] != s2[i]) return 0;
       i++;
    }
    return 1;
}