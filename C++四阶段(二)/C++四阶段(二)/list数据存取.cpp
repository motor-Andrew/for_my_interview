#include "iostream"
using namespace std;
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
void test01()
{
	list<int>l1;
	//β��
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	//cout << L1.at(0) << endl;//���� ��֧��at��������
	//cout << L1[0] << endl; //����  ��֧��[]��ʽ�������� 
	//list�����������������������Կռ�洢���ݣ�������Ҳ��֧���������

	cout << "��һ��Ԫ��Ϊ�� " << l1.front() << endl;
	cout << "���һ��Ԫ��Ϊ�� " << l1.back() << endl;

	//list�����ĵ�������˫�����������֧���������
	list<int>::iterator it = l1.begin();
	//it = it + 1;//���󣬲�������Ծ���ʣ���ʹ��+1
	it++;  //֧�ֵ���˫��
}


int main()
{
	test01();
	system("pause");
	return 0;
}