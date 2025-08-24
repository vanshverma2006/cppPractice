#include<iostream>
using namespace std;

class Demo{
public:
    Demo(){
        cout << "Constructor Called" << endl;
        
    }
};
void add(){
    int x,y,z,a;
    std::cin>>x>>y>>z>>a;
    std::cout<<&x<<" "<<&y<<" "<<&z<<" "<<&a;
}

int main(){
    add();
    return 0;
}