#include <stdio.h>

void func_abs(int a[], int size);
int main()
{
    int array[5] = {10, -20, 30, 40, 50};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    func_abs(array, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

void func_abs(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            a[i] *= -1;
        }
    }
}