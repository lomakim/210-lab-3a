// COMSC-210 | Lab 3A | Loma Kim
/*  This program collects and stores input from the user about a
    Restaurant they have been tothen outputs the information    */

#include <iostream>
#include <string>
using namespace std;

// Restaurant struct stores name, cuisine type, address, and rating
struct Restaurant {
    string name, type, address, city, state;
    double rating;
    int price;
};

Restaurant addRestaurant();

int main(){
    // Declarations
    Restaurant r1;

    cout << "**** RESTAURANT LOG **** \n\n";    // Banner
    r1 = addRestaurant();

    return 0;
}

Restaurant addRestaurant() {
    Restaurant r;
    cout << "Please enter the following information about the restaurant:\n";
    cout << "\tName: ";
    getline (cin, r.name);

    cout << "\tCuisine: ";
    getline (cin, r.type);

    cout << "\tAddress: ";
    getline (cin, r.address);

    cout << "\tCity: ";
    getline (cin, r.city);

    cout << "\tState: ";
    getline (cin, r.state);

    cout << "\tRating out of 5: ";
    cin >> r.rating;
    if (r.rating > 5 || r.rating < 0) {
        cout << "\tError! You entered a number out of bounds.\n";
        cout << "\tPlease enter a rating 1-5: ";
        cin >> r.rating
    }

    cout << "\tPrice out of 3: ";
    cin >> r.price;

    return r;
}