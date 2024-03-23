//Simple Calculator using two input Numbers (+, -, /, *)
#include<iostream>
using namespace std;

int main()
{
    double number1, number2; //to store  our inputs
    char op ;  // operator for our arthemetic calcualations

  cout << "Enter the operator (*,+,/,-)"; // Enter the Operator to perform calc..
     cin >> op;

 cout <<"Welcome please input the First Number and second number \n" ;//input values, Numbers
     cin>> number1 >> number2 ;

switch (op)
{
    case '+': //Addition
       cout << number1 << op << number2 << "="<< number1 + number2 << endl;
       break;

     case '-'://substraction
       cout << number1 << op << number2 <<"="<< number1 - number2 << endl;
       break;

    case '*'://Multiplication
       cout << number1 << op << number2 <<"="<< number1 * number2 << endl;
       break;
    case '/'://divide
        if  (number2 = 0.0){   
            cout<< " Divide by zero case";
        }
        else {
            cout<< number1 << op << number2 << "="<< number1 / number2 <<endl;
        }
        break;
      default :
      cout << " Invalid Operator"; //shows invlaid if we put some unassigned operator
   
}
}