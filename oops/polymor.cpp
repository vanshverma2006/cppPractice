#include<iostream>

class Complex{  
    int real;
    int img;
    public:
   
    Complex(int r=0,int i=0):real(r),img(i){}
    Complex operator+(Complex c){
        int newReal=real + c.real;
        int newImg=img+c.img;
        Complex result(newReal,newImg);
        return result;
    }
    void display(){
        std::cout<<real<<" + "<<"i"<<img<<std::endl;
    }

};

int main(){
    // Complex c1(1,2),c2(3,4);
    // Complex c3=c1+c2;
    // c3.display();
    Complex arr[4];
    Complex result;
    for (int i=0;i<4;i++){
        int r,im;
        std::cin>>r>>im;
        arr[i]=Complex(r,im);
        result=result +arr[i];
    }
    result.display();

    return 0;

}