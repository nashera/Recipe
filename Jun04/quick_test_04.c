#ifndef TEST
#define TEST
#include <stdlib.h>
#include <stdio.h>
#endif
int partition(int A[], int low, int high);
void quickSort(int A[], int low, int high);
void swap(int *a, int *b);
int main(int argc, char const *argv[])
{
    int a[] = {2, 1, 3, 8, 7, 10, 9, 4};
    quickSort(a, 0, sizeof(a) / sizeof(int) - 1);
    for (unsigned int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return 0;
}

void quickSort(int A[], int low, int high){
    if (low < high)
    {
        int p = partition(A, low, high);
        quickSort(A, low, p);
        quickSort(A, p + 1, high);
    }
}
int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low;
    int j = high;
    while(i < j){
        while (A[j] >= pivot && i < j)j--;
        *(A + i) = *(A + j);
        while (A[i] <= pivot && i < j)i++;
        *(A + j) = *(A + i);
    }
    *(A + i) = pivot;
    return i;

}
void swap(int *a, int *b){
   int tmp = *a;
   *a = *b;
   *b = tmp;
}

