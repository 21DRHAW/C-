#include<iostream>
using namespace std;
int main2()
{
	int a = 10;
	//int* p;
	//p = &a;
	int* p = &a;


	//32λ����ϵͳ�£�ָ�붼��ռ4���ֽڿռ��С������ʲô��������
	//64λ����ϵͳ�£�ָ�붼��ռ8���ֽڿռ��С������ʲô��������
	cout << "ָ��pռ�õ��ڴ�ռ�Ϊ��" << sizeof(p) << endl;
	cout << "ָ��pռ�õ��ڴ�ռ�Ϊ��" << sizeof(int *) << endl;


	system("pause");
	return 0;
}