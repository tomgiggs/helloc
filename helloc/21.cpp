#include <iostream>
using namespace std;

char *GetMemory(int num)
{
	char p[] = "hello world";
	return &p[num];
}

void Test(void)
{
	char* str = NULL;
	int index;
	cin >> index;
	str = GetMemory(index);
	cout << *str << endl;
}

int main()
{
	Test();
	return 0;
}