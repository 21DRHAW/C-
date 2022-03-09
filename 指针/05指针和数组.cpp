#include<iostream>
using namespace std;
int main5()
{
	//利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;

	int* p = arr;//arr就是数组的首地址
	cout << "第一个元素为：" << *p << endl;

	p++;//往后偏移4/8个字节
	cout<< "第二个元素为：" << *p << endl;


	//利用指针遍历数组
    int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	

	system("pause");
	return 0;
}