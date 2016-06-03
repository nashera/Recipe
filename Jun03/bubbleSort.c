#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void bubbleSort(int *a, int length){
	for (int i = 0; i < length; ++i)
	{
		for (int j = i + 1; j < length; ++j)
		{
			if(*(a + i) > *(a + j)){
				swap(a + i, a + j);
			}
		}
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {2, 1, 3, 5, 3, 4, 8, 1, 2, 23, 7};
	bubbleSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}