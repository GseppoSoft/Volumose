#include <iostream>  // import iostream for access to the I/O streams
using namespace std; // by using this statement the `std::` prefix is not needed

void print(string str) {
	// prints a string
	cout << str; // send the string to stdout
}

int inputInt(string prompt) {
	// asks a prompt and then returns the integer result
	int res = 0;    // set result to 0
	cout << prompt; // print the prompt
	cin >> res;     // get user input
	cin.ignore();   // ignore the `\n` character for next function calls
	return res;     // return the result
}

int main() {
	int height, width, length; // declare the dimensional variables
	print("Welcome to Volumose Standard Release v1.0.1\n"); // startup message

	// input
	print("Please enter the following:\n"); // prompt
	height = inputInt("Height: ");          // get height from user
	width = inputInt("Width: ");            // get width from user
	length = inputInt("Length: ");          // get length from user
	
	// output
	print("The Volume of the item is ");            // print a string beforehand
	print(to_string(height * width * length) + "\n"); // print result (bug fixed)

	// exit the main method
	return 0; // return status code 0
}
