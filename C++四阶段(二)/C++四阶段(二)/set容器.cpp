#include "iostream"
using namespace std;
#include <set>

//��飺
//����Ԫ�ض����ڲ���ʱ�Զ�������

//���ʣ�
//set/multiset���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�

//set��multiset����
//set���������������ظ���Ԫ��
//multiset�������������ظ���Ԫ��

//set����͸�ֵ
//��������������set�����Լ���ֵ

//���죺
//set<T> st;						//Ĭ�Ϲ��캯����
//set(const set& st);				//�������캯��

//��ֵ��
//set& operator=(const set& st);	//���صȺŲ�����

//��С�ͽ���
//size();		//����������Ԫ�ص���Ŀ
//empty();		//�ж������Ƿ�Ϊ��
//swap(st);		//����������������

//�����ɾ��
//insert(elem);				//�������в���Ԫ�ء�
//clear();					//�������Ԫ��
//erase(pos);				//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�������
//erase(beg, end);			//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�������
//erase(elem);				//ɾ��������ֵΪelem��Ԫ�ء�

//find(key);			//����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key);			//ͳ��key��Ԫ�ظ���
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
	//10 20 30 40   �Զ����� Ԫ�ز��ظ�
	printSet(s1);
	//��������
	set<int>s2(s1);
	printSet(s2);
	//��ֵ
	set<int>s3;
	s3 = s2;
	printSet(s3);
	//�ж��Ƿ�Ϊ��
	if (s1.empty())
	{
		cout << "s1Ϊ��" << endl;
	}
	else
	{
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ" << s1.size() << endl;
	}
	set<int>s4;
	s4.insert(50);
	s4.insert(80);
	s4.insert(60);
	s4.insert(70);
	cout << "����ǰ" <<endl;
	printSet(s1);
	printSet(s4);
	s1.swap(s4);
	cout << "������" << endl;
	printSet(s1);
	printSet(s4);

	//ɾ��
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
		cout << "�ҵ�Ԫ��" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
}
//ͳ��
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
	//����set���� num=0/1
	cout << "num= " << num << endl;
}


//set��multiset������    multiset Ԫ�ؿ��ظ�
void test03()
{
	set<int>s1;
	pair<set<int>::iterator, bool>  ret = s1.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else
	{
		cout << "��һ�β���ʧ��" << endl;
	}
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else
	{
		cout << "�ڶ��β���ʧ��" << endl;
	}
	printSet(s1);
	multiset<int>s2;
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	s2.insert(10);
	printmultiSet(s2);
}

//pair����

//pair<type, type> p(value1, value2);
//pair<type, type> p = make_pair(value1, value2);
void test04()
{
	pair<string,int>p("tom",18);
	cout << "����:" << p.first << "	����:" << p.second << endl;
	pair<string, int> p2 = make_pair("Jerry", 19);
	cout << "����:" << p2.first << "	����:" << p2.second << endl;
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