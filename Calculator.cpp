#include <iostream>
  int add (int first, int second)
  {
     std::cout << "Received " << first << " and " << second << "\n";
     return (first + second);
   }
   int Mult (int first, int second)
{
    std::cout << "Received " << first << " and " << second << "\n";
    return (first * second);
}
  int Sub (int first, int second)
{
  std::cout << "Received " << first << " and " << second << "\n";
  return (first - second);
}
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
  int Input;
  cout << "Options\n";
  cout << "1 = Multiply\n";
  cout << "2 = Subtract\n";
  cout << "3 = Add\n";
  cout << "4 = Divide\n";
  cout << "Enter Option:";
  int d;
  cin >> d;
  Input = (d);

      if (Input = 1)
{       cout << "Multiply Selected\n";
        int a,b,c;
        cout << "Enter two numbers: " ;
        cin >> a;
        cin >> b;
        cout << "\n Working...\n";
        c=Mult(a,b);
        cout << "Your result is: " << c << "\n";
      return 0;
}
      if (Input = 2)
{     cout << "Subtract Selected";
      int a,b,c;
      cout << "Enter two numbers: ";
      cin >> a;
      cin >> b;
      cout << "\n Working...\n";
      c=Sub(a,b);
      cout << "Your result is: " << c << "\n";
      return 0;
  }
      if (Input = 3)
{    cout << "Add Selected";
      int a,b,c;
      cout << "Enter two numbers: " ;
      cin >> a;
      cin >> b;
      cout << "\n Working...\n";
      c=add(a,b);
      cout << "Your result is: " << c;
      return 0;
}
      if (Input = 4)
{     cout << "Divide Selected";
      int a,b,c;
      cout << "Enter two numbers: " ;
      cin >> a;
      cin >> b;
      cout << "\n Working...\n";
      c=divide(a,b);
      cout << "Your result is: " << c;
      return 0;
}

  return 0;
}
