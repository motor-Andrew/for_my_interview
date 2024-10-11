#include "iostream"
using namespace std;
#include <set>

//简介：
//所有元素都会在插入时自动被排序

//本质：
//set/multiset属于关联式容器，底层结构是用二叉树实现。

//set和multiset区别：
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素

//set构造和赋值
//功能描述：创建set容器以及赋值

//构造：
//set<T> st;						//默认构造函数：
//set(const set& st);				//拷贝构造函数

//赋值：
//set& operator=(const set& st);	//重载等号操作符

//大小和交换
//size();		//返回容器中元素的数目
//empty();		//判断容器是否为空
//swap(st);		//交换两个集合容器

//插入和删除
//insert(elem);				//在容器中插入元素。
//clear();					//清除所有元素
//erase(pos);				//删除pos迭代器所指的元素，返回下一个元素的迭代器。
//erase(beg, end);			//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
//erase(elem);				//删除容器中值为elem的元素。

//find(key);			//查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key);			//统计key的元素个数
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void printmultiSet(multiset<int>& s)
{
	for (multiset<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	//10 20 30 40   自动排序 元素不重复
	printSet(s1);
	//拷贝构造
	set<int>s2(s1);
	printSet(s2);
	//赋值
	set<int>s3;
	s3 = s2;
	printSet(s3);
	//判断是否为空
	if (s1.empty())
	{
		cout << "s1为空" << endl;
	}
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1的大小为" << s1.size() << endl;
	}
	set<int>s4;
	s4.insert(50);
	s4.insert(80);
	s4.insert(60);
	s4.insert(70);
	cout << "交换前" <<endl;
	printSet(s1);
	printSet(s4);
	s1.swap(s4);
	cout << "交换后" << endl;
	printSet(s1);
	printSet(s4);

	//删除
	s2.erase(s2.begin());
	printSet(s2);

	s2.erase(30);
	printSet(s2);

	s2.erase(s2.begin(), s2.end());
	printSet(s2);

	s1.clear();
	printSet(s1);

	set<int>::iterator pos = s3.find(10);
	if (pos != s3.end())
	{
		cout << "找到元素" << *pos << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
}
//统计
void test02()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(30);
	s1.insert(30);
	int num = s1.count(30);
	//对于set而言 num=0/1
	cout << "num= " << num << endl;
}


//set和multiset的区别    multiset 元素可重复
void test03()
{
	set<int>s1;
	pair<set<int>::iterator, bool>  ret = s1.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else
	{
		cout << "第一次插入失败" << endl;
	}
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else
	{
		cout << "第二次插入失败" << endl;
	}
	printSet(s1);
	multiset<int>s2;
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	printmultiSet(s2);
}

//pair对组

//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);
void test04()
{
	pair<string,int>p("tom",18);
	cout << "姓名:" << p.first << "	年龄:" << p.second << endl;
	pair<string, int> p2 = make_pair("Jerry", 19);
	cout << "姓名:" << p2.first << "	年龄:" << p2.second << endl;
}

int main()
{
	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return 0;
}