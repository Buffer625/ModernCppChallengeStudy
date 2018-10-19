//#include <gsl/gsl>
#include <iostream>
#include <algorithm>

unsigned int solver(long long arg1, long long arg2)
{
   long long temp;
    while(arg2 != 0)
    {

	    temp = arg1;
        arg1 = arg2;
	    arg2 = temp%arg2;
    }

    return arg1;
}
int main(int argc, char* argv[])
{
    long long num1 = atoi(argv[1]);
    long long num2 = atoi(argv[2]);
    long long temp;
    

    std::cout << solver(num1, num2) << std::endl;

    return 0;
}
