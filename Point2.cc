#include<iostream>
using std::cout;
using std::endl;

class Point
{
public:
	Point(int ix = 0, int iy = 0)
	: _ix(ix)//const成员的初始化只能在初始化表达式中
	, _iy(iy)
	, _ref(ix)//引用成员的初始化也要在初始化成员列表中
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
		cout << "(" << _ix << "," 
			 << _iy 
			 << "," << _ref 
			 << ")" << endl;
	}
private:
	int _ix;
	int _iy;
	int & _ref; //引用成员占据一个指针的大小
};


int main()
{
	cout << "sizeof(Point) = " << sizeof(Point) << endl;
	Point pt1;
	pt1.print();
	pt1.setX(10);
	pt1.print();
	return 0;
}
