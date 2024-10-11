#include "iostream"
#include "deque"
#include <algorithm>
using namespace std;

//sort(iterator beg, iterator end)		//��beg��end������Ԫ�ؽ�������

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
	d1.push_back(30);
	d1.push_front(11);
	d1.push_front(12);
	d1.push_front(13);
	cout << "����ǰ�� ";
	printDeque(d1);
	//vectorҲ������sort()������
	sort(d1.begin(), d1.end());
	cout << "����� ";
	printDeque(d1);
}




int main()
{
	test01();
	system("pause");
	return 0;
}