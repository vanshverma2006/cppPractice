#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v=0):data(data_v){next=nullptr;}
};
class list{
    public:
    Node* head;
    list(){head=nullptr;}
    void push_back(int value){
        Node* newVal=new Node(value);
        if(head==nullptr) head=newVal;
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            temp->next=newVal;

        }
    }
    void push_front(int value){
        Node* newVal=new Node(value);
        if(head==nullptr) head=newVal;
        else{
            newVal->next=head;
            head=newVal;
        }
    }
    void pop_back(){
        Node* temp=head;
        while(temp->next!=nullptr)temp=temp->next;
        delete temp;
    }
    void traverse(){
        Node* temp=head;
        while(temp!=nullptr){
            std::cout<<temp->data<<"->";
            temp=temp->next;

        }
        std::cout<<"NULL"<<std::endl;

    }
    void countNodes(){
        int count=0;
        if(head==nullptr){
        std::cout<<count;
        return;
        }
        Node* temp=head;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        std::cout<<"No. of nodes : "<<count<<std::endl;
    }
    void sumOfEl(){
        int sum=0;
        Node* temp=head;
        while (temp!=nullptr)
        {
            sum+=temp->data;
            temp=temp->next;
        }
        std::cout<<"sum of all elements : "<<sum<<std::endl;
    }
    void minMax(){
        Node* temp=head;
        int largest=temp->data,least=temp->data;
        while(temp->next!=nullptr){
            temp=temp->next;
            if(largest<temp->data) largest=temp->data;
            if(least>temp->data) least=temp->data;
        }
        std::cout<<"largest : "<<largest<<" least : "<<least<<std::endl;

    }
    void ins(int position,int value){
        Node* newVal=new Node(value);
        Node* temp=head;
        for(int i=0;i<position;i++)temp=temp->next;
        newVal->next=temp;
        temp=newVal;

    }
};
 
int main(){
    list l;
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(4);
    l.ins(2,10);
    l.traverse();
    l.countNodes();
    l.sumOfEl();
    l.minMax();
    
    


    return 0;
}