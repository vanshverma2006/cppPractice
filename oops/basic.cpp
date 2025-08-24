#include<iostream>
class student {
    public:
    std::string name;
    int age;
    

};
int main(){
    student x={"vansh",19};
    std::cout<<x.name;
    // or 
    x.age=20;
    std::cout<<x.age;

    return 0;
}