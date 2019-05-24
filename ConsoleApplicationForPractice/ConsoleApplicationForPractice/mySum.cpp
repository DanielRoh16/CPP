#include "mySum.h"

using namespace std;

mySum::mySum()
{
	m_num = 0;
	cout << "constructor executed" << endl;
}
mySum::~mySum()
{
	cout << "destructor executed" << endl;
}


void mySum::addNum(int a_num)
{
	m_num = m_num + a_num;
}

int mySum::operator+(int a_num)
{
	return m_num + a_num;
}

void mySum::operator=(int a_num)
{
	m_num = a_num;
}

void mySum::printValue()
{
	cout << "Sum = " << m_num << endl;
}

