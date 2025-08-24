#include <iostream>
class abc{
    public:
    std::string name;
    int age;

    abc(){}
    //agar hame same variable jo upar define kiye use karne ho than we use this 
    abc(std::string name,int age){
        this->name= name;
        this->age=age ;
    }

};
int main (){
    abc a("xyz",12);
    return 0;
}