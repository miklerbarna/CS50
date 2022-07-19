#include<stdio.h>
#include<math.h>


int cont(int array[], int x);
int binSearch(int arr[], int x, int from, int to);
void max_selection_sort(int arr[], int length);
void array_out(int arr[],int length);
int maxsel(int arr[],int to);
void swap(int *x, int *y);
void bubble_sort(int arr[], int length); 
void improved_bubble_sort(int arr[], int length);

//structs
typedef struct
{
    int age;
    char* name;
}
person;

int main()
{
    /*
    int arr[10] = {1,3,7,2,0,6,-1020,9,4,6};
    cont(arr,3);

    //array of strings
    char* words[3];
    words[1] = "BOB";
    words[2] = "Bug";
    words[3] = "Bed";

    if (words[1] == "BOB")
    {
        printf("%s\n", words[1]);
    }


    person p1;
    p1.name = "lajos";
    p1.age = 43;
    printf("%s  %i\n",p1.name, p1.age);


    //binarysearch
    int bin_arr[10] = {1,2,3,4,5,6,7,8,9,10};


    binSearch(bin_arr,5,0,9);
    
    

    //selectionsort

    int selection_array[10] = {2,6,11,102,8,25,3,-4,2,13};
    max_selection_sort(selection_array,9);
    array_out(selection_array,9);
    */

    //bublesort
    int bubble_arr[10] = {2,6,1,4,9,10,11,12,13,14};
    bubble_sort(bubble_arr,9);
    array_out(bubble_arr,9);

    //improved bubblesort
    int bubble_arr2[10] = {1,8,2,6,9,10,11,12,13,14};
    improved_bubble_sort(bubble_arr2,9);
    array_out(bubble_arr2,9);

}

void array_out(int arr[],int length)
{
    for (int i = 0; i <= length; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    
}

//linearsearch
int cont(int array[], int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (array[i] == x)
        {
            printf("Its inside\n");
            return 1;
        }
    }

    printf("It is not inside\n");
    return 0;
}


//binarysearch
int binSearch(int arr[], int x, int from, int to)
{
    if (from > to)
    {
        printf("Did not find %i\n", x);
        return 0;
    }

    int middle = (int)floor((to + from) / 2);
    if (arr[middle] == x)
    {
        printf("Found %i at index %i\n", x, middle + 1);
        return 1;
    }
    else if (arr[middle] > x)
    {
        binSearch(arr, x, from, middle - 1);
    }
    else if (arr[middle] < x)
    {
        binSearch(arr, x, middle + 1, to);
    }
}


//Max selection sort
//0..9
void max_selection_sort(int arr[], int length)
{
    for (int i = length; i >= 0; i--) 
    {
        int max_index = maxsel(arr,i);
        swap(&arr[max_index],&arr[i]);
    }
}

int maxsel(int arr[],int to)
{
    int max_index = 0;
    for(int j = 0; j <= to; j++)
    {
        if (arr[max_index] < arr[j]) max_index = j;
    }

    return max_index;
}

void swap(int *x, int *y){
	int temp = *x;
    *x = *y;
    *y = temp;
}



void bubble_sort(int arr[], int length)
{
    int counter = 0;
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            counter++;
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    printf("\n%i\n",counter);
}


void improved_bubble_sort(int arr[], int length)
{
    int u;
    int counter = 0;
    for (int i = length - 1; i > 0; i--)
    {
        u = 0;
        for (int j = 0; j <= i; j++)
        {
            counter++;
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                u = j;
            }
        }
        i = u;        
    }
    printf("\n%i\n",counter);

}