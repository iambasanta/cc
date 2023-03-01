#include <stdio.h>

int LinearSearch(int *arr, int n, int key)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("%d found at index %d\n", key, i);
            return i;
        }
    }
    printf("%d not found\n", key);
    return -1;
};

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[10] = {10, 12, 3, 41, 5, 16, 77, 87, 9, 100};
    int key = 41;
    int n = sizeof(a) / sizeof(a[0]);

    printf("List:\n");
    printArray(a, n);
    printf("\n");

    printf("Key : %d\n", key);
    LinearSearch(a, n, key);

    printf("\n");
    printf("Name : Basanta Rai\n");
    printf("Symbol No. : 23473\n");
    return 0;
}
