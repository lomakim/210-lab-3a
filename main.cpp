// COMSC-210 | Lab 3A | Loma Kim
#include <iostream>
#include <string>
using namespace std;

struct Restaurant {
    string name, type, address, city, state;
    int rating;
};

Restaurant addRestaurant(Restaurant&);

int main(){

    return 0;
}

Restaurant addRestaurant(Restaurant &r){
    cout << "Please enter the following information about the restaurant:\n";
    cout << "\tName: ";
    cin >> r.name;
    cout << "\tCuisine: ";
    cin >> r.type;
    cout << "\tAddress: ";
    cin >> address;
    cout << "\tCity: ";
    cin >> city;
    cout << "\tState:";
    cin >> state;
    cout << "\tRating out of five: ";
    cin >> rating;

    return r;
}