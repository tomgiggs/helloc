#include<stdio.h>
#include <iostream>
#include<vector>
#include<list>
#include<map>
#include<string>

using namespace std;

int mainx()
{
	cout << "hello\n";
	cout << "this is edit by visual studio 2017\n ";
	cout << "hello world\t\n";
	//map 样例代码
	map<string, int> dict;
	//几种往dict插入键值对的方式：
	dict["name"] = 20;
	dict["score"] = 90;
	//dict.insert("id", 30);
	//
	dict.insert(make_pair("id", 30)); //可以看到insert不是简单的直接输入两个参数，而是用个函数处理一下才能插入
	dict.insert(pair<string, int>("location", 70));
	//cout << dict["name"];
	cout << "the dict key num is:" << dict.size() << "\n";
	//怎么迭代输出dict的所有键值对呢？
	for (map<string, int>::iterator iter = dict.begin(); iter != dict.end(); iter++)
	{
		//string key = iter->first; //为什么赋值成功了但是无法打印key呢
		//cout << key;
		cout << iter->first;
	}


	//双向列表命令
	list<int> numbers;
	numbers.push_back(200);
	numbers.push_back(300);
	numbers.push_back(400);
	numbers.push_front(100);
	//cout << numbers.pop_front();
	cout << numbers.size();
	cout << "\n";
	cout << &numbers; //c++是无法打印对象的，只能打印对象内存地址
	cout << numbers.size() << "\n";

	for (list<int>::const_iterator iter = numbers.begin(); iter != numbers.end(); iter++)
	{
		cout << *iter;
		cout << "\n";

		//system("pause");
	}


	//dict.insert("name", 20);

	/*list<int> numbers(3);
	count << numbers.size();*/
	system("pause");
	return 0;
}