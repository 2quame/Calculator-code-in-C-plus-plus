#include <iostream>
#include<cmath>
using namespace std;
    // function declaration
 double calculator() {
  double num1, num2, result;
  char op;
     // block of codes to be executed by the main function when the 'calculator' function is called.
     cout<<"Enter first number:\n";
          cin>>num1;
  cout<<"Select operator(+, -, *, /, ^)\n";
          cin>>op;
  cout<<"Enter second number:\n";
     cin>>num2;

         if(op=='+') {
             result = num1 + num2;
         }
         else if(op=='-'){
             result = num1 - num2;
         }
         else if(op=='*') {
             result = num1 * num2;
         }
         else if(op=='/') {
             if(num2==0) {
                 cout<<"Math Error! Division by zero is prohibited\n";// To ensure there's no division by zero.
             }else {
                 result = num1 / num2;
             }
         }
         else if(op=='^') {
             result =pow(num1,num2);
         }





    return result;// Prints or outputs the code of code executed to the terminal


  }





int main() {
     //calling the calculator function.
     char cc;
     // using the do while loop the repeat the calculator
     do {

         double num1, num2, result;
         char op;
         result = calculator();
         cout<<"Result: "<<result<<"\n";
         cout<<"Do you want to perform another calculation?(y/n)\n";
         cin>>cc;
     }while(cc == 'y' || cc =='Y');

     return 0;




}
