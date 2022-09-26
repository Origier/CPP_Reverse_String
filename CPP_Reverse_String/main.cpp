// Reverse a String
// By: Aaron McDonald
// This program accepts a string in from the user and outputs that string in reverse

#include <iostream>
#include <string>

using namespace std;

// Creating the function from the ground up
string reverse_string(const string& string_in) {
	// Copying the string and creating iterators for the beginning and end of the string to iterate through it from both sides
	string string_copy = string_in;
	std::string::iterator string_start = string_copy.begin();
	std::string::iterator string_end = string_copy.end();
	char temp = '\0';
	int loop_stop = string_copy.size() / 2; // Integer division to ensure the loop stops modifying before reaching the middle

	// Looping through the string up to the mid point and swapping the end point values
	for (int i = 0; i < loop_stop; i++) {
		// Swapping the values for the pointers on both ends of the string
		string_end--; // Decrementing the endpoint first since this is the null character on the string
		temp = *string_start;
		*string_start = *string_end;
		*string_end = temp;

		// Incrementing the start pointer
		string_start++;
	}

	return string_copy;
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
	cout << "String Reversed: " << reverse_string(user_in) << endl;

	return 0;
}