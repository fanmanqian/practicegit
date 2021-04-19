 ///
 /// @file    Linklist.cc
 /// @author  mfm(2563965485@qq.com)
 /// @date    2020-12-11 10:33:34
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
class Node
{
public:
	int data;
	Node * pre;
	Node * next;
};

class List
{
public:
	List()
	: _head(new Node())
	, _tail(new Node())
	, _size(0)
	{

	}
	~List()
	{
		if(_head)
			delete _head;
		if(_tail)
			delete _tail;
		cout << "~List()" << endl;
	}

	void push_front(int value)
	{
		Node * temp = new Node();
		temp->data = value;
		temp->pre = nullptr;
		temp->next = _head;
		_head->pre = temp;
	}
	void push_back(int value)
	{
		Node * temp = new Node();
		temp->data = value;
		temp->next = nullptr;
		temp->pre = _tail;
		_tail->next = temp;
	}
	void pop_back()
	{
		Node * pre = _tail->pre;
		pre->next = nullptr;
	}
	void pop_front()
	{
		Node * next = _head->next;
		next->pre = nullptr;
	}
	void insert(Node * t1,int value)
	{
		Node * temp = new Node();
		temp->data = value;
		Node * pre = t1->pre;
		temp->pre = pre;
		temp->next = t1;
	}
	void erase(Node * t1)
	{
		Node * toDeleted = nullptr;
		if(t1->data==_head->data)
		{
			toDeleted = _head;
		}else
		{
			Node * temp = _head;
			while(temp->next->data!=t1->data)
				temp = temp->next;
			if(temp->next!=_tail&&(temp->next->data==t1->data)
				toDeleted = temp;
		}
		if(!toDeleted){
			Node * pre = toDeleted->pre;
			pre->next = toDeleted->next;
			delete toDeleted;
		}
	}
	void display()const
	{
		Node * temp = _head;
		while(temp!=nullptr)
		{	
			cout << temp->data << " ";
			temp = temp ->next;
		}
		cout << endl;
	}
private:
	Node * _head;
	Node * _tail;
	int _size;
};

int main(void)
{
 
}
