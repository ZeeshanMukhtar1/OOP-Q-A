#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string name;
    char gender;
public:
    Animal(string n, char g) {
        name = n;
        gender = g;
    }
    virtual void eat() {
        cout << "The animal is eating." << endl;
    }
};

class Sheep : public Animal {
public:
    Sheep(string n, char g) : Animal(n, g) {}
    void eat() {
        cout << name << " the sheep is eating grass." << endl;
    }
};

class Goat : public Animal {
public:
    Goat(string n, char g) : Animal(n, g) {}
    void eat() {
        cout << name << " the goat is eating leaves." << endl;
    }
};

class Cow : public Animal {
public:
    Cow(string n, char g) : Animal(n, g) {}
    void eat() {
        cout << name << " the cow is eating hay." << endl;
    }
};

class Buffalo : public Animal {
public:
    Buffalo(string n, char g) : Animal(n, g) {}
    void eat() {
        cout << name << " the buffalo is eating grass." << endl;
    }
};

class Zebra : public Animal {
public:
    Zebra(string n, char g) : Animal(n, g) {}
    void eat() {
        cout << name << " the zebra is eating grass." << endl;
    }
};

int main() {
    Sheep sheep("Dolly", 'F');
    Goat goat("Billy", 'M');
    Cow cow("Bessie", 'F');
    Buffalo buffalo("Bubba", 'M');
    Zebra zebra("Ziggy", 'M');

    sheep.eat();
    goat.eat();
    cow.eat();
    buffalo.eat();
    zebra.eat();

    return 0;
}
