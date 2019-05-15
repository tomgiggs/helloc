#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
//生成失败，因为多个定义的一个或多个符号，同一个文件夹底下（namespace），不同文件导入了相同的有文件导致这个问题吗？要怎么避免呢？是因为有两个main函数，修改另外文件的main函数就解决了

using namespace std;//不适用这个名词的话map那行会一直报错

int mainb()
{
	map<int, string> dict_demo;
	map<int, string>::iterator iter;
	dict_demo[1] = "10000";
	dict_demo[2] = "20000";
	iter = dict_demo.begin();
	while (iter!=dict_demo.end())
	{
		//为什么不能使用iter.first呢？这两个操作符有什么区别呢？"->主要用于类类型的指针访问类的成员，而.运算符，主要用于类类型的对象访问类的成员"
		cout <<"key is:"<<iter->first<<" value is:"<< iter->second<<"\n";//一直报std::ostream << std::string，百度说要加<string>头函数，因为类型转换需要导入string包才能做，不是自动转换的。
		iter++;

	}
	system("pause");
	return 0;



	/*for (map<int, string>::iterator iter = dict_demo.begin(); iter != dict_demo.end(); iter++)
	{
		cout << iter->second;
	}*/
}