#include <iostream>

int main() {
	std::string h = "Hej";
	for (int i = 0; i<10; i++)
		std::cout << i << ". Hello World!\n" << h[i];
	return 0;
}