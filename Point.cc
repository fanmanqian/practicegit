#include<iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix = 0, int iy = 0)
	: _ix(ix)//const成员的初始化只能在初始化表达式中
	, _iy(iy)
	{
		//_ix = ix;//赋值操作 无法使用对const成员的话
		//_iy = iy;
		cout << "Point(int=0,int=0)" << endl;
	}
	//不能更改const成员_ix
	void setX(int ix)
	{
		_ix = ix;
	}
	void print()
	{
		cout << "(" << _ix << "," << _iy << ")" << endl;
	}
private:
	const int _ix;
	const int _iy;
};


int main()
{
	Point pt1;
	pt1.print();
	return 0;
}
