#include<Windows.h>
#include<stdio.h>

void BinarySort(int array[], int size)
{
	int i;
	int key;
	for (i = 1; i < size; i++)
	{
		key = array[i];
		int left = 0;
		int right = i;
		//比较查找位置
		while (left < right)
		{
			int mid = left + (right - left)/2;
			if (key < array[mid])
				right = mid;
			else
				left = mid + 1;
		}
		//数据搬移
		for (int j = i; j>left; j--)
		{
			array[j] = array[j - 1];
		}
		array[left] = key;
	}

}

void test()
{
	int array[] = { 10, 9, 6, 8, 4, 7, 5, 3, 2, 1 };
	int size = sizeof(array) / sizeof(array[0]);
	BinarySort(array, size);
	int i = 0;
	for (i = 0; i < size; i++)
	{
		printf("%d ", array[i]);
	}
}

int main()
{
	test();
	system("pause");
	return 0;
}