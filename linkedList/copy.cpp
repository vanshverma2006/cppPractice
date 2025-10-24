#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v):data(data_v){next=nullptr;}
};
class list{
    public:
    Node* head;
    list(){head=nullptr;}

    Node* copyList(Node* head){
        Node* newHead=new Node(head->data);
        Node* oldTemp=head->next;
        Node* newTemp=newHead;
        while(oldTemp!=nullptr){
            Node* copy=new Node(oldTemp->data);
            newTemp->next=copy;
            newTemp=newTemp->next;
            oldTemp=oldTemp->next;
        }
        return newHead;

    }
    void add_el(int val){
        Node* newNode=new Node(val);
        if(head==nullptr) head=newNode;
        else{
            Node* temp=head;
            while(temp->next!=nullptr)temp=temp->next;
            temp->next=newNode;
            temp=newNode;
        }
    }
    void traverse(){
        Node* temp=head;
        while(temp!=nullptr){
            std::cout<<(*temp).data<<"->";
            temp=temp->next;
        }
        std::cout<<"NULL";
    }
};
int main(){
    list l;
    l.add_el(1);
    l.add_el(1);
    l.add_el(1);
    l.traverse();
    return 0;
}