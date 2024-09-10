#include <iostream>
#include <cmath>
#include "basic_operations.h"
#include "advanced_operations.h"



int main(){
    int choice;
    double result, num;
    char moreChoices;
    std::cout << "\n*************** Calculator ***************\n";
    std::cout << "1: Sum\n";
    std::cout << "2: Difference\n";
    std::cout << "3: Multiply\n";
    std::cout << "4: Divide\n";
    std::cout << "5: Power\n";
    std::cout << "6: Logarithm (natural log)\n";
    std::cout << "7: Factorial\n";
    std::cout << "8: Sine\n";
    std::cout << "9: Cosine\n";
    std::cout << "10: Tangent\n";
    std::cout << "----------------------------------------------\n";
    std::cin >> choice;
    if (choice >= 1 && choice <=4)
    {
        std::cout << "Enter the first number: ";
        std::cin >> result;
        do
        {
            std::cout << "Enter next number: ";
            std::cin >> num;
            switch (choice)
            {
            case 1:
                result = sum(result, num);
                break;
            case 2:
                result = difference(result, num);
                break;
            case 3:
                result = multiply(result, num);
                break;
            case 4:
                if (num == 0)
                {
                    std::cout << result <<" can't be divided by 0!\n";
                    return 0;
                }
                else{
                    result = divide(result, num);
                }
                
            
            default:
                std::cout << "Invalid Choice!\n";
                break;
            }
            std::cout << "Do you want to add another number (Y/N)? ";
            std::cin >> moreChoices;
        } while (moreChoices == 'Y' || moreChoices == 'y');
        
    }
    else if (choice == 5)
    {
        double base, exponent;
        std::cout << "Enter the base and exponent: ";
        std::cin >> base >> exponent;
        result = power(base, exponent);
    }
    else if (choice == 6)
    {
        double lognum;
        std::cout << "Enter the number for logarithm (natural log): ";
        std::cin >> lognum;
        result = logarithm(lognum);
    }
    else if (choice == 7)
    {
        double factorialnum;
        std::cout << "Enter the number for factorial: ";
        std::cin >> factorialnum;
        result = factorial(factorialnum);
    }
    
    else if (choice >= 8 && choice<=10)
    {
        double angle;
        std::cout << "Enter the angle in radians: ";
        std::cin >> angle;
        switch (choice)
        {
        case 8:
            result = sine(angle);
            break;
        case 9:
            result = cosine(angle);
            break;
        case 10:
            result = tangent(angle);
            break;
        
        default:
            std::cout << "Invalid Choice!\n";
            break;
        }
    }
    else{
        std::cout << "Invalid Choice!\n";
    }
    std::cout << "Result: " << result << '\n';

}
