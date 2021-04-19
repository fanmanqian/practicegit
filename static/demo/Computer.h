#ifndef __COMPUTER_H__
#define __COMPUTET_H__


class Computer
{
public:
	Computer(const char * brand, float price);
//	void print();
	void print() const;
	static void printTotal();
	~Computer();
private://封装，在类之外不能直接访问的
	char * _brand;//品牌// brand_ m_brand成员变量的三种写法
	float _price;//价格
	static float _totalprice;
};
#endif
