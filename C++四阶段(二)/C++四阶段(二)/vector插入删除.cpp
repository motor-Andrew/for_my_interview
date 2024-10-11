#include "iostream"
#include <vector>
using namespace std;

//push_back(ele);									//β������Ԫ��ele
//pop_back();										//ɾ�����һ��Ԫ��
//insert(const_iterator pos, ele);					//������ָ��λ��pos����Ԫ��ele
//insert(const_iterator pos, int count, ele);		//������ָ��λ��pos����count��Ԫ��ele
//erase(const_iterator pos);						//ɾ��������ָ���Ԫ��
//erase(const_iterator start, const_iterator end);	//ɾ����������start��end֮���Ԫ��
//clear();											//ɾ������������Ԫ��


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
	for (int i = 1;i <= 10;i++)
	{
		v1.push_back(10*i);
	}
	//β��
	printVector(v1);
	//βɾ
	v1.pop_back();
	printVector(v1);
	//����ָ��λ��
	v1.insert(v1.begin()+1, 100);
	printVector(v1);
	v1.insert(v1.begin() + 5,10, 100);
	printVector(v1);
	//ָ��λ��ɾ��
	v1.erase(v1.begin() + 16);
	printVector(v1);
	//���
	v1.clear();
	printVector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}