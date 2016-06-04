```c
#include <stdio.h>
#include <stdlib.h>
void quickSort(int *a, int length){
	int left = 0;
	int right = length - 1;
	if (left < right)
	{
		int key = a[left];
		int low = left;
		int high = right;
		while(low < high){
			while(low < high && a[high] > key){
				high--;
			}
			if (low < high) {// 找到小于准基数key的元素

                a[low] = a[high];// 赋值给low下标位置，low下标位置元素已经与基准数对比过了

                low++;// low下标后移
            }else {
            	break;
            }
			while(low < high && a[low] < key){
				low++;
			}
			     if (low < high) {// 找到比基准数大的元素

                a[high] = a[low];// 赋值给high下标位置，high下标位置元素已经与基准数对比过了

                high--;// high下标前移，

            } else {// 没有找到比基准数小的元素

                // 说明low位置左边元素都不大于基准数

                break;

            }
		}
		a[low] = key;
		quickSort(a, low);
		quickSort(a + low + 1, right - low);
	}
}


int main(int argc, char const *argv[])
{
	int a[] = {2, 1, 4, 3, 5, 5, 9, 8};
	quickSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); ++i)
	{
		printf("%d\t", *(a + i));
	}
	printf("\n");
	return 0;
}
```