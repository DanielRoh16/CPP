#include <iostream>
#pragma once

class mySum
{
public:
	mySum();

	void addNum(int a_num);

	int operator+(int a_num);

	void operator=(int a_num);

	void printValue();

private:
	int m_num;
	
};

