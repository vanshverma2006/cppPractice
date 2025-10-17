#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v=0):data(data_v){next=nullptr;}
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    LinkedList(){
    head=nullptr;
    tail=head;
    }
    void push_back(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    void push_front(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            tail=newNode;
        }
        else{
            newNode->next=head;
            head=newNode;

        }
    }
    void pop_front(){
        Node* temp=head;
        head=head->next;
        temp->next=nullptr;
        delete temp;
    }
    void pop_back(){
        if(head==nullptr) return;
        if(head==tail){
        delete head;
        head=nullptr;
        tail=nullptr;
        return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        tail=temp;
        temp=temp->next;
        delete temp;
        tail->next=nullptr;
    }
};
int main(){
    LinkedList l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.pop_front();
    l1.pop_back();
    Node* temp=l1.head;
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 0;
}