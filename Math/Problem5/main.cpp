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
        if(check[i] == true && check[i+6])
            std::cout << i << ", " << i+6 << std::endl;
    }
    return result;
}

int main(int argc, char* argv[])
{
    solver(atoi(argv[1]));

    return 0;
}
