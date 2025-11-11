#include<iostream>
#define size 5
class stack{
    int top;
    int arr[size];
    public:
    stack(){
        top=-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    bool isFull(){
        return top==size-1;
    }
    void push(int val){
        if(isFull()) std::cout<<"stack is full";
        else{
            top++;
            arr[top]=val;
        }
    }
    void pop(){
        if(isEmpty())std::cout<<"stack underflow";
        else{
            arr[top]=0;
            top--;
        }
    }
};

int main(){

    return ;
}