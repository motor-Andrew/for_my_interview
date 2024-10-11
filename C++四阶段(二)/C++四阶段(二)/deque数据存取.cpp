#include "iostream"
#include "deque"
using namespace std;

//at(int idx);		//返回索引idx所指的数据
//operator[];		//返回索引idx所指的数据
//front();			//返回容器中第一个数据元素
//back();			//返回容器中最后一个数据元素


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
	cout << "第一个元素为" << d1.front() << endl;
	cout << "最后一个元素为" << d1.back() << endl;
}




int main()
{
	test01();
	system("pause");
	return 0;
}