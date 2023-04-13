//饿汉式，程序一运行就创建唯一实例
class singletonhungry
{
private:
    /* data */
    singletonhungry(/* args */);
    ~singletonhungry();
    singletonhungry (const singletonhungry &);
    singletonhungry & operator = (const singletonhungry &);
    static singletonhungry *ptr;
public:
    static singletonhungry * instance(){
        return ptr;
    }
};

singletonhungry* singletonhungry :: ptr = nullptr;

