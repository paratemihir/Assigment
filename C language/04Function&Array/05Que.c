/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
// 1,8,9,5,2,3
// Ascending order : 1,2,3,5,8,9
// Decending order : 9,8,5,3,2,1

#include <stdio.h>

void ascending(int arr[], int n);
void descending(int arr[], int n);

int main()
{
    int arr[5];
    // user input 5 types
    printf("Enter 5 elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    ascending(arr, 5);  // function call
    descending(arr, 5); // function call
}

// Ascending order
void ascending(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // print acending order
    printf("Ascending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Decending order
void descending(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // print decending order
    printf("Descending order: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
