#include <iostream> 
using namespace std;

class Animal{
    public:
    bool alive = true;
    void eat(){
        cout << "This animal is eating \n";
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "The dog barks!\n";
    }

};

class Cat : public Animal{
    public:
    void meow(){
        cout << "The cat meows\n";
    }
};

int main(){
    Dog dog;
    Cat cat;

    cout << dog.alive << '\n';
    cat.eat();
    dog.bark();
    return 0;
}