#include<iostream>
class Node{
    public:
    int data;
    Node* next;
    Node(int data_v=0):data(data_v){next=nullptr;}
};
class myList{
    public:
    Node* head;
    myList(){
        head=nullptr;
    }
    void add(int val){
        Node* newNode=new Node(val);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
        temp=newNode;

    }
    void countNodes(){
        int count=0;
        if(head!=nullptr){
        Node* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            count++;
        }
        }

        std::cout<<"nodes : "<<count<<std::endl;
    }
    void search(int val){
        if(head!=nullptr){
            Node* temp=head;
            while(temp!=nullptr){
                if(temp->data==val){
                    std::cout<<"found";
                    return;
                }
                temp=temp->next;
            }
            std::cout<<"not present";
        }

    else{
        std::cout<<"list is empty";
    }
    }
};
int main(){
    myList l;
    // l.add(1);
    // l.add(2);
    // l.add(3);
    // l.add(4);
    // l.add(5);
    // l.add(6);
    // l.countNodes();
    l.search(2);

    return 0;
}