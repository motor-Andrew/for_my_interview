#include "iostream"
#include "deque"
using namespace std;


//两端插入操作：

//push_back(elem);		//在容器尾部添加一个数据
//push_front(elem);		//在容器头部插入一个数据
//pop_back();			//删除容器最后一个数据
//pop_front();			//删除容器第一个数据

//指定位置操作：

//insert(pos, elem);		//在pos位置插入一个elem元素的拷贝，返回新数据的位置。
//insert(pos, n, elem);		//在pos位置插入n个elem数据，无返回值。
//insert(pos, beg, end);	//在pos位置插入[beg,end)区间的数据，无返回值。
//clear();					//清空容器的所有数据
//erase(beg, end);			//删除[beg,end)区间的数据，返回下一个数据的位置。
//erase(pos);				//删除pos位置的数据，返回下一个数据的位置。

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

	//按照区间进行插入

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
	cout << *d1.begin() << endl;   //d1.begin()是指针
	//删除
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