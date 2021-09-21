#include <iostream>

using std::cin;
using std::cout;

int add (int first, int second)
{
    cout << "Received " << first << " and " << second << "\n";
    return (first + second);
}

int mult (int first, int second)
{
    cout << "Received " << first << " and " << second << "\n";
    return (first * second);
}

int sub (int first, int second)
{
    cout << "Received " << first << " and " << second << "\n";
    return (first - second);
}

int divide ( int first, int second)
{
    cout << "Received " << first << " and " << second << "\n";
    return (first / second);
}

int main()
{
    const int Multiply = 1;
    const int Subtract = 2;
    const int Add = 3;
    const int Divide = 4;

    int Input;
    int result;

    cout << "Options\n";
    cout << "1 = Multiply\n";
    cout << "2 = Subtract\n";
    cout << "3 = Add\n";
    cout << "4 = Divide\n";
    cout << "Enter Option: ";
    cin >> Input;

    if (Input >= 5 || Input <= 0)
    {
        do {
            cout << "Invalid Selection\n";
            cout << "Options\n";
            cout << "1 = Multiply\n";
            cout << "2 = Subtract\n";
            cout << "3 = Add\n";
            cout << "4 = Divide\n";
            cout << "Enter Option: ";
            cin >> Input;
        } while(Input >= 5 || Input <=0);
    }

    if (Input == Multiply)
    {       cout << "Multiply Selected\n";
        int a,b,c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result=mult(a,b);
        cout << "Your result is: " << result << "\n";
    }

    if(Input == Subtract)
    {     cout << "Subtract Selected\n";
        int a,b,c;
        cout << "Enter First number: ";
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result=sub(a,b);
        cout << "Your result is: " << result << "\n";
    }

    if (Input == Add)
    {    cout << "Add Selected \n";
        int a,b,c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result=add(a,b);
        cout << "Your result is: " << result << "\n";
    }

    if (Input == Divide)
    {     cout << "Divide Selected\n";
        int a,b,c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result=divide(a,b);
        cout << "Your result is: " << result << "\n";
    }

    if (Input > 4 || Input <= 0)
    {cout << "Input was not vaild\n";
        return 0;}

    int ans;
    int Ans;

    cout << "Would you like to continue?\n";
    cout << "0 = No\n";
    cout << "1 = Yes\n";
    cout << "Enter Option:";
    cin >> Ans;

    if (Ans != 0 && Ans != 1) {
        do {
            cout << "Sorry, Input Invalid.\n";
            cout << "Please review options\n";
            cout <<  "0 = No\n";
            cout <<  "1 = Yes\n";
            cout << "Enter Option:";
            cin >> Ans;
        } while(Ans != 0 && Ans != 1);
    }

    if (Ans == 1)
    {
        do
        {
            cout << "Using " << result << " as First Number.\n";
            cout << "Options\n";
            cout << "1 = Multiply\n";
            cout << "2 = Subtract\n";
            cout << "3 = Add\n";
            cout << "4 = Divide\n";
            cout << "Enter Option: ";
            cin >> Input;

            if (Input >= 5 || Input <= 0)
            {
                do {
                    cout << "Invalid Selection\n";
                    cout << "Options\n";
                    cout << "1 = Multiply\n";
                    cout << "2 = Subtract\n";
                    cout << "3 = Add\n";
                    cout << "4 = Divide\n";
                    cout << "Enter Option: ";
                    cin >> Input;
                } while(Input >= 5 || Input <=0);
            }

            if (Input == Multiply)
            {       cout << "Multiply Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result=mult(result,b);
                cout << "Your result is: " << result << "\n";
            }

            if(Input == Subtract)
            {     cout << "Subtract Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result=sub(result,b);
                cout << "Your result is: " << result << "\n";
            }

            if (Input == Add)
            {    cout << "Add Selected \n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result=add(result,b);
                cout << "Your result is: " << result << "\n";
            }

            if (Input == Divide)
            {     cout << "Divide Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result=divide(result,b);
                cout << "Your result is: " << result << "\n";
            }

            if (Input > 4 || Input <= 0)
            {cout << "Input was not vaild\n";
                return 0;}

            cout << "Would you like to continue?\n";
            cout << "0 = No\n";
            cout << "1 = Yes\n";
            cout << "Enter Option:";
            cin >> ans;

            if (ans != 0 && ans != 1) {
                do {
                    cout << "Sorry, Input Invalid.\n";
                    cout << "Please review options\n";
                    cout <<  "0 = No\n";
                    cout <<  "1 = Yes\n";
                    cout << "Enter Option:";
                    cin >> ans;
                } while(ans != 0 && ans != 1);
            }
        } while(ans == 1);
    }
    if (Ans = 0)
    {
        cout << "Have a fantastic day";
        return 0;
    }

    return 0;
}
