#include <iostream>
using std::cout;
using std::endl;

//单例模式: 要求通过该类只能创建出一个对象
//1.该对象不能是栈对象
//2.只能是堆对象

//应用场景:
//1.只要出现的全局变量都可以用单例模式替代
//2.对于全局唯一的资源，都可以使用单例模式
//   > 对于配置文件的读取
//   > 对于词(字)典类
//   > 对于日志系统的写日志的对象(cout)
class Singleton
{
public:
	static Singleton * getInstance()
	{
		if(nullptr == _pInstance)
		{
			_pInstance = new Singleton();
		}
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

//Singleton s3;//error
//Singleton s4;
Singleton * Singleton::_pInstance = nullptr;
int main()
{
	//Singleton s1;//error 该语句不能让他编译通过
	//Singleton s2;
	Singleton * ps1 = Singleton::getInstance();
	Singleton * ps2 = Singleton::getInstance();
	cout << "ps1" << ps1 << endl;
	cout << "ps1" << ps2 << endl;
	Singleton::destroy();
	return 0;
}
