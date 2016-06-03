#include <stdlib.h>
#include <stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main(int argc, char const *argv[])
{
	int a[] = {2, 1, 3, 4, 5};
	swap(a, a + 1);
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
		/* code */
	}
	printf("\n");


	return 0;
}