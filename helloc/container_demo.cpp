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
	//map ��������
	map<string, int> dict;
	//������dict�����ֵ�Եķ�ʽ��
	dict["name"] = 20;
	dict["score"] = 90;
	//dict.insert("id", 30);
	//
	dict.insert(make_pair("id", 30)); //���Կ���insert���Ǽ򵥵�ֱ���������������������ø���������һ�²��ܲ���
	dict.insert(pair<string, int>("location", 70));
	//cout << dict["name"];
	cout << "the dict key num is:" << dict.size() << "\n";
	//��ô�������dict�����м�ֵ���أ�
	for (map<string, int>::iterator iter = dict.begin(); iter != dict.end(); iter++)
	{
		//string key = iter->first; //Ϊʲô��ֵ�ɹ��˵����޷���ӡkey��
		//cout << key;
		cout << iter->first;
	}


	//˫���б�����
	list<int> numbers;
	numbers.push_back(200);
	numbers.push_back(300);
	numbers.push_back(400);
	numbers.push_front(100);
	//cout << numbers.pop_front();
	cout << numbers.size();
	cout << "\n";
	cout << &numbers; //c++���޷���ӡ����ģ�ֻ�ܴ�ӡ�����ڴ��ַ
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