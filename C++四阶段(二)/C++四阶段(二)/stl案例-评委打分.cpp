#include "iostream"
#include <deque>
#include <vector>
#include <algorithm>
using namespace std;

//案例描述
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//
//实现步骤
//创建五名选手，放到vector中
//遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//sort算法对deque容器中分数排序，去除最高和最低分
//deque容器遍历一遍，累加总分
//获取平均分


//选手类
class Person
{

public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}
	string m_Name;	//姓名
	int m_Score;	//平均分
};

void creatPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0;i < 5;i++)
	{
		string name = "选手";
		name += nameSeed[i];
		int score = 0;
		Person p(name, score);
		//将创建的对象放在容器中
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	{
		//将评委的分数放在deque容器中
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
		cout << "姓名" << it->m_Name << "	分数" << it->m_Score << endl;
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
//创建五名选手，放到vector中
	vector<Person> v;
	creatPerson(v);
	////测试
	//for (vector<Person>::iterator it = v.begin();it != v.end();it++)
	//{
	//	cout << "姓名" << it->m_Name << "	分数" << it->m_Score << endl;
	//}
//给5名选手打分
	setScore(v);
//获取平均分
	showScore(v);
}