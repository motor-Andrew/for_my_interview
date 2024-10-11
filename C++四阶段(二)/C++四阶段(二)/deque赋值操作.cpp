#include "iostream"
#include "deque"
using namespace std;

//deque& operator=(const deque& deq);	//重载等号操作符
//assign(beg, end);						//将[beg, end)区间中的数据拷贝赋值给本身。
//assign(n, elem);						//将n个elem拷贝赋值给本身。

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		//*it = 100;    容器中的数据不可以修改
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

	//=赋值
	deque<int>d2;
	d2 = d1;
	printDeque(d2);

	deque<int>d3;
	d3.assign(d1.begin(), d1.end() - 2);
	printDeque(d3);

	deque<int>d4;
	d4.assign(10, 99);
	printDeque(d4);
}




int main()
{
	test01();
	system("pause");
	return 0;
}