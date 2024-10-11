#include "iostream"
#include <vector>
using namespace std;

//vector& operator=(const vector& vec);		//���صȺŲ�����
//assign(beg, end);							//��[beg, end)�����е����ݿ�����ֵ������
//assign(n, elem);							//��n��elem������ֵ������


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
	vector<int>v1;
	for (int i = 0;i < 10;i++)
	{
		v1.push_back(i + 1);
	}
	printVector(v1);

	//���صȺŲ�����
	vector<int>v2;
	v2 = v1;
	printVector(v2);
	//��[beg, end)�����е����ݿ�����ֵ������
	vector<int>v3;
	v3.assign(v1.begin(), v1.end() - 5);
	printVector(v3);
	vector<int>v4;
	//��n��elem������ֵ������
	v4.assign(10, 100);
	printVector(v4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}