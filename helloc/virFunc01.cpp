
#include<stdio.h>
#include <iostream>

using namespace std;
//---------虚函数-----------
class CBase1 {
public:
	virtual void Test1() = 0;
};

class CBase2 {
public:
	virtual void Test2() = 0;
	virtual void Test3() = 0;

};

class CMD : public CBase1, public CBase2 {
public:
	void Test1() { cout << "1111111" << endl; }
	void Test2() { cout << "2222222" << endl; }
	void Test3() { cout << "3333333" << endl; }
};

//----------------------

int virFunc01() {
	CMD obj;
	CBase1 *pBase1 = &obj;
	pBase1->Test1();
	CBase2 *pBase2 = (CBase2*)pBase1;
	//CBase2 *pBase2 = &obj;
	pBase2->Test2();//为什么这个在类型转换后还能调用？
	pBase2->Test3();

}