#include <iostream>

int main(int argc, char* argv[])
{
	unsigned int number = atoi(argv[1]);
	unsigned int result = 0;
	
	for(int i = 0; i <= number; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
			result += i;
	}

	
	std::cout << "result: " << result <<std::endl;

	return 0;
}


