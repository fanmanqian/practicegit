#include "Computer.h"
#include<stdio.h>
#include<string.h>
#include<iostream>
using std::cout;
using std::endl;
float Computer::_totalprice = 0.0;
Computer::Computer(const char * brand, float price)
: _brand(new char[strlen(brand) + 1]())
, _price(price)
{
	//用sizeof是计算的一个指针的大小而不是长度要用strlen
	cout << "sizeof(brand) " << sizeof(brand) << endl;
	strcpy(_brand,brand);
	_totalprice += _price;
	cout << "Computer(const char *, float)" << endl;
}
//Computer::Computer(const Computer & rhs)
//:_brand(new char[strlen(rhs._brand) + 1]())
//,_price(rhs._price)
//{
//	strcpy(_brand,rhs._brand);//先开空间 再复制内容 深拷贝
//	cout << "Computer(const Computer &)" << endl;
//}
#if 0
void Computer::print()
{
	_price = 20000;
	cout<<"brand: "<<_brand<<endl;
		
	cout<<"price: "<<_price<<endl;
}
#endif
#if 1
void Computer::print() const
{
//	_price = 1000;

	cout<<"brand: "<<_brand<<endl;
		
	cout<<"price: "<<_price<<endl;

}
#endif
//系统提供的合成的赋值运算符函数
//Computer & Computer::operator=(const Computer & rhs)
//{
//	_brand = rhs._brand;
//	_price = rhs._price;
//	return *this;
//}
//自定义的正确的赋值运算符函数
//Computer & Computer::operator=(const Computer & rhs)
//{
//	if(this!=&rhs){//1. 自复制
//		delete [] _brand;//2. 释放左操作数指针的堆空间
//		this->_brand = new char[strlen(rhs_brand) + 1]();//3. 进行深拷贝
//		strcpy(_brand,rhs._brand);
//		this->_price = rhs._price;
//	}
//	return *this;
//}
//void Computer::setBrand(const char * brand)
//{
//	size_t len = strlen(_brand);
//	if(len > strlen(brand)){
//		strcpy(_brand,brand);
//	}
//	else{
//		delete [] _brand;
//		_brand = new char[strlen(brand) + 1]();
//		strcpy(_brand,brand);
//	}
//
//}
Computer::~Computer()
{
	delete [] _brand;
	_totalprice -= _price;
	cout << "~Computer" << endl;
}
void Computer::printTotal()
{
	cout << "total: " << _totalprice << endl;
}

