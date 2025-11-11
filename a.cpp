#include<iostream>
#define size 5
class stack{
    public:
    int arr[size];
    int top;
    stack(){top=-1;}
    bool isFull(){
        return top==size-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    void push(int val){
        if(isFull()) std::cout<<"stack overflow";
        else{
            top++;
            arr[top]=val;
        }
    }
    void pop() {
        if (top == -1) {
           std:: cout << "Stack Underflow! Stack is empty\n";
        } else {
           std:: cout << arr[top] << " popped from stack\n";
            top--;
        }
    }

    int peek(){
        return arr[top];
    }
    void display() {
    if (isEmpty()) {
        std::cout << "Stack is empty\n";
    } else {
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
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