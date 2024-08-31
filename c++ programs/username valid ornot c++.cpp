#include <iostream>
using namespace std;

bool isValidUsername(string enteredUsername, string validUsername) {
    return enteredUsername == validUsername;
}

int main() {
    string validUsername = "user123";
    string enteredUsername;

    cout << "Enter your username: ";
    cin >> enteredUsername;

    if (isValidUsername(enteredUsername, validUsername)) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is not valid." << endl;
    }

    return 0;
}

