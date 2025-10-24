#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data_v):data(data_v){next=nullptr;prev=nullptr;}
};
class doublyList{
    public:
    Node* head;
    doublyList(){head=nullptr;}
    void push_front(int val){
        Node* newNode=new Node(val);
        if(head==nullptr)head=newNode;
        else{
            newNode->next=head;
           head->prev=newNode;
           head=newNode;
        }
    }
    void push_back(int val){
        Node* newNode=new Node(val);
        if(head==nullptr)head=newNode;
        else{
            
            Node* temp=head;
            while(temp->next!=nullptr)temp=temp->next;
            newNode->prev=temp;
            temp->next=newNode;
            temp=newNode;

        }
    }
    void traverse(){
        Node* temp=head;
        while(temp!=nullptr){
            std::cout<<temp->data<<"->";
            temp=temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
    void traverse_reverse(){
        Node* temp=head;
        while(temp->next!=nullptr)temp=temp->next;
        while(temp!=nullptr){
            std::cout<<temp->data<<"->";
            temp=temp->prev;
        }
        std::cout<<"NULL";

    }
    void pop_back(){
       if(head==nullptr) return;
       if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
       }
       Node* temp=head;
       while(temp->next->next!=nullptr){
        temp=temp->next;
       }
       delete temp->next;
       temp->next=nullptr;
    }
    void pop_front(){
        if(head==nullptr)return;
        if(head->next==nullptr){
            delete head;
            head=nullptr;
            return;
        }
        head=head->next;
        delete head->prev;
        head->prev=nullptr;
    }
};
int main(){
    doublyList d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_back(1);
    d.push_back(2);
    d.pop_back();
    d.traverse();
    d.traverse_reverse();
    return 0;
}