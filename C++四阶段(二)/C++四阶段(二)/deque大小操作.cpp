#include "iostream"
#include "deque"
using namespace std;

//deque.empty();						//�ж������Ƿ�Ϊ��
//deque.size();							//����������Ԫ�صĸ���
//deque.resize(num);					//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ�����λ�á�
										//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����
//deque.resize(num, elem);				//����ָ�������ĳ���Ϊnum,�������䳤������elemֵ�����λ�á�
										//���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ����

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		//*it = 100;    �����е����ݲ������޸�
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int>d1;
	for (int i = 0;i < 10;i++)
	{
		d1.push_back(i + 1);
	}
	printDeque(d1);
	if (d1.empty())
	{
		cout << "d1Ϊ��" << endl;
	}
	else
	{
		cout << "d1��Ϊ��" << endl;
		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
		//dequeû�������ĸ���
		d1.resize(15);
		printDeque(d1);
		d1.resize(20, 2);
		printDeque(d1);
		d1.resize(5);
		printDeque(d1);

	}
}




int main()
{
	test01();
	system("pause");
	return 0;
}