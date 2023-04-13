//加一个锁的懒汉式
#include<iostream>
#include<mingw.mutex.h>
using namespace std;
std::mutex mt;
class singleton{
private:
    //单例模式：私有化构造，拷贝构造函数以及静态实例
    static singleton *_instance;//该类的静态实例
    singleton(){}//私有构造函数
public:
    static singleton* instance();//public静态函数
};
//静态变量的初始化
singleton * singleton::_instance = nullptr; 
singleton * singleton::instance(){
    mt.lock();//加锁
    if(_instance == nullptr){
        _instance = new singleton();
    }
    mt.unlock();//解锁
    return _instance;
    
}