
#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Woof Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Meow Meow!" << endl;
    }
};

int main() {
    Animal* animalPtr;

    Dog dog;
    Cat cat;
    animalPtr = &dog;
    cout << "Dog makes sound: ";
    animalPtr->sound();
    animalPtr = &cat;
    cout << "Cat makes sound: ";
    animalPtr->sound();

    return 0;
}
