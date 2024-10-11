#include "iostream"
#include <vector>
using namespace std;

//swap(vec);		// ��vec�뱾���Ԫ�ػ���

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//����ʹ��
void test01()
{
	cout << "����ǰ��" << endl;
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

	//��������
	cout << "������" << endl;
	v1.swap(v2);
	printVector(v1);
	printVector(v2);
}

//ʵ����;
//����swap���������ڴ�ռ�
void test02()
{
	vector<int>v1;
	for (int i = 0;i < 100000;i++)
	{
		v1.push_back(i + 1);
	}
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1�Ĵ�С" << v1.size() << endl;

	v1.resize(3);
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1�Ĵ�С" << v1.size() << endl;

	//swap��С�ڴ�
	vector<int>(v1).swap(v1);		//vector<int>(v)   :��������
	cout << "v1������" << v1.capacity() << endl;
	cout << "v1�Ĵ�С" << v1.size() << endl;     
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}