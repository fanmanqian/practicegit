#include "Computer.h"
#include<iostream>
using std::cout;
using std::endl;

void test()
{
	Computer com1("lenova",9999);
	cout << "com1: " << endl;
	com1.print();
	Computer com2("xiaomi",8888);
	cout << "com2: " << endl;
	com2.print();
	com2 = com1;
	com1.setBrand("thinkpad");
	cout << "after change com2: " << endl;
	com2.print();
}
void test3()
{
	cout << "sizeof(Computer)" << sizeof(Computer) << endl;
}
int main()
{
	test3();
	return 0;
}
