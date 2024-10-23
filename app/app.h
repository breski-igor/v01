#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
/*
* function declarations
*/
	std::string to_hex(int a);

	std::string to_exp(double a);

	void mult_table(int a, std::ostream& os);

}
