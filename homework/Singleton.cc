 ///
 /// @file    Singleton.cc
 /// @author  mfm(2563965485@qq.com)
 /// @date    2020-12-11 09:35:40
 ///
 
#include <iostream>
using std::cout;
using std::endl;
 
class Singleton
{
public:
	static Singleton * getInstance()
	{
		if(nullptr == _pInstance)
			_pInstance = new Singleton();
		return _pInstance;
	}
	static void destroy()
	{
		if(_pInstance)
			delete _pInstance;
	}

private:
	Singleton()
	{
		cout << "Singleton()" << endl;
	}
	
	~Singleton()
	{
		cout << "~Singleton()" << endl;
	}
private:
	static Singleton * _pInstance;
};
Singleton* Singleton::_pInstance = nullptr;
int main(void)
{
	Singleton * s1 = Singleton::getInstance();
	Singleton * s2 = Singleton::getInstance();
	//s1->print();
	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	Singleton::destroy();
	return 0;
}
