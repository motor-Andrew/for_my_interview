#include "iostream"
using namespace std;
#include <algorithm>
#include <list>

//front();		//返回第一个元素。
//back();		//返回最后一个元素。

void printList(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
bool myCompare(int v1,int v2)
{
	//降序 就让第一个数大于第二个数
	return v1 > v2;
}
void test01()
{
	list<int>l1;
	//尾插
	l1.push_back(30);
	l1.push_back(50);
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	printList(l1);
	//排序前
	cout << "排序前" << endl;
	l1.reverse();
	printList(l1);
	//所有不支持随机访问迭代器的容器，不可以使用标准算法
	//sort(l1.begin(),l1.end()); 
	//不支持随机访问迭代器的容器，内部会提供对应的一些算法
	cout << "排序后" << endl;
	l1.sort();  //默认从小到大升序
	printList(l1);
	cout << "降序" << endl;
	l1.sort(myCompare);
	printList(l1);
}


int main()
{
	test01();
	system("pause");
	return 0;
}