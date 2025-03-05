#include <iostream>
#include <string>

class Person {
private:
    std::string name;  
    int age;          
public:
    Person(const std::string& n, int a) : name(n), age(a) {}

    std::string GetName() const {
        return name;
    }

    int GetAge() const {
        return age;
    }
};

int main() {
    Person p("Ali", 25);

    std::cout << "Name: " << p.GetName() << std::endl;
    std::cout << "Age: " << p.GetAge() << std::endl;

    return 0;
}
