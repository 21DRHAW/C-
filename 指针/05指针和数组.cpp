#include<iostream>
using namespace std;
int main5()
{
	//����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	int* p = arr;//arr����������׵�ַ
	cout << "��һ��Ԫ��Ϊ��" << *p << endl;

	p++;//����ƫ��4/8���ֽ�
	cout<< "�ڶ���Ԫ��Ϊ��" << *p << endl;


	//����ָ���������
    int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	

	system("pause");
	return 0;
}