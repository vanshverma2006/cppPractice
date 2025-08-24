#include<iostream>
using namespace std;
class student{
    public:
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    student(){}
    student(int marks1,int marks2,int marks3,int marks4,int marks5){

        int m1 = marks1;
        int m2 = marks2;
        int m3 = marks3;
        int m4 = marks4;
        int m5 = marks5;
    }
    float avg(int m1,int m2,int m3,int m4,int m5){
        return (m1+m2+m3+m4+m5)/5;
    }

    void display(){
        float result = avg(m1,m2,m3,m4,m5);
        std::cout<<"avg is : "<<result;
    }
};


int main(){
    student arr[3];
    for (int i=0;i<3;i++){
    std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i].m1;
    std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i].m2;
    std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i].m3;
    std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i].m4;
    std::cout<<"enter value of arr["<<i<<"]";
        std::cin>>arr[i].m5;
    }
    for (int i=0;i<3;i++){
        std::cout<<std::endl;
        arr[i].display();
    }
    return 0;
}