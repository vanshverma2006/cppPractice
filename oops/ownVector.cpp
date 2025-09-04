#include<iostream>
class MyVector{
    int* arr;
    int size;
    int capacity;
    public:
    MyVector(){
        size=0;
        capacity=1;
        arr=new int[1];
    }

    void add(int n){
        if (size==capacity){
            capacity*=2;
            int* newArr=new int[capacity];
            for(int i=0;i<size;i++){
                newArr[i]=arr[i];
            }
            delete[] arr;
            arr=newArr; 
        }
         arr[size++]=n;
    }

    void remove(){
        size--;
    }
    void print(){
        for (int i=0;i<size;i++){
            std::cout << arr[i]<<" ";
        }
    }
};

int main (){
    MyVector v;
    v.print();
    v.add(1);
    v.print();
    v.add(2);
    v.print();

    return 0;
}