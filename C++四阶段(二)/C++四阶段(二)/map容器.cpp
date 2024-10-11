#include "iostream"
using namespace std;
#include <map>

//��飺
//map������Ԫ�ض���pair
//pair�е�һ��Ԫ��Ϊkey����ֵ�������������ã��ڶ���Ԫ��Ϊvalue��ʵֵ��
//����Ԫ�ض������Ԫ�صļ�ֵ�Զ�����
//���ʣ�
//map / multimap���ڹ���ʽ�������ײ�ṹ���ö�����ʵ�֡�
//�ŵ㣺
//���Ը���keyֵ�����ҵ�valueֵ
//map��multimap����
//map���������������ظ�keyֵԪ��
//multimap�������������ظ�keyֵԪ��

//map����͸�ֵ
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin();it != m.end();it++)
	{
		cout << "key= " << it->first << "	value= " << it->second << endl;
	}
	cout << endl;
}
void test01()
{
	map<int,int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 40));
	printMap(m);
	//��������
	map<int, int>m1(m);
	printMap(m1);

	//��ֵ
	map<int, int>m2;
	m2 = m1;
	printMap(m2);
}

//��С����
//size();		//����������Ԫ�ص���Ŀ
//empty();		//�ж������Ƿ�Ϊ��
//swap(st);		//����������������

//��С
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	if (m.empty())
	{
		cout << "mΪ��" << endl;
	}
	else
	{
		cout << "m��Ϊ��" << endl;
		cout << "m�Ĵ�СΪ��" << m.size() << endl;
	}
}
//����
void test03()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));

	map<int, int>m2;
	m2.insert(pair<int, int>(4, 40));
	m2.insert(pair<int, int>(5, 50));
	m2.insert(pair<int, int>(6, 60));

	cout << "����ǰ��" << endl;
	printMap(m1);
	printMap(m2);
	m1.swap(m2);
	cout << "������" << endl;
	printMap(m1);
	printMap(m2);
}

//�����ɾ��
//insert(elem);			//�������в���Ԫ��
//clear();				//�������Ԫ��
//erase(pos);			//ɾ��pos��������ָ��Ԫ�أ�������һ��Ԫ�صĵ�����
//erase(beg, end);		//ɾ������[beg,end)������Ԫ�� ��������һ��Ԫ�صĵ�����
//erase(key);			//ɾ��������ֵΪkey��Ԫ��

void test04()
{
	//����
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2,20));
	m.insert(map<int,int>::value_type(3,30));
	m[4] = 40;
	//[]������ʹ�� ����;  ��������key����value
	cout << m[5] << endl;
	printMap(m);
	//ɾ��
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//m.erase(m.begin(), m.end());

	m.clear();
	printMap(m);
}
//map���Һ�ͳ��
//find(key);		//����key�Ƿ����,�����ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
//count(key);		//ͳ��key��Ԫ�ظ���
void test05()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));  //map�����������ͬkeyֵ  countͳ�ƽ��Ϊ1��0
	m.insert(pair<int, int>(3, 40));



	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "�鵽��Ԫ��key= " << pos->first << "value= " << pos->second << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ��" << endl;
	}
	int num = m.count(3);
	cout << "num= " << num << endl;
}
//map��������
class ComPare
{
public:
	bool operator()(int v1,int v2)const
	{
		return v1 > v2;
	}
};
void test06()
{
	map<int, int,ComPare>m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	for (map<int, int, ComPare>::iterator it = m.begin();it != m.end();it++)
	{
		cout << "key= " << it->first << "value= " << it->second << endl;
	}
}
int main()
{
	//test01();
	//test02();
	//test03(); 
	//test04();
	//test05();
	test06();
	system("pause");
	return 0;
}