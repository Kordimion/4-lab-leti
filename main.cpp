#include <iostream>
#include "labEndpoints.h"
#include "printHelpers.h"

std::string inputStr;

int main()
{
	std::string command;

	std::cout << "type help to view list of commands";

	while(true)
	{
		std::cout << "\n";
		printAsk("command");
		std::cin >> command;
		if(!lab4Endpoints(command, inputStr))
		{
			std::cout << "\nthere is no such command";
			std::cout << "\ntype help to view list of commands\n";
		}

	}
}


