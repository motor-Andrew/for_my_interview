#include "iostream"
using namespace std;
#include <algorithm>
#include <list>

//front();		//���ص�һ��Ԫ�ء�
//back();		//�������һ��Ԫ�ء�

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2)
{
	//���� ���õ�һ�������ڵڶ�����
	return v1 > v2;
}
void test01()
{
	list<int>l1;
	//β��
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	printList(l1);
	//����ǰ
	cout << "����ǰ" << endl;
	l1.reverse();
	printList(l1);
	//���в�֧��������ʵ�������������������ʹ�ñ�׼�㷨
	//sort(l1.begin(),l1.end()); 
	//��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	cout << "�����" << endl;
	l1.sort();  //Ĭ�ϴ�С��������
	printList(l1);
	cout << "����" << endl;
	l1.sort(myCompare);
	printList(l1);
}


int main()
{
	test01();
	system("pause");
	return 0;
}