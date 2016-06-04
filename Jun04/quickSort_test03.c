#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int partition(int a[], int low , int high){
    int pivot = a[high];
    int ix = low;
    for (int i = low; i < high - 1; ++i)
    {
        if (a[i] < pivot)
        {
            swap(a + ix, a + i);
            ix++;
        }

    }
    swap(a + ix, a + high);
    return ix;
}

void quicksort(int a[], int low, int high){
    if (low < high)
    {
        int p = partition(a, low, high);
        quicksort(a, low, p - 1);
        quicksort(a, p + 1, high);
    };
}


int main(int argc, char const *argv[])
{
    int a[] = {2, 1, 3, 4, 1, 2, 8, 5, 9, 1};
    quicksort(a, 0, sizeof(a) / sizeof(int) - 1);
    for (unsigned int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        printf("%d\n", *(a + i));
    }
    printf("\n");
    return 0;
}