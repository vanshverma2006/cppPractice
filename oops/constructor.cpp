#include<iostream>
class student{
    public: 
    std::string name;
    int age ;

    //constructors

    student(std::string n,int a){
        name = n;
        age = a;
    }
};

class car{
    public:
    std::string brand;
    int model;
    int year;
    //we have a default constructor --> 
    // car(){

    // }
    //if we make a contructor ourselves this default contructor is removed 

    car(){}
    car(std::string b,int m,int y){
        brand=b;
        model=m;
        year=y;
    }
};

void printClass(car c){
    std::cout<<"brand : "<<c.brand<<", model : "<<c.model<<", year : "<<c.year;
}
int main (){
    car c1("kia",120,2000);
    car c2;
    c2.brand="x";
    c2.model=122;
    c2.year=1934;
    printClass(c1);
    std::cout<<std::endl;
    printClass(c2);
    return 0;
}