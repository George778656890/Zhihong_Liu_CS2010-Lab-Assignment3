

#include <iostream>

int main()
{
	double X = 0.0;
	double Y = 0.0;
	double sum = 0.0;
	std::cout << "Enter value for X : ";
	std::cin >> X;
	std::cout << "Enter value for Y : ";
	std::cin >> Y;

	double* Pointer_X = &X;
	double* Pointer_Y = &Y;

	sum = (*Pointer_X) + (*Pointer_Y);
	std::cout << "X= " << *Pointer_X << "\n";
	std::cout << "Y= " << *Pointer_Y << "\n";
	std::cout << "Sum=" << sum << "\n";
	return 0;
}

