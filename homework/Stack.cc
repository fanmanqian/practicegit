 ///
 /// @file    Stack.cc
 /// @author  mfm(2563965485@qq.com)
 /// @date    2020-12-11 09:57:01
 ///
 
#include <iostream>
using std::cout;
using std::endl;


class Stack
{
public:
	Stack(int size)
	: _size(size)
	, _top(-1)
	, _data(new int[size]())
	{

	}

	bool empty() const
	{
		return _top==-1;
	}

	bool full() const
	{
		return (_top + 1) == _size;
	}

	int top()const
	{
		return _data[_top];
	}

	void push(int value)
	{
		if(!full()){
			++_top;
			_data[_top] = value;
		}
		else{
			cout << "栈满" << endl;
		}
	}

	void pop()
	{
		if(!empty()){
			--_top;
		}
		else{
			cout << "栈空" << endl;
		}
	}

	~Stack()
	{
		if(_data)
		{
			delete [] _data;
		}
	}
private:
	int _size;
	int _top;
	int * _data;
};
int main(void)
{
	Stack s(10);
	s.push(1);
	for(size_t idx = 2; idx != 12; ++idx)
	{
		s.push(idx);
	}
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	return 0;
}
