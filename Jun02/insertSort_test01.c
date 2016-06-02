#include <stdlib.h>
#include <stdio.h>
void insertSort(int *a, int length){
	int tmp, k;
	for (int i = 0; i < length; ++i)
	{
		tmp = *(a + i);
		k = i - 1;
		while(*(a + k) > tmp && k >= 0 ){
			*(a + k + 1) = *(a + k);
			k--;
		}
		*(a + k + 1) = tmp;
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {2, 4, 1, 5, 3, 9, 7};
	insertSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}