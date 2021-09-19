#include <iostream>
// Makes Add Function
  int add (int first, int second)
  {
     std::cout << "Received " << first << " and " << second << "\n";
     return (first + second);
   }
// Makes Multiply Function
   int Mult (int first, int second)
{
    std::cout << "Received " << first << " and " << second << "\n";
    return (first * second);
}
// Makes Subtraction Function
  int Sub (int first, int second)
{
  std::cout << "Received " << first << " and " << second << "\n";
  return (first - second);
}
// Makes Divide Function
  int divide ( int first, int second)
{
  std::cout << "Received " << first << " and " << second << "\n";
  return (first / second);
}

int main()
 {
  using namespace std;
  const int Multiply = 1;
  const int Subtract = 2;
  const int Add = 3;
  const int Divide = 4;
// Input refers to Human input for selection
  int Input;
  int d;
  cout << "Options\n";
  cout << "1 = Multiply\n";
  cout << "2 = Subtract\n";
  cout << "3 = Add\n";
  cout << "4 = Divide\n";
  cout << "Enter Option: ";
  cin >> d;
  Input = (d);
      if (Input == Multiply)
{       cout << "Multiply Selected\n";
        int a,b,c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        c=Mult(a,b);
        cout << "Your result is: " << c << "\n";
        cout << "Have a great day!\n";
}
      else if(Input == Subtract)
{     cout << "Subtract Selected\n";
      int a,b,c;
      cout << "Enter First number: ";
      cin >> a;
      cout << "Enter Second number: ";
      cin >> b;
      cout << "Working...\n";
      c=Sub(a,b);
      cout << "Your result is: " << c << "\n";
      cout << "Have a Great Day!\n";
  }
      else if (Input == Add)
{    cout << "Add Selected \n";
      int a,b,c;
      cout << "Enter First number: " ;
      cin >> a;
      cout << "Enter Second number: ";
      cin >> b;
      cout << "Working...\n";
      c=add(a,b);
      cout << "Your result is: " << c << "\n";
      cout << "Have a great day!\n";
}
      else
{     cout << "Divide Selected\n";
      int a,b,c;
      cout << "Enter First number: " ;
      cin >> a;
      cout << "Enter Second number: ";
      cin >> b;
      cout << "Working...\n";
      c=divide(a,b);
      cout << "Your result is: " << c << "\n";
      cout << "Have a great day!\n";
}
return 0;
}
