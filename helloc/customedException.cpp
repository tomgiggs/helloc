
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
class myclass {
public:
	myclass(int x) {
		cout << "call init func";
	}
	~myclass()
	{

	}
	myclass& operator=(const myclass& cls) {
		cout << "call operator func";
		if (this != &cls) {
			
		}
		return *this;
	}
	myclass& operator++(int) {

	}
};

int main01()
{
	try
	{
		//func1();
		//throw string("string error");
		throw 11;
	}
	catch (int xxx) {
		cout << "catch int error";
	}
	catch (string mm) {
		cout << "catch sting error";
	}
	catch (const char *cc) {
		cout << "catch char array error";
	}
	catch(Cexception err)
	{
		cout << "catch Cexception error";
		err.reason();
	}
	//myclass aa = 100;
	system("pause");
	return 0;
}

