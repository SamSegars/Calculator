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
        cout << "Enter two numbers: " ;
        cin >> a;
        cin >> b;
        cout << "Working...\n";
        c=Mult(a,b);
        cout << "Your result is: " << c << "\n";
}     else if(Input == Subtract)
{     cout << "Subtract Selected\n";
      int a,b,c;
      cout << "Enter two numbers: ";
      cin >> a;
      cin >> b;
      cout << "Working...\n";
      c=Sub(a,b);
      cout << "Your result is: " << c << "\n";
  }
      else if (Input == Add)
{    cout << "Add Selected \n";
      int a,b,c;
      cout << "Enter two numbers: " ;
      cin >> a;
      cin >> b;
      cout << "Working...\n";
      c=add(a,b);
      cout << "Your result is: " << c << "\n";
}     else
{     cout << "Divide Selected\n";
      int a,b,c;
      cout << "Enter two numbers: " ;
      cin >> a;
      cin >> b;
      cout << "Working...\n";
      c=divide(a,b);
      cout << "Your result is: " << c << "\n";
}

return 0;
}
