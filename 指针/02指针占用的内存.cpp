#include<iostream>
using namespace std;
int main2()
{
	int a = 10;
	//int* p;
	//p = &a;
	int* p = &a;


	//32位操作系统下，指针都是占4个字节空间大小，不管什么数据类型
	//64位操作系统下，指针都是占8个字节空间大小，不管什么数据类型
	cout << "指针p占用的内存空间为：" << sizeof(p) << endl;
	cout << "指针p占用的内存空间为：" << sizeof(int *) << endl;


	system("pause");
	return 0;
}