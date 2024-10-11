#include "iostream"
using namespace std;
#include <set>

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

class MyCompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);
	printSet(s1);

	//指定排序规则为从大到小  
	set<int,MyCompare>s2;
	s2.insert(10);
	s2.insert(30);
	s2.insert(40);
	s2.insert(20);
	s2.insert(50);
	for (set<int, MyCompare>::iterator it = s2.begin();it != s2.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//set容器排序，存放自定义数据类型

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class ComparePerson
{
public:
	bool operator()(const Person &p1,const Person &p2)const
	{
		//按照年龄降序
		return p1.m_Age > p2.m_Age;
	}
};
void test02()
{
	//自定义的数据类型需要指定排序规则
	set<Person,ComparePerson>s1;
	//创建人
	Person p1("刘备", 23);
	Person p2("关羽", 27);
	Person p3("张飞", 25);
	Person p4("赵云", 21);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	for (set<Person>::iterator it = s1.begin();it != s1.end();it++)
	{
		cout << "姓名:" << it->m_Name << "	年龄:" << it->m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}