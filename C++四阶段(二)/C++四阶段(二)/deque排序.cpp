#include "iostream"
#include "deque"
#include <algorithm>
using namespace std;

//sort(iterator beg, iterator end)		//对beg和end区间内元素进行排序

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
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(11);
	d1.push_front(12);
	d1.push_front(13);
	cout << "排序前： ";
	printDeque(d1);
	//vector也可以用sort()函数。
	sort(d1.begin(), d1.end());
	cout << "排序后： ";
	printDeque(d1);
}




int main()
{
	test01();
	system("pause");
	return 0;
}