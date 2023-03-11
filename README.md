## Object Oriented programming Q&A

### Theory section

<details>
<summary>Local variables</summary>
  
A local variable is a variable that is declared within a block of code, such as within a function. Local variables are only accessible within the block of code in which they are declared. They are created when the block of code is entered and destroyed when the block of code is exited. Local variables are typically used to store temporary data or intermediate results within a function.

Here is an example of a local variable in C++:

```
void myFunction() {
    int x = 5; // x is a local variable
    // do something with x
}

```

In this example, the variable x is declared within the function myFunction and is only accessible within that function. Once the function is exited, the variable x is destroyed.

</details>
<details>
<summary>Global variable</summary>
  
A global variable, on the other hand, is a variable that is declared outside of any block of code, typically at the top of a program. Global variables are accessible from anywhere in the program, including within functions. Global variables are typically used to store data that needs to be accessed by multiple functions.

Here is an example of a global variable in C++:

```
int x = 5; // x is a global variable

void myFunction() {
    // do something with x
}

int main() {
    // do something with x
    myFunction();
    // do something with x
    return 0;
}


```

In this example, the variable x is declared at the top of the program and is accessible from both the main function and the myFunction function.

It's worth noting that the use of global variables can make it more difficult to track the flow of data within a program, as any function can modify the value of a global variable. It's generally considered best practice to use local variables whenever possible and to limit the use of global variables to cases where they are absolutely necessary.

</details>

---

### Programm section

<details>
<summary>A C++ program that overloads the ++ and - unary operators to work with objects of a class.</summary>

```
#include <iostream>
using namespace std;

class Number {
private:
    int num;
public:
    Number(int n) {
        num = n;
    }
    // Overload pre-increment operator
    Number operator++() {
        ++num;
        return *this;
    }
    // Overload unary minus operator
    Number operator-() {
        num = -num;
        return *this;
    }
    void display() {
        cout << "Number = " << num << endl;
    }
};

int main() {
    Number n1(5);
    n1.display();

    // Testing pre-increment operator overloading
    ++n1;
    n1.display();

    // Testing unary minus operator overloading
    -n1;
    n1.display();

    return 0;
}

```

## </details>

<details>
<summary>A C++ program that contains the base class "Animal" with derived classes "Sheep", "Goat", "Cow", "Buffalo", and "Zebra". The derived classes override the parent class method and implement their own way of eating.</summary>

```
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

```

#### Explanation

<small>In this program, we have defined a base class called "Animal" with data members "name" and "gender" and a member function "eat". We have then derived five classes - "Sheep", "Goat", "Cow", "Buffalo", and "Zebra" - from the "Animal" class. Each of these classes overrides the "eat" method to implement its own way of eating.

In the main function, we have created an object of each derived class and called its "eat" method to see how each animal eats. The output will show the name of the animal and what it is eating</small>

 </details>

---

### 🔗 If you have any question related to the topic , feel free to ask. :smile:

[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://twitter.com/ZeshanMukhtar01)
[![twitter](https://img.shields.io/badge/twitter-1DA1F2?style=for-the-badge&logo=twitter&logoColor=white)](https://twitter.com/ZeshanMukhtar01)
[![twitter](https://img.shields.io/badge/Instagram-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/zeshanmukhtar01/)

---
