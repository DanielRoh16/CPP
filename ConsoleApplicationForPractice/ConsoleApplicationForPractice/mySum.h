#include <iostream>
#include <malloc.h>
#pragma once

class mySum
{
public:
	mySum();
	~mySum();

	void addNum(int a_num);

	int operator+(int a_num);

	void operator=(int a_num);

	void printValue();


private:
	int m_num;
	
};

