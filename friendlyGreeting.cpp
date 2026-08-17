//============================================================================
// File Name: friendlyGreeting
// Author: Ryan A
// Date: August 17, 2026
// Course: CIT-66 C++ Programming
// Instructor: Professor Mohle
// Description: Prompts user for their name, prints greeting, and pauses
//============================================================================k

#include <iostream>
#include <string>
using namespace std;

int main() {
    string username;

    cout << "Please enter your username: ";
    getline(cin, username);

    cout << "Welcome to CIT-66 C++ Programming, " << username << "!" << '\n';
    cout << "Press Enter to Exit...";
    cin.get(); // Pauses console execution before closing
    return 0;
}
