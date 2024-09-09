#include <iostream>
#include <cmath>

double sum(double num1, double num2);
double difference(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);
double power(double base, double exponent);
double logarithm(double num1);
double factorial(double num);
double sine(double angle);
double cosine(double angle);
double tangent(double angle);

int main(){
    int choice;
    int num1, num2;
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

    switch (choice)
    {
    case 1:
    case 2:
    case 3:
    case 4:
        std::cout << "Enter the 2 numbers: ";
        std::cin >> num1 >> num2;
        break;
    case 5:
        std::cout << "Enter the Base and Exponent: ";
        std::cin >> num1 >> num2;
        break;
    case 6:
            std::cout << "Enter number for logarithm: ";
            std::cin >> num1;
            break;
    case 7:
        std::cout << "Enter an integer for factorial: ";
        std::cin >> num1;
        break;
    case 8:
    case 9:
    case 10:
        std::cout << "Enter an angle in radians: ";
        std::cin >> num1;
        break;
    default:
        std::cout << "Invalid Choice!\n";
        break;
    }

    switch (choice)
    {
    case 1:
        std::cout << "Result: " << sum(num1, num2) << '\n';
        break;
    case 2:
        std::cout << "Result: " << difference(num1, num2) << '\n';
        break;
    case 3:
        std::cout << "Result: " << multiply(num1, num2) << '\n';
        break;
    case 4:
        if(num2 != 0 ){
            std::cout << "Result: " << divide(num1, num2) << '\n';
        }
        else{
            std::cout << num1 << " Can't be devided by 0.\n";
        }
        break;
    case 5:
        std::cout << "Result: " << power(num1, num2) << '\n';
        break;
    case 6:
        std::cout << "Result: " << logarithm(num1) << '\n';
        break;
    case 7:
        std::cout << "Result: " << factorial(num1) << '\n';
        break;
    case 8:
        std::cout << "Result: " << sine(num1) << '\n';
        break;
    case 9:
        std::cout << "Result: " << cosine(num1) << '\n';
        break;
    case 10:
        std::cout << "Result: " << tangent(num1) << '\n';
        break;
    
    default:
    std::cout << "Invalid Choice!";
        break;
    }
    return 0;
}

double sum(double num1, double num2){
    return num1 + num2;

}
double difference(double num1, double num2){
    return num1 - num2;
}
double multiply(double num1, double num2){
    return num1 * num2;
}
double divide(double num1, double num2){
    return num1 / num2;
}
double power(double base, double exponent){
    return pow(base,exponent);
    
}
double logarithm(double num1){
    return log(num1);
}
double factorial(double num){
    if (num < 0)
    {
        return -1;
    }
    else if (num == 0 || num == 1)
    {
        return 1;
    }
    else{
        double test_factorial = 1;
        for (int i = num; i > 0; i--)
        {
            test_factorial = i*test_factorial;
        }
        return test_factorial;
    }
}
double sine(double angle){
    return sin(angle);
}
double cosine(double angle){
    return cos(angle);
}
double tangent(double angle){
    return tan(angle);
}