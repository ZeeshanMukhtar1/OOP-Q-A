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
