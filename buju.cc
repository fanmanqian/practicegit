#include<iostream>
using std::endl;
using std::cout;
int gNumber = 1;//全局/静态区
const int kValue = 10;//位于文字常量区

int main()
{
	int gNumber2 = 1000;
	const int kValue2 = 200;//位于栈区，与其生命周期有关
	const char * p = "helloworld";
	printf("&gNumber = %p\n",&gNumber);
	printf("&kValue = %p\n",&kValue);
	printf("&gNumber2 = %p\n",&gNumber2);
	printf("&kValue2  = %p\n",&kValue2);
	printf("&p  = %p\n",&p);
	printf("p  = %p\n",p);
	return 0;
}
