#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v):data(data_v),next(nullptr){}

};
class stack{
    Node* top;
    public:
    stack(){
        top=nullptr;
    }
    void push(int val){
        Node* newNode=new Node(val);
        if(top==nullptr)top=newNode;
        else{
            newNode->next=top;
            top=newNode;
        }
    }
    void pop(){
        if(top==nullptr) return;
        Node* del=top;
        top=top->next;
        delete del;
    }
    void peek(){
        if(top==nullptr)return;
        std::cout<<top->data;
    }
    void display(){
        Node* temp=top;
        while(temp!=nullptr){
            std::cout<<temp->data<<" ";
            temp=temp->next;
        }
        std::cout<<std::endl;
    }
};
int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    return 0;
}