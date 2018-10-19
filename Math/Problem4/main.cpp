//#include <gsl/gsl>
#include <iostream>
#include <vector>
#include <math.h>

int solver(int limit)
{
    int result;
    int target;
    std::vector<bool> check(limit+1);

    fill(check.begin(), check.end(), true);

    target = sqrt(limit);

    for(int i = 2; i <= target; i++)
    {
        if(check[i] == false)
            continue;

        for(int j = i*i; j < limit; j += i)
            check[j] = false;
    }

    for(int i = 2; i < limit; i++)
    {
        if(check[i])
            result = i;
    }
    return result;
}

int main(int argc, char* argv[])
{
    std::cout << solver(atoi(argv[1])) << std::endl;

    return 0;
}
