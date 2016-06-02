#include <stdlib.h>
#include <stdio.h>
void mergeSort(int *a, int length){
	int first = 0;
	int last = length - 1;
	int mid = (last - first) / 2;
	mergeSort(a, mid + 1);
	mergeSort(a + mid + 1, last - mid);
	merge

}
int main(int argc, char const *argv[])
{
	printf("%s\n", "hello world");
	return 0;
}