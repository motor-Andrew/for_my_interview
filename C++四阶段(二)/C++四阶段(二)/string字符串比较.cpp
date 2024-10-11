#include "iostream"
using namespace std;

//int compare(const string& s) const;   //与字符串s比较
//int compare(const char* s) const;		//与字符串s比较

//字符串比较

void test01()
{
	string str1 = "aello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
	{
		cout << "str1 == str2" << endl;
	}
	else if (str1.compare(str2) == 1)
	{
		cout << "str1 > str2" << endl;
	}
	else
	{
		cout << "str1 < str2" << endl;
	}
}
int main()
{
	test01();
	system("pause");
	return 0;
}