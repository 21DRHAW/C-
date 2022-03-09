#include<iostream>
using namespace std;

//2、创建函数，实现冒泡排序
void bubbleSort(int *arr, int len)//参数1，数组的首地址；地址2，数组的长度。
{
	for(int i=0;i<len-1;i++)
	{
		for (int j = 0; j < len-i-1; j++)
		{
			//如果j>j+1的值  交换数据
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

//打印数组
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] <<endl;
	}
}

int main()
{
	//1、创建数组
	int arr[10] = { 1,4,3,2,7,6,8,10,5,9 };

	//数组长度
	int len = sizeof(arr)/sizeof(arr[0]);
	cout << "数组长度为：" << len << endl;
	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);

	//3、打印排序后的数组


	printArray(arr, len);
	


	system("pause");
	return 0;
}