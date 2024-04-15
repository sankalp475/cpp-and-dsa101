#include <iostream>
#include <ctime>

void Log(const char *message)
{
	std::cout  << "[" << __TIMESTAMP__ << "]: "
                 << message << std::endl;
}