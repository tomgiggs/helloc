#include<stdio.h>
#include<string> //注意不是string.h文件夹内
#include<iostream>
#include "input_demo.h"

using namespace std;

string getInput() {
	string inputs;
	cin >> inputs;
	cout << "your inputs is :" << inputs;
	system("pause");
	return inputs;
}

