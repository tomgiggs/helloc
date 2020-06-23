//#include<stdio.h>
//#include <iostream>
//#include<vector>
//#include<list>
//#include<map>
//#include<string>
//#include"input_demo.h"
//#define MAX(a,b) (a)<(b)?(a):(b)
//
////#include "input_demo.cpp" c++不能直接import另一个cpp文件，需要经过.h文件才能做到这一点
////如果运行报错：无法打开文件，就右键执行一下清理解决方案，然后就可能看到哪里有错误了。
//
//using namespace std;
////-----------------------
////template <typename T, U, typename V>void f1(T, U, V); 这个会报错U未定义
//template <typename T,typename U, typename V>void f1(T,U, V); //这个会报错U未定义
//
//
////template <typename T>T f2(int &T);//这个是声明，定义在下面
////
////template<typename T>
////T f2(int & T)
////{
////	return T();
////}
////
////
////template <typename T, typename V>void f1(T, V);
////
////template <typename Ctype>Ctype f5(Ctype a);
////
////
////
////template<typename T, typename V>
////void f1(T, V)
////{
////}
////
////template<typename Ctype>
////Ctype f5(Ctype a)
////{
////	cout <<"ctype is:" << a;
////	return Ctype();
////}
//
//
////-----------
////template <typename XXX>
////void PPPrint(XXX& aa) {
////	count << "template print statement";
////}
//
////int f5(Ctype xx) {
////	return 2;
////};
//
////inline template<typename T>T foo(T, unsigned int*);
//
//class Base
//{
//public:
//	void f(int x);
//};
//class Derived :public Base
//{
//public:
//	//void f(char *str);
//	//{
//	//	cout << str;
//	//};
//	void f(int x);
//	//void f(int x) {
//	//	cout << "f called";
//	//};
//	//{
//	//	cout << x;
//	//}
//
//
//};
//void Test002()
//{
//	Derived *pd = new Derived;
//	/*	char word[] = "10";
//
//		pd->f(word);*/
//	pd->f(20);
//}
//
//int main()
//{
//	Test002();
//	//int inputx = 20;
//	////f5(30);
//	////f2(29);//这个是错的
//	//const size_t array_size = 10;
//	//int ia[array_size];
//	//for (size_t ix = 1; ix <= array_size; ++ix)
//	//	ia[ix] = ix;
//	//cout << array_size << endl;
//	////-------------------
//	//system("pause");
//
//
//	//int a[] = { 1,3,5,7,9 };
//	//int *p[] = { a,a + 1,a + 2,a + 3,a + 4 };
//	//printf("%d\t%d\t%d\n", a[4], *(a + 2), *p[1]);
//	//-----------------
//	//char a[] = "hello world";
//	//char* p = a;
//	//cout << sizeof(a) << "," << sizeof(p)<<endl;
//	//--------------
//	//int result;
//	//result =  MAX(6, 5) + 2;
//	//cout << result;
//	//------------------
//	//错误处理
//	//try {
//	//	cout << "run try code";
//	//	throw - 1;
//	//	//throw "error";
//	//}
//	//catch (const char* err){
//	//	cout << "run catch char* code"; //运行了这个
//	//}
//	//catch (int err) {
//	//	cout << "run catch int code";
//	//}
//	//catch (string err) {
//	//	cout << "run catch string code";
//	//}
//
//
//
//	//char name[] = "Jerry";
//	//char source[10] ;
//	//char dest[8];
//	////source = name;
//	//if (source == name)
//	//{
//	//	cout << "source is equal to name";
//	//}
//	////strcpy(dest, name);
//	//if (strcmp(dest, name) == 0)
//	//{
//	//	cout << "dest is equal to name";
//
//	//}
//
//
//	system("pause");
//	return 0;
//
//
//	//parse_json();
//	//getInput();
//	//CMessage *p;
//	//if (true) {
//	//	CMessage msg;
//	//	p = &msg;
//	//}
//	//p->Func;
//
//}
//
//
//
//
////class CMessage
////{
////	const int LEN = 100;
////	//int array[LEN];
////
////public:
////	CMessage();
////	~CMessage();
////	void Func(void) {
////		cout << "func is called" << endl;
////	}
////
////private:
////
////};
////
////CMessage::CMessage()
////{
////}
////
////CMessage::~CMessage()
////{
////}
//
////-----------------
//class Eye
//{
//
//};
//class Nose
//{
//
//};
//class Mouth
//{
//
//};
//class Ear
//{
//
//};
//class Heard :public Eye,public Nose, public Mouth,public Ear
//{
//
//};
//
//
//------------------------------------------
#include<stdio.h>
#include <iostream>
#include<vector>
//#include<list>
//#include<map>
#include<string>
using namespace std;
template<class InputIterator, class T>
InputIterator findx(InputIterator first, InputIterator last, const T& val)
{
	while (first != last) {
		if (*first == val) return first;
		++first;
	}
	return last;
}
void tripe_it(int);

void tripe_it(int i) {
	static int total = 0;
	int ans;
	ans = i * 3;
	total += ans;
	cout << "Sum of " << i << "*3 is "<<total<<"\n";
	return;
		
}
//class Thing {
//public:
//	//Thing();
//	virtual void update(int) { cout << "father int called"; };
//	virtual void update(double) { cout << "father double called"; };
//};
//
//class Mything :public Thing {
//public:
//
//	void update(int) {
//		cout << "sun int called" << endl;
//	};
//	//void update(double aaaa) {
//	//	cout << "update double called" << endl;
//	//};
//};
//------------
class Thing {
public:
	//Thing();
	virtual void update(int) {};
	virtual void update(double) {};
};

class Mything :public Thing {
public:

	void update(int) {};
	void update(double) {};
};



int main()
{
	Mything *mt = new Mything;
	Thing *t = mt;
	t->update(12.3);
	mt->update(12.3);
	//vector<int> vInt = { 0,2,4,6,8,10 };
	//auto iter = find(vInt.begin(), vInt.end(), 6);
	//if (iter == vInt.end()) {
	//	cout << "can not find 6" << endl;
	//}
	//else {
	//	cout << "find 6"<<endl;
	//}
	//int i;
	//for (i = 1; i <= 3; i++) {
	//	tripe_it(i);
	//	system("pause");
	//	return 0;
	//}



	system("pause");
	return 0;
}


