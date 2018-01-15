//Nurul Anissa binti Huzaini
//A17DW4087

#include <iostream>

int breakOrReturn()
{
	while(true)
	{
		std::cout << "Enter 'b' to break or 'r' to return: ";
		char ch;
		std::cin >> ch;

		if (ch == 'b')
		break;

		if (ch == 'r')
		return 1;
	}
	std::cout << "We broke out of the loop\n";

	return 0;
}

int main()
{
	int returnValue = breakOrReturn();
	std::cout << "Function breakOrContinue returned " << returnValue << '\n';

	return 0;
}
