//
//  Задание 1
//

#include <stdio.h>

void sort_array(int arr[], int n)
{
    int i= 0;
    int j = 0;
    int temp = 0;
    for(i = 0; i < n; ++i)
    {
        for(j = i; j < n; ++j)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//
//  Задание 2
//

void sort_even_odd(int n, int a[])
{
    int OddPosition=0;
    int EvenPosition=0;
    int odd[n];
    int even[n];
    for(int i = 0; i < n; ++i)
    {
        if(a[i] % 2)
            odd[OddPosition++] = a[i];
        else
            even[EvenPosition++] = a[i];
    }
    for(int i = 0; i < n; ++i)
    {
        if (i <= OddPosition) 
        {
            a[i] = odd[i];
        }
        else
        {
            a[i] = even[i];
        }
    }
        return a[];
}

//
//  Задание 3
//

int find_max_array(int size, int a[])
{
    int max=a[0];
    for (int i = 1; i < size; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
