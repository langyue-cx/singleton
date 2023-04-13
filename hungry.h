//signleton:hungry

class hungry{
private:
    hungry();
    ~hungry();
    hungry(const hungry &);
    hungry & operator = (const hungry &);
    static hungry *ptr;
public:
    static hungry * instance();
    class CGarbo{
    public:
        ~CGarbo(){
            if(ptr!=nullptr){
                delete ptr;
            }
        }
    };
    
};
hungry * hungry :: ptr = new hungry();//赋值
hungry * hungry::instance(){
    return ptr;
}