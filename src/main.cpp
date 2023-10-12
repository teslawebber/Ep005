#include <iostream>

#include "dog.h"
#include "log.h"
#include "operations.h"

int main()
{
	double result = add(2, 70);
	std::cout << "result : " << result << std::endl;

	Dog dog("Flitzy");
	dog.print_info();

	log_data("Hello there", LogType::FATAL_ERROR);

	return 0;
}
