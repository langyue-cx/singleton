// 垃圾回收CGarbo
#include"singleton.h"
class CGarbo{
public:
    ~CGarbor(){
        if(singleton::_instance != nullptr){
            delete _instance;
        }
    }

};