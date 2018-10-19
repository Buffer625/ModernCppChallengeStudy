//#include <gsl/gsl>
#include <iostream>
#include <vector>
#include <algorithm>

unsigned int GCD(long long arg1, long long arg2)
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

unsigned int LCM(std::vector<unsigned int>& args)
{
    unsigned int result = args.at(0);

    for(int i = 1; i < args.size(); i++)
    {
        result = result / GCD(result, args.at(i))*args.at(i);
    }
    return result;
}

int main(int argc, char* argv[])
{
    std::vector<unsigned int> input;

    for(int i = 1; i < argc; i++){
        input.push_back(atoi(argv[i]));
    }
    sort(input.begin(), input.end());

    std::cout << LCM(input) << std::endl;
    return 0;
}
