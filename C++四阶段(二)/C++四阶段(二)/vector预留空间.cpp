#include "iostream"
#include <vector>
using namespace std;

//reserve(int len);		//����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ��ʡ�

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
	//����reserveԤ���ռ�
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
	cout << "num= " << num <<endl;  //���û��v1.reserve(100000)���д�����num=30

}



int main()
{
	test01();

	system("pause");
	return 0;
}