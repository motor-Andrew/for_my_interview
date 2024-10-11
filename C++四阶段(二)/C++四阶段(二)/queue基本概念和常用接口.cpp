#include "iostream"
using namespace std;
#include <queue>

//�Ƚ��ȳ�   push���  pop����
//���ɱ���
//�����ж������Ƿ�Ϊ��
//���Է���Ԫ�ظ���

//����������ջ�������õĶ���ӿ�
//���캯����
//queue<T> que;										//queue����ģ����ʵ�֣�queue�����Ĭ�Ϲ�����ʽ
//queue(const queue& que);							//�������캯��
//��ֵ������queue& operator=(const queue& que);		//���صȺŲ�����
//���ݴ�ȡ��
// push(elem);										//����β���Ԫ��
//pop();											//�Ӷ�ͷ�Ƴ���һ��Ԫ��
//back();											//�������һ��Ԫ��
//front();											//���ص�һ��Ԫ��
//��С������

//empty();											//�ж϶�ջ�Ƿ�Ϊ��
//size();											//����ջ�Ĵ�С

class Person
{
public:
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};

void test01()
{
	//��������
	queue<Person>q;
	//׼������
	Person p1("��ɮ", 1000);
	Person p2("�����", 999);
	Person p3("��˽�", 998);
	Person p4("ɳ��", 997);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//ֻҪ��ͷ��Ϊ�գ��鿴��ͷ���鿴��β������
	cout << "���еĴ�С" << q.size() << endl;
	while (!q.empty())
	{
		//�鿴��ͷ
		cout << "��ͷ������" << q.front().m_Name << "����" << q.front().m_Age << endl;
		//�鿴��β
		cout << "��β������" << q.back().m_Name << "����" << q.back().m_Age << endl;
		//����
		q.pop();
	}
	cout << "���еĴ�С" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}