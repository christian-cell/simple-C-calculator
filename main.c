#include <stdio.h>

int main() 
{
  char operator;
  double firstNumber , secondNumber;
  
  printf("Enter an operator (+ , - , * , /) :");
  scanf("%C" , &operator);

  printf("Enter two operands : ");
  scanf("%lf %lf",&firstNumber , &secondNumber);

  switch (operator)
  {
  case '+':
      printf("%.1lf + %.1lf = %.1lf " , firstNumber , secondNumber ,firstNumber + secondNumber);
      break;
  case '-':
      printf("%.1lf - %.1lf = %.1lf " , firstNumber , secondNumber ,firstNumber - secondNumber);
      break;
  case '*':
      printf("%.1lf * %.1lf = %.1lf " , firstNumber , secondNumber ,firstNumber * secondNumber);
      break;
  case '/':
      printf("%.1lf / %.1lf = %.1lf " , firstNumber , secondNumber ,firstNumber / secondNumber);
      break;
  
  default:
    printf("Operator is wrong");
    break; 
  }



}