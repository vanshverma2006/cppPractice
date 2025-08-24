#include<iostream>
class bank{
    public:
    int accountNum;
    std::string name;
    float balance;

    bank(){}
    bank(int accountNum,std::string name,float balance){
        this->accountNum=accountNum;
        this->name=name;
        this->balance=balance;
        
    }
    float deposite(float amount){
        return balance+=amount;
    }
    float withdraw(float amount){
        return balance-=amount;
    }
    void display(char option){
        float amount;
        if (option  =='d'){
            std::cout<<"enter amount : ";
            std::cin>>amount;
            deposite(amount);
            std::cout<<"your balance : "<<this->balance;
        }
        else if(option == 'w'){
            std::cout<<"enter amount : ";
            std::cin>>amount;
            withdraw(amount);
            std::cout<<"your balance : "<<balance;
        }
    }
};

class employee{
    // private :
    public:
    static int count;
    int id;
    std::string name;
    employee(){
        count ++;
    };
    employee(std::string name,int id ){
        this -> name = name;
        this -> id = id ;
        count++;
    };
    void display(){
        std::cout<<count;
    }
};
int employee::count=0;

class account {
    private:
    int balance ;
    public:
    void setBalance(int b){
        balance = b;
    }
    int getBalance(){
        return balance;
    }
};

class complexNum{
    public:
    int real ;
    int img;
    complexNum(){
        real = 0;
        img = 0;

    };
    complexNum(int absolute){
        real = absolute;
        img = absolute;
    }
    complexNum(int real , int img){
        this -> real = real ;
        this -> img = img ;
    }
    void display(){
        std :: cout <<"num : "<<real<<"+/- i"<<img;
    }
};

class person{
    public:
    std::string name;
    int age;

};

class student : public person{
    public:
    int id ;
    int marks[5];
    void input(int marks[5]){
        for (int i=0;i<5;i++){
            std::cin>>marks[i];
        }
    }
    student (){
        id = 99;
        input(marks);
    }

};
class details : public student{
    public:
    void Details(){
        std::cout<<name<<std::endl;
        std::cout<<age<<std::endl;
        std::cout<<id<<std::endl;
        for (int i=0 ;i<5;i++){
            std :: cout << marks[i]<<std::endl;
        }
       
    }
};
class tp{
    private:
    int num1;
    int num2;
    // tp(){}
    // tp(int num1,int num2){
    //     this ->num1=num1;
    //     this ->num2=num2;
    // }
    public:
    void square(){
        std :: cin>> num1;
        std :: cout << num1*num1<<std::endl;
    }
     void cube(){
        std :: cin>> num2;
        std :: cout << num2*num2*num2<<std::endl;
    }
};
int main (){
    
    // employee e1("x",1);
    // // e1.display();
    // employee e2("x",2);
    // // e2.display();
    // employee e3("x",3);
    // e3.display();
    // complexNum c1;           // default constructor
    // complexNum c2(5, 7);     // parameterized constructor
    // complexNum c3{2, -3};    // brace-initialization

    // c1.display();
    // c2.display();
    // c3.display();
    // person p1;
    // p1.age=19;
    // p1.name="harsh";
    
    // details d1;
    // d1.Details();


    tp abc;
    abc.cube();
    abc.square();


    

    return 0;
}