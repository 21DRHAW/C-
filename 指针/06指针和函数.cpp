#include<iostream>
using namespace std;

void swap01(int a, int b)
{

	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void swap02(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	cout << "a=" << *p1 << endl;
	cout << "b=" << *p2 << endl;
}
int main6()
{
	//函数和指针
	//1、值传递
	int x = 10;
	int y = 100;
	swap01(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	//2、地址传递//可以修改实参的值

	swap02(&x, &y);

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;//x，y发生了改变
	system("pause");
	return 0;
}