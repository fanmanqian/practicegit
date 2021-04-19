#include "Computer.h"
#include<iostream>
using std::cout;
using std::endl;
void test3()
{
	Computer com1("thinkpad",9999);
	com1.print();
//	Computer::printTotal();
	const Computer com2("xiaomi",8888);
	com2.print();
}
int main()
{
	test3();
	return 0;
}
