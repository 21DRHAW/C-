#include<iostream>
using namespace std;
int main4()
{
	int a = 10;
	int b = 20;
	//1��const����ָ��--����ָ��
	//����ָ�룺const int *p=&a;
	//�ص㣺ָ���ָ������޸ģ���ָ��ָ���ֵ�������޸�
	//const int* p = &a;
	//p = &b;

	//2��const���γ���--ָ�볣��
	// ָ�볣����int * const p=&a;
	//�ص㣺ָ���ָ�򲻿����޸ģ���ָ��ָ���ֵ�����޸�

	/*int* const p = &a;
	*p = 20;
	*/

	//3��const������ָ�������γ��� 
	//const int *const p=&a;
	const int* const p = &b;
	system("pause");
	return 0;
}