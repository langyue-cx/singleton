
#include"singletonlock.h"
#include<mingw.thread.h>
#include<iostream>
using namespace std;

int main(){
    thread t(singleton);
    
    return 0;
}