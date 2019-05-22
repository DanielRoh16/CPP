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

	void AddNum(int a_num)
	{
		m_sum = m_sum + a_num;
	}

	void PrintValue()
	{
		cout << "SUM = " << m_sum << endl;
	}
};

int main() 
{
	MySum temp;

	temp.PrintValue();
	temp.AddNum(5);
	temp.PrintValue();

	return 0;
}