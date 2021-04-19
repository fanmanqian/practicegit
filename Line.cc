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
		cout << "(" << _ix << "," 
			 << _iy 
			 << ")"; 
	}
private:
	int _ix;
	int _iy;
};

class Line
{
public:
	Line(int x1, int y1, int x2, int y2)
	: _pt1(x1,y1)//如果自定义类类型创建的对象作为另一个自定义类类型的子对象，需要显示在
	, _pt2(x2,y2)//初始化列表之中进行初始化，除非想调用子对象相应类型的默认构造函数
	{
		cout << "Line(x1,y1,x2,y2)" << endl;
	}
	void print()
	{
		_pt1.print();
		cout << "---->";
		_pt2.print();
		cout << endl;
	}
private:
	Point _pt1;//子对象的创建调用了默认构造函数
	Point _pt2;
};


int main()
{
	Line l(1,2,3,4);
	l.print();
	return 0;
}
