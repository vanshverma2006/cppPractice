#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v=0):data(data_v){next=nullptr;}
};
class List{
    Node* head;

    public:
    List(){
    head=nullptr;
    }

    void traverse(){
        Node* temp=head;
        while(temp!=nullptr){
            std::cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        std::cout<<"NULL"<<std::endl;
    }
    void push_back(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            head=newNode;
            return;
        }
       Node* temp=head;
       while(temp->next!=nullptr)temp=temp->next;
       temp->next=newNode;
       temp=newNode;
    }

    void push_front(int value){
        Node* newNode=new Node(value);
        if(head==nullptr){
            newNode->next=head;
            head=newNode;
            return ;
        }
        newNode->next=head;
        head=newNode;
    }
    void pop_back(){
        if(head==nullptr){
            return;
        }
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
        if(head==nullptr) return;
        if(head->next==nullptr){
            delete head;
            head=nullptr;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
        temp=nullptr;
    }
    void reverse(){
        if(head==nullptr||head->next==nullptr) return;

       Node* curr=head;
       Node* prev=nullptr;
       Node* n=nullptr;
       while(curr!=nullptr){
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
       }

    head=prev;
        
    }
   
};
int main(){
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    l.pop_back();
    l.pop_front();

    l.traverse();
    l.reverse();
    l.traverse();
    return 0;
}