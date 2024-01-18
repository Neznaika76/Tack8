//
//  Задание 1
//
/*

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

//
//  Задание 4
//

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size; i++)
            for(int j = i + 1; j < size; j++)
                if (a[i] == a[j])
                    return 1;
    return 0;
}

//
//  Задание 5
//

void change_max_min(int size, int a[])
{
    int min = a[0], PosMin=0, max = a[0], PosMax = 0, temp = a[0];
        for (int i = 1; i < size; i++)
        {
            if (min < a[i])
            {
                min = a[i];
                PosMin = i;
            }
            if (max > a[i])
            {
                max = a[i];
                PosMax = i;
            }
        }
    temp = a[PosMin];
    a[PosMin] = a[PosMax];
    a[PosMax] = temp;
}


//
//  Задание 6
//

int diag_avg(int** a, int rows, int cols)
{
int sum = 0;
    for (int i = 0; i < cols; i++)
        sum += a[i][i];
    return sum / cols;
}
*/
//
//  Задание 7
//



#include <stdio.h>

void chess(char c, int n)
{
    if (n % 2 != 0)
        if (c % 2 != 0)
            printf("BLACK\n");
        else
            printf("WHITE\n");
    else
    {
        if (c % 2 == 0)
            printf("BLACK\n");
        else
            printf("WHITE\n");
    }
}
int main(int argc, const char * argv[]) {
    int n;
    char c;
    c = getchar();
    scanf("%d", &n);
    chess(c, n);
    return 0;
}
