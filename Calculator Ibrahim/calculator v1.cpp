#include <iostream>
using namespace std;

int main ()
{
  float input_1, input_2, result;
  char oprt;
  bool repeat = true;

  cout << "Simple Calculator ver. 1 \n";
  cout << "Use [+ - * /] \n";

  while (repeat) 
    {
      // Inpurting
      cout << "\nInput first number = ";
      cin >> input_1;

      cout << "Operation: ";
      cin >> oprt;

      cout << "Input second number = ";
      cin >> input_2;

      cout << "The result is: ";
  
      if (oprt == '+')
        {
          cout << input_1 + input_2;
        }
      else if (oprt == '-')
        {
          cout << input_1 - input_2;
        }
      else if (oprt == '*')
        {
          cout << input_1 * input_2;
        }
      else if (oprt == '/')
        {
          cout << input_1 / input_2;
        }
      else
          cout << "invalid operation";

    cout << "\n\nCalculate again? (y/n) : ";
    char answer;
    cin >> answer;
    repeat = answer == 'y';
  }
  cout << "\nThank you";
  
  return 0;
}
