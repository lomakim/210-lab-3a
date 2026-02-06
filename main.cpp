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

    return 0;
}

Restaurant addRestaurant() {
    // This function collects user input about a Restaurant
    Restaurant r;
    cout << "Please enter the following information about the restaurant:\n";
    cout << "Name: ";
    getline (cin, r.name);

    cout << "Cuisine: ";
    getline (cin, r.type);

    cout << "Address: ";
    getline (cin, r.address);

    cout << "City: ";
    getline (cin, r.city);

    cout << "State: ";
    getline (cin, r.state);

    cout << "\tRating out of 5: ";
    cin >> r.rating;
    while (r.rating > 5 || r.rating < 1) {
        cout << "\n\tError! You entered a number out of bounds.\n";
        cout << "\tPlease enter a rating 1-5: ";
        cin >> r.rating;
    }

    cout << "\tPricing (1 for low, 3 for expensive): ";
    cin >> r.price;
    while (r.price > 3 || r.rating < 1) {
        cout << "\n\tError! You entered a number out of bounds.\n";
        cout << "\tPlease enter a pricing 1-3: ";
        cin >> r.price;
    }

    return r;
}

void printRestaurant(const Restaurant &r){
    // This function prints restaurant information

    cout << "\t" << r.name << endl;
    cout << "\tAddress:\n";
    cout << r.address << endl
         << r.city << ", " << r.state;
    cout << "\tRating: " << r.rating << "/5\n"
    cout << "\tPricing: ";
    for (int i = 0; i < r.rating; i+_)
        cout <<
}