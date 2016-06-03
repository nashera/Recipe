#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void selectSort(int *a, int length){
	int min = *a;
	int ix = 0;
	for (int i = 0; i < length; ++i){
		if (*(a + i) < min)
		{
			min = *(a + i);
			ix = i;
		}
	}
	if(ix != 0){
		swap(a, a + ix);
	}
	if (length > 2)
	{
		selectSort(a + 1, length -1);
	}
}

int main(int argc, char const *argv[])
{
	int a[] = {2, 1, 3, 5, 7, 6, 8, 9, 10, 2, 4};
	selectSort(a, sizeof(a) / sizeof(int));

	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}