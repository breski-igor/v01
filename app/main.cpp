#include "app.h"

// input one integer
// write its hex representation to std::cout (using vsite::oop::v1::to_hex)
// write multiplication table up to this number to std::cout (using vsite::oop::v1::mult_table)

using namespace vsite::oop::v1;

int main()
{
	int n;
	std::cout << "unesi broj: ";
	std::cin >> n;
	std::cout << "hex: " << to_hex(n) << std::endl;
	std::cout << "tablica mnozenja do: " << n << std::endl;

	mult_table(n, std::cout);

}
