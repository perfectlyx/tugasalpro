#include <iostream>
#include <cmath>
using namespace std;

int main(){
//calculator
    char op;
    double num1;
    double num2;
    double result;

   cout << "******* CALCULATOR ********" <<endl;
   cout << "Enter either ( + - * /): ";
   cin >> op;

   cout << "Enter #1: ";
   cin >> num1;

   cout << "Enter #2: ";
   cin >> num2;
   
   switch(op)
   {
   case '+':
   result = num1 + num2;
   cout << "Result: " << result << '\n';
   break;
   case '-':
   result = num1 - num2;
   cout << "Result: " << result << '\n';
   break;
   case '*':
   result = num1 * num2;
   cout << "Result: " << result << '\n';
   break;
   case '/':
   result = num1 / num2;
   cout << "Result: " << result << '\n';
   default:
   cout << "Please Choose any of this operation ( + - * /)";
    break;
   }


    return 0;
}
