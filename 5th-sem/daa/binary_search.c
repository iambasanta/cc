#include <stdio.h>

void BinarySearch(int arr[], int n, int x)
{
    int l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] == x)
            {
                printf("Element found at %d", mid);
                return;
            }
        else if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    printf("Element not found");
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int arr[10] = {10, 21, 33, 45, 56, 69, 70, 81, 99, 102};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 56;

    printf("List:\n");
    printArray(arr, n);
    printf("\n");

    printf("Key : %d\n", key);
    BinarySearch(arr, n, key);
    printf("\n");

    printf("Name : Basanta Rai\n");
    printf("Symbol No. : 23473\n");
    return 0;
}
