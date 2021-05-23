#include<iostream>

int main()
{
	int val1;
	std::cout << "First number: ";
	std::cin >> val1;

	int val2;
	std::cout << "Second number: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "Answer number: " << result << std::endl;
	return 0;
}