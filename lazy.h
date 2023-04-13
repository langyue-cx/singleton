//signleton:lazy
#include<iostream>
#include<mingw.mutex.h>
mutex mt;
class lazy{
private:
    lazy();
    ~lazy();
    lazy(const lazy &);
    lazy & operator = (const lazy &);
    static lazy *ptr;
public:
    static lazy * instance();
    class CGarbo{
    public:
        ~CGarbo(){
            if(ptr!=nullptr){
                delete ptr;
            }
        }
    };
    
};
lazy * lazy :: ptr = new lazy();//赋值
lazy * lazy::instance(){
    if(ptr == nullptr){
        mt.lock();//内部加锁
        if(ptr == nullptr){
            ptr = new lazy();
        }
        mt.unlock;
    }
    return ptr;
}