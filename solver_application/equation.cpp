#include <iostream>

#include "formatter_ex.h"
#include "solver.h"

int main()
{
    float a (0.0);
    float b (0.0);
    float c (0.0);

    std::cout<<"a = ";
    std::cin >>a; 
    std::cout<<"b = ";
    std::cin >>b; 
    std::cout<<"c = ";
    std::cin >>c; 
    
    float x1 = 1;
    float x2 = 1;

    try
    {
        solve(a, b, c, x1, x2);

        formatter(std::cout, "x1 = " + std::to_string(x1));
        formatter(std::cout, "x2 = " + std::to_string(x2));
    }
    catch (const std::logic_error& ex)
    {
        formatter(std::cout, ex.what());
    }

    return 0;
}
