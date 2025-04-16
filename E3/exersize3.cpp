#include <iostream>

using namespace std;

template<typename T>
class Parent {
protected:
    virtual T Add(T a, T b) const {
        return a + b;
    }
};

class Child : public Parent<int> {
public:
    int Add(int a, int b) override {
        int baseResult = Parent<int>::Add(5, 10);
        return baseResult + 20;
    }
};

int main() {
    Child obj;
    cout << "Result: " << obj.Add(1, 2) << endl;
    return 0;
}