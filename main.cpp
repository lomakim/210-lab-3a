// COMSC-210 | Lab 3A | Loma Kim
#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name, type, address, city, state;
    double rating;
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

    cout << "\tRating out of five: ";
    cin >> r.rating;

    return r;
}