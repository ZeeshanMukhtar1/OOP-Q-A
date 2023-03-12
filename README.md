## Object Oriented programming Q&A

- Hey Juniors, it's **_[Zeeshan Mukhtar](https://www.instagram.com/zeshanmukhtar01/)_** I created this repository to help you all understand the basics of object-oriented programming (OOP). I understand that OOP can be a challenging concept to grasp, especially for those who are new to programming. That's why I've made sure that the programs in this repository are beginner-friendly and easy to understand. My goal is to help you all become more confident and skilled in OOP. So, feel free to explore the programs and let me know if you have any questions!

### Theory section

<details>
<summary>constructor  and destructor  </summary>
In object-oriented programming, a constructor is a special method that is called when an object is created, while a destructor is a special method that is called when an object is destroyed. The constructor is responsible for initializing the object's state, while the destructor is responsible for cleaning up any resources that the object may have acquired during its lifetime.

Here's an example of a constructor and destructor in C++:

```
#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    // Create an object of MyClass
    MyClass myObject;

    // The object will be destroyed automatically when main() exits
    return 0;
}


```

In this example, the class MyClass has a constructor and a destructor. The constructor is called when an object of MyClass is created, and the destructor is called when the object is destroyed. When main() is executed, it creates an object of MyClass named myObject. When main() exits, myObject is destroyed, and the destructor is called.

The output of the program will be:

```
Constructor called
Destructor called

```

This demonstrates that the constructor is called when the object is created, and the destructor is called when the object is destroyed. Note that the destructor is automatically called when the object goes out of scope, so we don't need to explicitly call it.

</details>
<details>
<summary>purpose of a constructor</summary>
The purpose of a constructor in object-oriented programming is to initialize the state of an object when it is created.

</details>
<details>
<summary>Access specifiers</summary>
Access specifiers in C++ are keywords that define the level of access to the members of a class from outside the class. There are three access specifiers: public, private, and protected. The public access specifier allows the members of a class to be accessed by any code, the private access specifier restricts the access to only the member functions and friends of the class, while the protected access specifier is similar to private but allows access by derived classes. Access specifiers help to enforce encapsulation and abstraction in object-oriented programming.

</details>
<details>
<summary>types of inheritance</summary>

- Single Inheritance :  
  A derived class is inherited from a single base class.

- Multiple Inheritance :  
  A derived class is inherited from multiple base classes.

- Multilevel Inheritance :  
  A derived class is inherited from a base class, which is itself derived from another base class.

- Hierarchical Inheritance :  
  Multiple derived classes are inherited from a single base class.

- Hybrid Inheritance :  
  This is a combination of multiple inheritance and multilevel inheritance. It involves multiple inheritance paths and diamond inheritance problems.

</details>

<details>
<summary>Base Class & Derieved class</summary>
In object-oriented programming, a base class (also known as a parent class) is a class that is used as the starting point for creating other classes, called derived classes (also known as child classes or subclasses).

A derived class inherits all the member variables and member functions of its base class, and it can also add its own member variables and member functions. This is known as inheritance.

For example, consider a base class `Shape` that has a member function `getArea()` and two derived classes `Rectangle` and `Circle` that inherit from Shape. The Rectangle and Circle classes can add their own member variables and member functions, in addition to `getArea()` inherited from Shape.

```
class Shape {
public:
    virtual double getArea() { return 0; }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double getArea() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() override {
        return 3.14159 * radius * radius;
    }
};


```

In the above example, `Shape` is the base class, and `Rectangle` and Circle are the derived classes. Rectangle and Circle inherit the `getArea()` function from Shape, and they each provide their own implementation of `getArea()` to calculate their own area.

When you create an object of a derived class, it contains all the member variables and member functions of its base class, as well as any member variables and member functions that it has added itself. This allows you to create objects that have a combination of behavior and properties from both the base class and the derived class.

</details>

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

 </details>

<details>
<summary>C++ program to implement the Traveler class to calculate trip fare and display trip information</summary>

```
#include <iostream>
#include <string>
using namespace std;

class Traveler {
private:
    float distance; // Distance in km
    float fare; // Fare in Rs.
    string startLoc; // Starting location
    string endLoc; // Ending location

public:
    // Constructor to initialize distance and fare to zero, and starting location to "abc"
    Traveler() {
        distance = 0;
        fare = 0;
        startLoc = "abc";
    }

    // Member function to input distance, starting location, and ending location
    void getInto() {
        cout << "Enter distance in km: ";
        cin >> distance;

        cout << "Enter starting location: ";
        cin >> startLoc;

        cout << "Enter ending location: ";
        cin >> endLoc;
    }

    // Member function to calculate fare based on distance traveled
    void calculateFare() {
        if (distance <= 30) {
            fare = 70;
        } else {
            fare = 70 + ((distance - 30) * 6);
        }
    }

    // Member function to display the trip information
    void showInfo() {
        cout << "Trip information: " << endl;
        cout << "Starting location: " << startLoc << endl;
        cout << "Ending location: " << endLoc << endl;
        cout << "Distance traveled: " << distance << " km" << endl;
        cout << "Fare charged: Rs. " << fare << endl;
    }
};

int main() {
    // Create a Traveler object
    Traveler traveler;

    // Get user input for trip details
    traveler.getInto();

    // Calculate the fare for the trip
    traveler.calculateFare();

    // Display the trip information to the user
    traveler.showInfo();

    return 0;
}


```

In this program, we define the `Traveler` class, which has data members for distance, fare, starting location, and ending location. We also define a constructor to initialize the distance and fare to zero, and the starting location to "abc". The `getInto` member function allows the user to input the distance, starting location, and ending location, while the `calculateFare` member function calculates the fare based on the distance traveled. Finally, the `showInfo` member function displays the trip information to the user.

When the program is run, it prompts the user to input the trip details, calculates the fare, and displays the trip information in a user-friendly manner. Here's an example output:

```
Enter distance in km: 50
Enter starting location: BZU Lodhran
Enter ending location: BZU Multan
Trip information:
Starting location: BZU Lodhran
Ending location: BZU Multan
Distance traveled: 50 km
Fare charged: Rs. 310

```

 </details>

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
