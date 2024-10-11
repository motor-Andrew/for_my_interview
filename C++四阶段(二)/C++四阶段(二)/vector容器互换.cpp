#include "iostream"
#include <vector>
using namespace std;

//swap(vec);		// 将vec与本身的元素互换

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//基本使用
void test01()
{
	cout << "交换前：" << endl;
	vector<int>v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i + 1);
	}
	printVector(v1);
	vector<int>v2;
	for (int i = 0;i < 10;i++)
	{
		v2.push_back(10-i);
	}
	printVector(v2);

	//交换容器
	cout << "交换后：" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

//实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int>v1;
	for (int i = 0;i < 100000;i++)
	{
		v1.push_back(i + 1);
	}
	cout << "v1的容量" << v1.capacity() << endl;
	cout << "v1的大小" << v1.size() << endl;

	v1.resize(3);
	cout << "v1的容量" << v1.capacity() << endl;
	cout << "v1的大小" << v1.size() << endl;

	//swap缩小内存
	vector<int>(v1).swap(v1);		//vector<int>(v)   :匿名对象
	cout << "v1的容量" << v1.capacity() << endl;
	cout << "v1的大小" << v1.size() << endl;     
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}