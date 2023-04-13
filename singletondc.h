//double check
#include<iostream>
#include<mingw.mutex.h>
using namespace std;
mutex mt;
class singletondc{
private:
    singletondc();
    ~singletondc();
    singletondc (const singletondc &);
    singletondc & operator = (const singletondc &);
    static singletondc *ptr;
public:
    static singletondc * instance();
};
singletondc * singletondc :: instance(){
    if(ptr == nullptr){
        mt.lock();
        if(ptr == nullptr){
            ptr = new singletondc();
        }
        mt.unlock();
    }
    return ptr;
}
