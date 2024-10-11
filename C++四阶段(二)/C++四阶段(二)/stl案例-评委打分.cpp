#include "iostream"
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

//��������
//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ί����ͷ֣�ȡƽ���֡�
//
//ʵ�ֲ���
//��������ѡ�֣��ŵ�vector��
//����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
//sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
//deque��������һ�飬�ۼ��ܷ�
//��ȡƽ����


//ѡ����
class Person
{

public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;	//����
	int m_Score;	//ƽ����
};

void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < 5;i++)
	{
		string name = "ѡ��";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		//�������Ķ������������
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		//����ί�ķ�������deque������
		deque<int>d;
		for (int i = 0;i < 10;i++)
		{
			int score = rand() % 41 + 60;   //60-100
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end());
		/*for (int i = 0;i < d.size();i++)
		{
			cout << d.at(i) << " ";
		}
		cout << endl;*/
		d.pop_back();
		d.pop_front();
		/*for (int i = 0;i < d.size();i++)
		{
			cout << d.at(i) << " ";
		}
		cout << endl;*/
		int sum = 0;
		for (deque<int>::iterator it = d.begin();it != d.end();it++)
		{
			sum += *it;
		}
		int avg = sum / d.size();
		it->m_Score = avg;
		/*cout << avg<<endl;*/
	}
	
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		cout << "����" << it->m_Name << "	����" << it->m_Score << endl;
	}
}

int main()
{
	//���������
	srand((unsigned int)time(NULL));
//��������ѡ�֣��ŵ�vector��
	vector<Person> v;
	creatPerson(v);
	////����
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	//{
	//	cout << "����" << it->m_Name << "	����" << it->m_Score << endl;
	//}
//��5��ѡ�ִ��
	setScore(v);
//��ȡƽ����
	showScore(v);
}