// COMSC-210 | Lab 3A | Loma Kim
/*  This program collects and stores input from the user about a
    Restaurant they have been tothen outputs the information    */

#include <iostream>
#include <string>
using namespace std;

// Restaurant struct stores name, cuisine type, address, and rating
struct Restaurant {
    string name, type, address, city, state;
    int zip;
    double rating;
    int price;
};

// FUNCTION PROTOTYPES
Restaurant addRestaurant();
void printRestaurant(const Restaurant&);

int main(){
    // Declarations
    Restaurant r1;

    cout << "**** RESTAURANT LOG **** \n\n";    // Banner
    r1 = addRestaurant();

    printRestaurant(r1);

    return 0;
}

Restaurant addRestaurant() {
    // This function collects user input about a Restaurant
    Restaurant r;
    cout << "Please enter the following information about the restaurant:\n";
    cout << "Name: ";
    getline (cin, r.name);

    cout << "Cuisine type: ";
    getline (cin, r.type);

    cout << "Address: ";
    getline (cin, r.address);

    cout << "City: ";
    getline (cin, r.city);

    cout << "State: ";
    getline (cin, r.state);

    cout << "Rating out of 5: ";
    cin >> r.rating;
    while (r.rating > 5 || r.rating < 1) {
        cout << "\nError! You entered a number out of bounds.\n";
        cout << "Please enter a rating 1-5: ";
        cin >> r.rating;
        cout << endl;
    }

    cout << "Pricing (1 for inexpensive, 3 for expensive): ";
    cin >> r.price;
    while (r.price > 3 || r.rating < 1) {
        cout << "\nError! You entered a number out of bounds.\n";
        cout << "Please enter a pricing 1-3: ";
        cin >> r.price;
    }

    return r;
}

void printRestaurant(const Restaurant &r){
    // This function prints restaurant information

    cout << "\nHeres info about " << r.name << ": " << endl << endl;
    cout << "Address:\n";
    cout << r.address << endl
         << r.city << ", " << r.state << endl << endl;
    cout << "Cuisine: " << r.type << endl;
    cout << "Rating: " << r.rating << "/5\n";
    cout << "Pricing: ";
    for (int i = 0; i < r.price; i++) {
        cout << "$";
    }
    cout << endl;
}