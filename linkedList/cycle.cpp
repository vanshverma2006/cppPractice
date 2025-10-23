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
    void add(int val){
        Node* newNode=new Node(val);
        if(head==nullptr)head=newNode;
        else{
            Node* temp=head;
            while(temp->next!=nullptr){
                temp=temp->next;
            }
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
    }

    // to detect cycle:-
    bool cycle(Node* head){
        Node* slow=head;//move 1 step
        Node* fast=head;//move 2 step
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
            // indexes of slow fast can never be same if their is no loop
        }
        return false;
    }
    // to find node where cycle starts:-
    Node* loopIdx(Node* head){
        Node* slow=head;
        Node* fast=head;
        bool iscycle=false;
        while(fast!=nullptr&&fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                iscycle=true;
                break;
            }
            
        }
        if(!iscycle) return nullptr;//cause no loop exist 
        slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow; // or fast 
        //slow and fast now pointing at a node from where loop starts;
    }
};
int main(){
    list l1;
    l1.add(1);
    l1.add(1);
    l1.add(1);
    l1.add(1);
    l1.traverse();
    l1.cycle(l1.head);
    return 0;
}