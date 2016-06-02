#include <stdlib.h>
#include <stdio.h>
void merge(int *a, int first, int mid, int last){
	int *tmp = (int *)malloc((last - first + 1) * sizeof(int));
	int k = 0;
	int i  = first;
	int j = mid + 1;
	while(i <= mid && j <= last){
		if (*(a + i) <= *(a + j))
		{
			*(tmp + k++) = *(a + i++);
		} else {
			*(tmp + k++) = *(a + j++);
		}
	}
	while(i <= mid){
		*(tmp + k++) = *(a + i++);
	}
	while(j <= last){
		*(tmp + k++) = *(a + j++);
	}
	for (int i = 0; i < k; ++i)
	{
		*(a + first + i) = *(tmp + i);
	}
free(tmp);

}
void mergeSort(int *a, int length){
	int first = 0;
	int last = length - 1;
	if (first < last)
	{
		int mid = (last - first) / 2;
		mergeSort(a, mid + 1);
		mergeSort(a + mid + 1, last - mid);
		merge(a, first, mid, last);
	}

}
int main(int argc, char const *argv[])
{
	int a[] = {2, 1, 4, 3, 5, 4, 5, 10};
	mergeSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}