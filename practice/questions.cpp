#include<iostream>
class student{
    public:
    std::string name;
    int rollNum;
    int ma[3];
    
    student(){}
    student(std::string n,int r,int m1,int m2,int m3){
        name = n;
        rollNum = r;
        ma[0]=m1;
        ma[1]=m2;
        ma[2]=m3;
    }
    float avg(int ma[]){
        int sum=0;
        for (int i=0;i<3;i++){
            sum+=ma[i];
        }
        return sum/3;
    }
    
    void display(){
        avg(ma);
        if (avg(ma)>=40){
            std::cout<<"pass";
        }else{
            std::cout<<"fail";
        }
    }
    
    
};

class rectangle{
    public:
    int length;
    int bredth;
    rectangle(){}
    rectangle(int l,int b){
        length = l;
        bredth= b;
    }

    int area(int length,int bredth){
        return length*bredth;
    }
    int perimeter(int length ,int bredth){
        return 2*(length + bredth);
    }

    void displayResult (){
        std :: cout << "area : "<< area(length,bredth);
        std :: cout << std :: endl << " perimeter : "<<perimeter(length , bredth); 
    }
};
int main(){
    // student s1("vansh",399,100,100,100);
    // s1.display();
    // rectangle r1(2,2);
    // r1.displayResult();1
  int a=2,b=3;
  a=a+b;
  b=a-b;
  a=a-b;
  std ::cout <<"a : "<< a<<"b : "<<b;
    return 0;
}