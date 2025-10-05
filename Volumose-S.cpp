#include <iostream>

int main() {
	int height, width, length;
	std::cout << "Welcome to Volumose Standard Release v1.0.0" <<'\n' ;
	std::cout << "Please type three integers. (in order H,W,L)" <<'\n' ;
	std::cin >> height;
	std::cin >> width;
	std::cin >> length;
	std::cout << "The Volume of the item is "
		  << height * width * length << '\n';
}
