// Reverse a String
// By: Aaron McDonald
// This program accepts a string in from the user and outputs that string in reverse

#include <iostream>


using namespace std;

string reverse_string(const string& string_in) {
	// FIXME - Reverse the string reference and return
}

int main() {
	string user_in;

	cout << "Please enter a string that you want reversed: ";
	cin >> user_in;

	cout << "String Reversed: " << reverse_string(user_in) << endl;

	return 0;
}