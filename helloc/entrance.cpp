#include<stdio.h>
#include <iostream>
#include<vector>
#include<list>
#include<map>
#include<string>
#include"input_demo.h"
#define MAX(a,b) (a)>(b)?(a):(b)

//#include "input_demo.cpp" c++不能直接import另一个cpp文件，需要经过.h文件才能做到这一点
//如果运行报错：无法打开文件，就右键执行一下清理解决方案，然后就可能看到哪里有错误了。

using namespace std;
//-----------------------
//template <typename T, U, typename V>void f1(T, U, V); 这个会报错U未定义
template <typename T> T f2(int &T);




template <typename T, typename V>void f1(T, V);


class Base
{
public:
	void f(int x);
};
class Derived :public Base
{
public:
	void f(char *str)
	{
		cout << str;
	};
	void f(int x)
	{
		cout << x;
	}
	void Test(void)
	{
		Derived *pd = new Derived;
		char word[] = "10";

		pd->f(word);
		pd->f(20);
	}

};



int main()
{
	//const size_t array_size = 10;
	//int ia[array_size];
	//for (size_t ix = 1; ix < array_size; ++ix)
	//	ia[ix] = ix;
	//cout << array_size << endl;
	//-------------------


	//int a[] = { 1,3,5,7,9 };
	//int *p[] = { a,a + 1,a + 2,a + 3,a + 4 };
	//printf("%d\t%d\t%d\n", a[4], *(a + 2), *p[1]);
	//-----------------
	//char a[] = "hello world";
	//char* p = a;
	//cout << sizeof(a) << "," << sizeof(p)<<endl;
	//--------------
	//int result;
	//result =  MAX(6, 5) + 2;
	//cout << result;
	//------------------
	//错误处理
	//try {
	//	cout << "run try code";
	//	throw - 1;
	//	//throw "error";
	//}
	//catch (const char* err){
	//	cout << "run catch char* code"; //运行了这个
	//}
	//catch (int err) {
	//	cout << "run catch int code";
	//}
	//catch (string err) {
	//	cout << "run catch string code";
	//}
	//--------------------
	//需要在使用之前定义吗，不然会找不到
	Derived xx;
	xx.Test();


	system("pause");
	return 0;


	//parse_json();
	//getInput();
	//CMessage *p;
	//if (true) {
	//	CMessage msg;
	//	p = &msg;
	//}
	//p->Func;

}




//class CMessage
//{
//	const int LEN = 100;
//	//int array[LEN];
//
//public:
//	CMessage();
//	~CMessage();
//	void Func(void) {
//		cout << "func is called" << endl;
//	}
//
//private:
//
//};
//
//CMessage::CMessage()
//{
//}
//
//CMessage::~CMessage()
//{
//}