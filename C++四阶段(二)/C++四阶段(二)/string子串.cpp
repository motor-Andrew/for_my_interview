#include "iostream"
using namespace std;

//string substr(int pos = 0, int n = npos) const;		//������pos��ʼ��n���ַ���ɵ��ַ���
void test01()
{
	string str = "hello";
	string str1 = str.substr(1);
	cout << "str1= " << str1 << endl;
	string str2 = str.substr(1, 3);
	cout << "str2= " << str2 << endl;
}
void test02()
{
	string email = "zhangsan@sina.com";
	int pos = email.find("@");
	string name = email.substr(0, pos);
	cout << "����: " << name << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}