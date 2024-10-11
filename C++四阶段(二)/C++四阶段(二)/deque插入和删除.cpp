#include "iostream"
#include "deque"
using namespace std;


//���˲��������

//push_back(elem);		//������β�����һ������
//push_front(elem);		//������ͷ������һ������
//pop_back();			//ɾ���������һ������
//pop_front();			//ɾ��������һ������

//ָ��λ�ò�����

//insert(pos, elem);		//��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ�á�
//insert(pos, n, elem);		//��posλ�ò���n��elem���ݣ��޷���ֵ��
//insert(pos, beg, end);	//��posλ�ò���[beg,end)��������ݣ��޷���ֵ��
//clear();					//�����������������
//erase(beg, end);			//ɾ��[beg,end)��������ݣ�������һ�����ݵ�λ�á�
//erase(pos);				//ɾ��posλ�õ����ݣ�������һ�����ݵ�λ�á�

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
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(88);
	d1.push_front(87);
	printDeque(d1);
	d1.pop_front();
	printDeque(d1);
	d1.pop_back();
	printDeque(d1);
}
void test02()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(88);
	d1.push_front(87);
	// 87 88 10 20
	printDeque(d1);
	d1.insert(d1.begin() + 2, 1000);
	//87 88 1000 10 20
	printDeque(d1);
	d1.insert(d1.begin(), 2, 1000);
	//1000 1000 87 88 1000 10 20
	printDeque(d1);

	//����������в���

	deque<int>d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin() + 2, d2.begin(), d2.end());
	//1000 1000 1 2 3 87 88 1000 10 20
	printDeque(d1);
}
void test03()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(88);
	d1.push_front(87);
	cout << *d1.begin() << endl;   //d1.begin()��ָ��
	//ɾ��
	deque<int>::iterator it = d1.begin();
	it++;
	d1.erase(it);
	//87 10 20
	printDeque(d1);
	d1.erase(d1.begin()+1, d1.end()-1);
	printDeque(d1);
	d1.clear();
	printDeque(d1);
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}