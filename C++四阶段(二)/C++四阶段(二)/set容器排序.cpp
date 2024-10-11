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

	//ָ���������Ϊ�Ӵ�С  
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
//set�������򣬴���Զ�����������

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
		//�������併��
		return p1.m_Age > p2.m_Age;
	}
};
void test02()
{
	//�Զ��������������Ҫָ���������
	set<Person,ComparePerson>s1;
	//������
	Person p1("����", 23);
	Person p2("����", 27);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);
	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);
	for (set<Person>::iterator it = s1.begin();it != s1.end();it++)
	{
		cout << "����:" << it->m_Name << "	����:" << it->m_Age << endl;
	}
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}