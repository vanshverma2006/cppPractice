// bas prev pointer aa jata hai isme 
//now we can access both next and prev pointer of node. 

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
    bool sorted(Node* head){
        if (head==nullptr||head->next==nullptr) return true;
        bool isSorted=false;
        Node* temp=head->next;
        while(temp->next!=nullptr){
            if((temp->data>temp->next->data&&temp->data<temp->prev->data)||
            (temp->data<temp->next->data&&temp->data>temp->prev->data)
            )isSorted=true;
            else isSorted=false;
            temp=temp->next;
        }
        return isSorted;
    }
};

int main(){
    doublyList d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(4);
    d.push_back(3);
    d.push_back(5);
    std::cout<<d.sorted(d.head);
   
   
    return 0;
}