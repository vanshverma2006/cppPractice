#include<iostream>
class Dynamic{

    public:
    int n;
    std::string name;
    Dynamic(int n_n,std::string name_n):n(n_n),name(name_n){}
    void display(){
        std::cout<<name<<" "<<n<<std::endl;
    }
    
};
int main(){
    int n=10;// this is stored in stack and automatically deleted after completion 
    // but we can can allocate memory at run time 

// type* var=new type
    int* ptr=new int(10);
    // a ptr pointing to an integer whose value is 10 
// for arr 
// type* arr=new type[size];
    int* arr=new int[10];
// we can do cin cout on these 
// in end free them manually 
delete ptr;
delete[] arr;
    Dynamic* d=new Dynamic(1,"vansh");
    d->display();

    
    return 0;
}