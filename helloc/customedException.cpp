
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cexception
{
public:
	Cexception(string reason)
	{
		this->m_Reason = reason;
	}
	void reason()
	{
		cout << "cexecption:" << this->m_Reason<<endl;
	}
private:
	string m_Reason;
};

void func1()
{
	throw Cexception("try code");
}

int main()
{
	try
	{
		func1();
	}
	catch(Cexception err)
	{
		err.reason();
	}
	system("pause");
	return 0;
}