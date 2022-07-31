#include<stdio.h>
#include<stdlib.h>

int main()
{

    /*
    int list[3]; //data is on stack, you cannot add more to it
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i\n", list[i]);
    }
    Instead:
    */



   /*
   int* list = malloc(3 * sizeof(int));  //data is on heap!! you can ask for more memory

    if (list == NULL)
    {
        return 1;
    }
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Now add to the array 

    int* tmp = malloc(4 * sizeof(int)); //make a temporary list for copying
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++) //copy
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4; //new value

    free(list); //free and reassign the original pointer
    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    
    free(list); //free the memory
    */



   
   //WITH REALLOC
    int* list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }
    
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int* tmp = realloc(list, 4 * sizeof(4)); //realloc frees the original pointer

    if (tmp == NULL)
    {
        free(list);
        return 0;
    }

    tmp[3] = 4;


    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    
    free(list);



    return 0;
    
}