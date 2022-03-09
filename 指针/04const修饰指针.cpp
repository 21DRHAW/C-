#include<iostream>
using namespace std;
int main4()
{
	int a = 10;
	int b = 20;
	//1、const修饰指针--常量指针
	//常量指针：const int *p=&a;
	//特点：指针的指向可以修改，但指针指向的值不可以修改
	//const int* p = &a;
	//p = &b;

	//2、const修饰常量--指针常量
	// 指针常量：int * const p=&a;
	//特点：指针的指向不可以修改，但指针指向的值可以修改

	/*int* const p = &a;
	*p = 20;
	*/

	//3、const既修饰指针又修饰常量 
	//const int *const p=&a;
	const int* const p = &b;
	system("pause");
	return 0;
}