#include <iostream>

using namespace std;

class Calculator {

    int a, b;

public:

    Calculator(int x, int y) : a(x), b(y) {}

    int add() const { return a + b; }

    int subtract() const { return a - b; }

    int multiply() const { return a * b; }

    double divide() const { return b != 0 ? static_cast<double>(a) / b : 0; }

    int getB() const { return b; }

    friend void displayResults(const Calculator&);

}; 

void displayResults(const Calculator& calc) {

    cout << "Addition: " << calc.add() << endl;

    cout << "Subtraction: " << calc.subtract() << endl;

    cout << "Multiplication: " << calc.multiply() << endl;

    if (calc.getB() != 0) {

        cout << "Division: " << calc.divide() << endl;

    } else {

        cout << "Division: Undefined (division by zero)" << endl;

    }

}

unique_ptr<int> safeLeak(){
    unique_ptr<int> p = make_unique<int>(10);
    return p;
}


int main(){
    unique_ptr<int> ptr = safeLeak();
    cout << *ptr << endl;
    return 0;