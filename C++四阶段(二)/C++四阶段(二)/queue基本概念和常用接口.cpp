#include "iostream"
using namespace std;
#include <queue>

//先进先出   push入队  pop出队
//不可遍历
//可以判断容器是否为空
//可以返回元素个数

//功能描述：栈容器常用的对外接口
//构造函数：
//queue<T> que;										//queue采用模板类实现，queue对象的默认构造形式
//queue(const queue& que);							//拷贝构造函数
//赋值操作：queue& operator=(const queue& que);		//重载等号操作符
//数据存取：
// push(elem);										//往队尾添加元素
//pop();											//从队头移除第一个元素
//back();											//返回最后一个元素
//front();											//返回第一个元素
//大小操作：

//empty();											//判断堆栈是否为空
//size();											//返回栈的大小

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
	//创建队列
	queue<Person>q;
	//准备数据
	Person p1("唐僧", 1000);
	Person p2("孙悟空", 999);
	Person p3("猪八戒", 998);
	Person p4("沙悟净", 997);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	//只要队头不为空，查看队头，查看队尾，出队
	cout << "队列的大小" << q.size() << endl;
	while (!q.empty())
	{
		//查看队头
		cout << "队头姓名：" << q.front().m_Name << "年龄" << q.front().m_Age << endl;
		//查看队尾
		cout << "队尾姓名：" << q.back().m_Name << "年龄" << q.back().m_Age << endl;
		//出队
		q.pop();
	}
	cout << "队列的大小" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}