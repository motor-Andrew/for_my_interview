#include "iostream"
using namespace std;

//�ַ���ƴ��

//string& operator+=(const char* str); //����+=������
//string& operator+=(const char c); //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char* s);  //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s); //ͬoperator+=(const string& str)
//string& append(const string& s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β

void test01()
{
	string str1 = "��";
	cout << "str1= " << str1 << endl;
	str1 += "���ҵļ�";
	cout << "str1= " << str1 << endl;
	str1 += '!';
	cout << "str1= " << str1 << endl;
	string str2 = "�Ұ��ҵĹ�";
	str1 += str2;
	cout << "str1= " << str1 << endl;
	
	str1.append("!�Ұ�");
	cout << "str1= " << str1 << endl;
	string str3 = "�ҹ���";
	str1.append(str3);
	cout << "str1= " << str1 << endl;
	str1.append("abcdefg", 3);
	cout << "str1= " << str1 << endl;
	str1.append("abcdefghijklmn", 3, 4);
	cout << "str1= " << str1 << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}