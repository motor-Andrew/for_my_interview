#include "iostream"
#include "deque"
using namespace std;

//at(int idx);		//��������idx��ָ������
//operator[];		//��������idx��ָ������
//front();			//���������е�һ������Ԫ��
//back();			//�������������һ������Ԫ��


void test01()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(11);
	d1.push_front(12);
	d1.push_front(13);
	for (int i = 0;i < d1.size();i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;
	for (int i = 0;i < d1.size();i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;
	cout << "��һ��Ԫ��Ϊ" << d1.front() << endl;
	cout << "���һ��Ԫ��Ϊ" << d1.back() << endl;
}




int main()
{
	test01();
	system("pause");
	return 0;
}