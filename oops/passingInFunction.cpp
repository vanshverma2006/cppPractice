// same as a normal data type 
// if we use & --> pass by ref else pass by value 

#include<iostream>
class info{
    public:
    int x;
    char y;
};

void printClass(info i){
    std::cout<<i.x<<" "<<i.y;
}

int main(){
    info st1={1,'d'};
    printClass(st1);
    return 0;
}