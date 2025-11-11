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
    bool sorted(Node* head){
        bool isSorted=false;
        if(head==nullptr)return true;
        if(head->next==nullptr||head->next->next==nullptr)return true;

        Node* temp=head;
        while(temp->next->next!=nullptr){
            if((temp->next->data<temp->next->next->data && temp->data<temp->next->data)||
                (temp->next->data>temp->next->next->data && temp->data>temp->next->data)){
                    isSorted=true;
                }
                else{
                    return false;
                }
                temp=temp->next;
            }
            return isSorted;
    }
   void swap(Node* val1,Node* val2){
        int copy=val1->data;
        val1->data=val2->data;
        val2->data=copy;
   }
   void sort(Node* head){
    Node* temp1=head; 
    Node* temp2=head->next;
    int count=0;
    while(temp1!=nullptr){
        temp1=temp1->next;
        count++;
    }
    temp1=head;
    for(int i=0;i<count;i++){
        while(temp2!=nullptr){
            if(temp1->data>temp2->data){
                swap(temp1,temp2);
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        temp1=head;
        temp2=head->next;
    }
   }
};
//first approach 
 bool palindrome(LinkedList l){
        if(l.head->data!=l.tail->data)return false;
        if(l.head==l.tail|| l.head->next == l.tail) return true;
        l.head=l.head->next;
        Node* temp=l.head;
        while(temp->next!=l.tail)temp=temp->next;
        l.tail=temp;
        return palindrome(l);
    }

    
int main(){
    LinkedList l1;
    // l1.push_back(1);
    // l1.push_back(2);
    // l1.push_back(3);
    // l1.push_front(1);
    // l1.push_front(2);
    // l1.push_front(3);
    // l1.pop_front();
    // l1.pop_back();
    // Node* temp=l1.head;
    // 
    l1.push_back(5);
    l1.push_back(4);
    l1.push_back(2);
    l1.push_back(3);
    l1.push_back(1);

    // l1.push_back(2);
    // l1.push_back(1);
    // std::cout<<palindrome(l1);
    // std::cout<<l1.sorted(l1.head);
    l1.sort(l1.head);
     Node* temp=l1.head;
    while(temp!=nullptr){
        std::cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}