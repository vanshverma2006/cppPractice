#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int val):data(val),next(nullptr){};
};
class stack{
    Node* top;
    public:
    stack(){top=nullptr;}
    void push(int val){
        Node* newValue=new Node(val);
        if(top==nullptr)top=newValue;
        else{
            newValue->next=top;
            top=newValue;
        }
    }
    void pop(){
        if(top==nullptr)return;
        Node* del=top;
        top=top->next;
        delete del;
    }
    void peek(){
        if(top==nullptr)std::cout<<"stack empty";
        else{
            std::cout<<top->data;
        }
    }
    
};
int main(){
 
    return 0;
}