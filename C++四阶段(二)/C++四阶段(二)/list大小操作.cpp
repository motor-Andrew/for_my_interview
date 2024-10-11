#include "iostream"
using namespace std;
#include <list>

//size();				//����������Ԫ�صĸ���
//empty();				//�ж������Ƿ�Ϊ��
//resize(num);			//����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ�����λ�á�
						//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//resize(num, elem);	//����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ�á�

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	list<int>l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	if (l1.empty())
	{
		cout << "l1Ϊ��" << endl;
	}
	else
	{
		cout << "l1��Ϊ��" << endl;
		cout << "l1��Ԫ�ظ���" << l1.size() << endl;
		//����ָ����С
		l1.resize(10);
		printList(l1);
		l1.resize(15, 10000);
		printList(l1);
		l1.resize(3);
		printList(l1);
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}