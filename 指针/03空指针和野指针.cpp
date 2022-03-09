#include<iostream>
using namespace std;
int main3()
{
	//空指针
	//1、空指针用于给指针变量进行初始化
	
	/*int* p = NULL;*/

	//2、空指针是不可以进行访问的
	//0~255之间的内存编号是系统占用的，不可访问！
	int* p = (int*)0x1100;

	cout << *p << endl;

	//野指针
	system("pause");
	return 0;
}