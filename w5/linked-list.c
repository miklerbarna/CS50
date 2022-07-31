#include<stdio.h>
#include<stdlib.h>


typedef struct node
{
    int number;
    struct node* next; //we need node here, but because of top to bottom compiling we need to refer to node data type like this
}node;

int main()
{

    node* list = NULL;

    //first
    node* n = malloc(sizeof(node)); //getting memory for first node
    if (n == NULL)
    {
        return 1;
    }

    // (*n).number = 1; is the same as
    n->number = 1; //
    n->next = NULL;
    list = n; //setting list to made node

    //second
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;

    list->next = n;

    //third
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free(list->next);
        free(list);
        return 1;
    }

    n->number = 3;
    n->next = NULL;

    list->next->next = n;

    for (node* tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

}