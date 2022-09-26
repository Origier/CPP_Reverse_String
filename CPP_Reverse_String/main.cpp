// Reverse a String
// By: Aaron McDonald
// This program accepts a string in from the user and outputs that string in reverse

#include <iostream>
#include <string>

using namespace std;

// Creating the function from the ground up
string reverse_string(const string& string_in) {
	// FIXME - Reverse the string reference and return
	return "";
}

// Using the built in reverse function
string reverse_string_cpp(const string& string_in) {
	string string_copy = string_in;
	reverse(string_copy.begin(), string_copy.end());
	return string_copy;
}

int main() {
	string user_in;

	cout << "Please enter a string that you want reversed: ";
	getline(cin, user_in);
	cout << "String Reversed: " << reverse_string_cpp(user_in) << endl;

	return 0;
}