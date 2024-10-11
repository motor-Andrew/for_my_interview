#include "iostream"
using namespace std;
#include <map>

//简介：
//map中所有元素都是pair
//pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
//所有元素都会根据元素的键值自动排序
//本质：
//map / multimap属于关联式容器，底层结构是用二叉树实现。
//优点：
//可以根据key值快速找到value值
//map和multimap区别：
//map不允许容器中有重复key值元素
//multimap允许容器中有重复key值元素

//map构造和赋值
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
	//拷贝构造
	map<int, int>m1(m);
	printMap(m1);

	//赋值
	map<int, int>m2;
	m2 = m1;
	printMap(m2);
}

//大小交换
//size();		//返回容器中元素的数目
//empty();		//判断容器是否为空
//swap(st);		//交换两个集合容器

//大小
void test02()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	if (m.empty())
	{
		cout << "m为空" << endl;
	}
	else
	{
		cout << "m不为空" << endl;
		cout << "m的大小为：" << m.size() << endl;
	}
}
//交换
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

	cout << "交换前：" << endl;
	printMap(m1);
	printMap(m2);
	m1.swap(m2);
	cout << "交换后：" << endl;
	printMap(m1);
	printMap(m2);
}

//插入和删除
//insert(elem);			//在容器中插入元素
//clear();				//清除所有元素
//erase(pos);			//删除pos迭代器所指的元素，返回下一个元素的迭代器
//erase(beg, end);		//删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器
//erase(key);			//删除容器中值为key的元素

void test04()
{
	//插入
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2,20));
	m.insert(map<int,int>::value_type(3,30));
	m[4] = 40;
	//[]不建议使用 ，用途  可以利用key访问value
	cout << m[5] << endl;
	printMap(m);
	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3);
	printMap(m);

	//m.erase(m.begin(), m.end());

	m.clear();
	printMap(m);
}
//map查找和统计
//find(key);		//查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key);		//统计key的元素个数
void test05()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));  //map不允许插入相同key值  count统计结果为1或0
	m.insert(pair<int, int>(3, 40));



	map<int, int>::iterator pos = m.find(3);
	if (pos != m.end())
	{
		cout << "查到了元素key= " << pos->first << "value= " << pos->second << endl;
	}
	else
	{
		cout << "未找到元素" << endl;
	}
	int num = m.count(3);
	cout << "num= " << num << endl;
}
//map容器排序
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