#include "iostream"
using namespace std;

void test01()
{
	string str = "hello";
	cout << "str= " << str << endl;
	//1��char& operator[](int n);  //ͨ��[]��ʽȡ�ַ�
	for (int i = 0;i < str.size();i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;


	//2��char& at(int n);			//ͨ��at������ȡ�ַ�
	for (int i = 0;i < str.size();i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	str[0] = 'x';
	cout << "str= " << str << endl;
	str.at(1) = 'x';
	cout << "str= " << str << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}