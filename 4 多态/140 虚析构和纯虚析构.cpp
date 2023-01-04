#include <iostream>
#include <string>

using namespace std;

class Animal140
{
public:

	Animal140()
	{
		cout << "Animal ����" << endl;
	}

	//virtual ~Animal140() //������ �������ָ���ͷ��������ʱ���ɾ�������
	//{
	//	cout << "Animal ����" << endl;
	//}

	virtual ~Animal140() = 0; //�������� ��Ҫ���� Ҳ��Ҫʵ��

	virtual void speak() = 0;

};

Animal140::~Animal140() //��������
{
	cout << "animal��������" << endl;
}

class Cat140 :public Animal140
{
public:

	Cat140(string name)
	{
		cout << "cat ����" << endl;
		m_Name = new string(name);
	}

	~Cat140()
	{
		if (m_Name != NULL)
		{
			cout << "cat ����" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	virtual void speak()
	{
		cout << *m_Name << " cat is speaking" << endl;
	}

	string* m_Name;

};

void test14001()
{
	Animal140* a = new Cat140("Tom");

	a->speak();

	delete a;
}

int main140()
{
	test14001();

	return 0;
}
