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
	//������ָ��
	//1��ֵ����
	int x = 10;
	int y = 100;
	swap01(x, y);
	cout << "x=" << x << endl;
	cout << "y=" << y << endl;
	//2����ַ����//�����޸�ʵ�ε�ֵ

	swap02(&x, &y);

	cout << "x=" << x << endl;
	cout << "y=" << y << endl;//x��y�����˸ı�
	system("pause");
	return 0;
}