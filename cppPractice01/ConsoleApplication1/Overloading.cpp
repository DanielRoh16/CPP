/*
#include <iostream>
using namespace std;

class MySum
{
private:
	int m_sum;

public:
	MySum()
	{
		m_sum = 0;
	}

	void addNum(int a_num)
	{
		m_sum = m_sum + a_num;
	}

	int GetNum()
	{
		return m_sum;
	}

	void SetNum(int a_num)
	{
		m_sum = a_num;
	}
	void PrintValue()
	{
		cout << "Sum = " << m_sum << endl;
	}
};

int main()
{
	MySum temp, data;
	temp.addNum(5);
	data.SetNum(temp.GetNum() + 7);

	data.PrintValue();
}
*/

#include <iostream>
using namespace std;

class mySum
{
private:
	int m_sum;

public:
	mySum()
	{
		m_sum = 0;
	}
	void addNum(int a_num)
	{
		m_sum = m_sum + a_num;
	}
	void printValue()
	{
		cout << "Sum = " << m_sum << endl;
	}
	int operator+(int a_num)
	{
		return m_sum + a_num;
	}
	void operator=(int a_num)
	{
		m_sum = a_num;
	}
};

int main() 
{
	mySum temp, data;

	temp.addNum(-7);
	data = temp + (-5);
	data.printValue();
}
