#include "iostream"
#include <vector>
using namespace std;

//reserve(int len);		//容器预留len个元素长度，预留位置不初始化，元素不可访问。

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//利用reserve预留空间
	int num = 0;
	int* p = NULL;
	vector<int>v1;
	v1.reserve(100000);
	for (int i = 0;i < 100000;i++)
	{
		v1.push_back(i + 1);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}
	cout << "num= " << num <<endl;  //如果没有v1.reserve(100000)这行代码则num=30

}



int main()
{
	test01();

	system("pause");
	return 0;
}