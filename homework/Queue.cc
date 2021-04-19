 ///
 /// @file    Queue.cc
 /// @author  mfm(2563965485@qq.com)
 /// @date    2020-12-11 10:06:39
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
class Queue
{
public:
	Queue(int size = 10)
	: _size(size)
	, _front(0)
	, _rear(0)
	, _data(new int[_size]())//
	{

	}

	bool empty() const
	{
		return _front == _rear;
	}

	bool full() const
	{
		return (_rear + 1)%_size == _front;
	}

	void push(int value)
	{
		if(!full()){
			_data[_rear++] = value;//
			_rear %= _size;//
		}
		else{
			cout << "队列已满" << endl;
		}
	}

	void pop()
	{
		if(!empty()){
			++_front;//
			_front %= _size;//
		}else{
			cout << "队列为空" << endl;
		}
	}

	int front() const
	{
		return _data[_front];
	}
	int back() const
	{
		return _data[(_rear - 1 + _size) % _size];//
	}

	int getRear()const
	{
		return _rear;
	}

	~Queue()
	{
		if(_data)
			delete [] _data;
	}
private:
	int _size;
	int _front;
	int _rear;
	int * _data;
};
int main(void)
{
 
}
