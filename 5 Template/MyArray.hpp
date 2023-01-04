//�Լ���ͨ�õ�������

#pragma once
#include <iostream> //��׼io������

using namespace std; //��׼�����ռ�

template<class T>
class MyArray
{
public:

	//�вι��� ���� ����
	MyArray(int capacity)
	{
		cout << "MyArray���вι������" << endl;
		this->m_Capacity = capacity;
		this->m_Size = 0;
		this->pAddress = new T[this->m_Capacity];
	}

	//�������캯�� ��ֹǳ����
	MyArray(const MyArray& arr)
	{
		cout << "MyArray�Ŀ����������" << endl;
		
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		
		//����ǳ�������¶����������ظ��ͷ�
		//this->pAddress = arr.pAddress; 
		
		//��� �ֶ��ڶ�������һ�����ڴ�
		this->pAddress = new T[arr.m_Capacity];
		//��arr�е����ݶ���������
		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
	}

	//operator= ��ֹǳ�������� a = b = c
	MyArray& operator=(const MyArray& arr)
	{
		cout << "MyArray��operator=����" << endl;
		
		//���ж�ԭ�������Ƿ������� ����� ���ͷ�
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_Size = 0;
		}

		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < this->m_Capacity; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

		return *this;
	}

	//β�巨
	void Push_Back(const T & val)
	{
		//�ж������Ƿ���ڴ�С
		if (this->m_Capacity == this->m_Size)
		{
			return;
		}

		this->pAddress[this->m_Size] = val; //������ĩβ��������
		this->m_Size++; //���������С
	}

	//βɾ��
	void Pop_Back()
	{
		//���û����ʲ������һ��Ԫ�� ��Ϊβɾ
		if (this->m_Size == 0)
		{
			return;
		}

		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	T& operator[](int index) //���������������Ϊ��ֵ���� arr[0] = 100 ��Ҫ��������
	{
		return this->pAddress[index];
	}

	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}

	//���������С
	int getSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		if (this->pAddress != NULL)
		{
			cout << "MyArray����������" << endl;

			delete[] this->pAddress;
			this->pAddress = NULL;
		}
	}

private:
	T* pAddress; //ָ��ָ��������ٵ���ʵ����
	int m_Capacity; //��������
	int m_Size; //�����С
};
