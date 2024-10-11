#include "iostream"
#include <vector>
#include <map>
using namespace std;

//��������
//��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//Ա����Ϣ�� : ���� ������ɣ����ŷ�Ϊ���߻����������з�
//�����10��Ա�����䲿�ź͹���
//ͨ��multimap������Ϣ�Ĳ��� key(���ű��) value(Ա��)
//�ֲ�����ʾԱ����Ϣ

//ʵ�ֲ���
//����10��Ա�����ŵ�vector��
//����vector������ȡ��ÿ��Ա���������������
//����󣬽�Ա�����ű����Ϊkey������Ա����Ϊvalue�����뵽multimap������
//�ֲ�����ʾԱ����Ϣ

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_Name;
	int m_Salary;
};
void createWorker(vector<Worker>& v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0;i < 10;i++)
	{
		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10001 + 10000;
		v.push_back(worker);
	}
}
void setGroup(vector<Worker>& v, multimap<int, Worker>& m)
{
	for (vector<Worker>::iterator it = v.begin();it != v.end();it++)
	{
		//����������ű��
		int deptId = rand() % 3;
		//��Ա�����������
		m.insert(pair<int, Worker>(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int,Worker>&m)
{
	cout << "�߻�����" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);  //ͳ�Ʋ߻����ž�������
	int index = 0;
	for (;pos != m.end() && index != count;pos++,index++)
	{
		cout << "����" << pos->second.m_Name << "����" << pos->second.m_Salary << endl;
	}
	cout << "--------------------" << endl;
	cout << "��������" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);  //ͳ�Ʋ߻����ž�������
	index = 0;
	for (;pos != m.end() && index != count;pos++, index++)
	{
		cout << "����" << pos->second.m_Name << "����" << pos->second.m_Salary << endl;
	}
	cout << "--------------------" << endl;
	cout << "�з�����" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);  //ͳ�Ʋ߻����ž�������
	index = 0;
	for (;pos != m.end() && index != count;pos++, index++)
	{
		cout << "����" << pos->second.m_Name << "����" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	//����Ա��
	vector<Worker>vWorker;
	createWorker(vWorker);
	////����
	//for (vector<Worker>::iterator it = vWorker.begin();it != vWorker.end();it++)
	//{
	//	cout << "����:" << it->m_Name << "	нˮ" << it->m_Salary << endl;
	//}

	//Ա������
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);

	//������ʾԱ��
	showWorkerByGroup(mWorker);
	system("pause");
	return 0;
}