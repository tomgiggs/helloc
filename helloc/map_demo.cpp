#include<stdio.h>
#include<iostream>
#include<map>
#include<string>
//����ʧ�ܣ���Ϊ��������һ���������ţ�ͬһ���ļ��е��£�namespace������ͬ�ļ���������ͬ�����ļ��������������Ҫ��ô�����أ�����Ϊ������main�������޸������ļ���main�����ͽ����

using namespace std;//������������ʵĻ�map���л�һֱ����

int mainb()
{
	map<int, string> dict_demo;
	map<int, string>::iterator iter;
	dict_demo[1] = "10000";
	dict_demo[2] = "20000";
	iter = dict_demo.begin();
	while (iter!=dict_demo.end())
	{
		//Ϊʲô����ʹ��iter.first�أ���������������ʲô�����أ�"->��Ҫ���������͵�ָ�������ĳ�Ա����.���������Ҫ���������͵Ķ��������ĳ�Ա"
		cout <<"key is:"<<iter->first<<" value is:"<< iter->second<<"\n";//һֱ��std::ostream << std::string���ٶ�˵Ҫ��<string>ͷ��������Ϊ����ת����Ҫ����string���������������Զ�ת���ġ�
		iter++;

	}
	system("pause");
	return 0;



	/*for (map<int, string>::iterator iter = dict_demo.begin(); iter != dict_demo.end(); iter++)
	{
		cout << iter->second;
	}*/
}