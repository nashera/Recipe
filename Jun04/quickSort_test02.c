#include <stdlib.h>
#include <stdio.h>
void quickSort(int *a, int length){
    int left = 0;
    int right = length - 1;
    if (left < right)
    {
        int key = a[left];
        int low = left;
        int high = right;
        while(low < high){
            while(low < high && a[high] >= key){
                high--;
            }
            a[low] = a[high];
            while(low < high && a[low] <= key){
                low++;
            }
            a[high] = a[low];
        }
        a[low] = key;
        quickSort(a + low + 1, right - low);
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {2, 1, 4, 3, 5, 5, 9, 8};
    quickSort(a, sizeof(a) / sizeof(int));
    for (unsigned int i = 0; i < sizeof(a) / sizeof(int); ++i)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n");
    return 0;
}



