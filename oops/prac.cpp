#include <iostream>
using namespace std;

class MyVector {
    int* data;      // pointer to heap
    int sz;         // current size
    int cap;        // capacity

public:
    MyVector() : data(nullptr), sz(0), cap(0) {}

    void push_back(int value) {
        if (sz == cap) {
            // grow capacity
            int newCap = (cap == 0) ? 1 : cap * 2;
            int* newData = new int[newCap];

            // copy old values
            for (int i = 0; i < sz; i++) {
                newData[i] = data[i];
            }

            delete[] data;   // free old memory
            data = newData;
            cap = newCap;
        }

        data[sz++] = value;  // insert new element
    }

    int operator[](int i) const {
        return data[i];
    }

    int size() const {
        return sz;
    }

    ~MyVector() {
        delete[] data;
    }
};

int main() {
    MyVector v;

    for (int i = 0; i < 10; i++) {
        v.push_back(i * 10);
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}