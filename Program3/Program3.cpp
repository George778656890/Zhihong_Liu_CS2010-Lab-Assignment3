#include <iostream>

int main()
{
	int a = 5;
	using VEC = int*;
	using MATRIX = VEC*;

	VEC v = &a;
	MATRIX m = &v;
	std::cout << "The value of a by using v is: " << (*v)<<"\n";   //Dereference once
	std::cout << "The value of a by using m is: " << (**m) << "\n";//Dereference twice
	return 0;
}


