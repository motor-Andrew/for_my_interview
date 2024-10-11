#include "iostream"
using namespace std;
#include <list>

//push_back(elem);			//������β������һ��Ԫ��
//pop_back();				//ɾ�����������һ��Ԫ��
//push_front(elem);			//��������ͷ����һ��Ԫ��
//pop_front();				//��������ͷ�Ƴ���һ��Ԫ��
//insert(pos, elem);		//��posλ�ò�elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end);	//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();					//�Ƴ���������������
//erase(beg, end);			//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);				//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�
//remove(elem);				//ɾ��������������elemֵƥ���Ԫ�ء�

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
	//ͷ��
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	printList(l1);
	//βɾ
	l1.pop_back();
	printList(l1);
	//ͷɾ
	l1.pop_front();
	printList(l1);
	//insert����
	list<int>::iterator it = l1.begin();
	it++;
	it++;
	l1.insert(it, 50);
	printList(l1);
	//ɾ��
	it = l1.begin();
	it++;
	l1.erase(it);
	printList(l1);

	//�Ƴ�
	l1.push_back(10000);
	l1.push_back(10000);
	l1.push_back(10000);
	l1.push_back(10000);
	printList(l1);
	l1.remove(10000);
	printList(l1);
	l1.clear();
	printList(l1);
}


int main()
{
	test01();
	system("pause");
	return 0;
}