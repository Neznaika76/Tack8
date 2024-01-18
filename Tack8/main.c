//
//  Задание 1
//

#include <stdio.h>

void SortingArray(int arr[], int n)
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

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
