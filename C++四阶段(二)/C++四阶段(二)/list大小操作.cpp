#include "iostream"
using namespace std;
#include <list>

//size();				//返回容器中元素的个数
//empty();				//判断容器是否为空
//resize(num);			//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
						//如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem);	//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。

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
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	if (l1.empty())
	{
		cout << "l1为空" << endl;
	}
	else
	{
		cout << "l1不为空" << endl;
		cout << "l1的元素个数" << l1.size() << endl;
		//重新指定大小
		l1.resize(10);
		printList(l1);
		l1.resize(15, 10000);
		printList(l1);
		l1.resize(3);
		printList(l1);
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}