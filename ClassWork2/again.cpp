#include<iostream>
#include<string>

class book {
    std::string title;
    std::string author;

public:
book(std::string t, std::string a) {
    title = t;
    author = a;

}
    void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;

    }
};


    class counter{
        public:
        static int count;
        counter(){
            count++;
        }

        void display(){
            std::cout<<count<<std::endl;
        }
    };
int counter::count=0;

class Box{
    int l;
    int b;
    int h;

    int vol(){
        return l*b*h;
    }
public:
    Box(int l, int b, int h){
        this->l = l;
        this->b = b;
        this->h = h;
    }
    friend class Printer;
};

class Printer{
public:
    void printVol(Box b){
        std::cout << b.vol() << std::endl;
    }
};


int main(){
    // const book b("c++","Bjarne");
    // b.display();
// counter c;
// counter c1;
// counter c2;

// c2.display();
Box b(1,2,3);
Printer p;
p.printVol(b);

return 0;
}