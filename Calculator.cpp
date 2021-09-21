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

int divide (int first, int second)
{
    cout << "Received " << first << " and " << second << "\n";
    return (first / second);
}

int main()
{
    enum Operation { Multiply = 1, Subtract, Add, Divide };

    int input;
    int result;

    cout << "Options\n";
    cout << "1 = Multiply\n";
    cout << "2 = Subtract\n";
    cout << "3 = Add\n";
    cout << "4 = Divide\n";
    cout << "Enter Option: ";
    cin >> input;

    if (input >= 5 || input <= 0)
    {
        do
        {
            cout << "Invalid Selection\n";
            cout << "Options\n";
            cout << "1 = Multiply\n";
            cout << "2 = Subtract\n";
            cout << "3 = Add\n";
            cout << "4 = Divide\n";
            cout << "Enter Option: ";
            cin >> input;
        } while (input >= 5 || input <= 0);
    }

    if (input == Operation::Multiply)
    {
        cout << "Multiply Selected\n";
        int a, b, c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result = mult(a, b);
        cout << "Your result is: " << result << "\n";
    }

    if (input == Operation::Subtract)
    {
        cout << "Subtract Selected\n";
        int a, b, c;
        cout << "Enter First number: ";
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result = sub(a, b);
        cout << "Your result is: " << result << "\n";
    }

    if (input == Operation::Add)
    {
        cout << "Add Selected \n";
        int a, b, c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result = add(a, b);
        cout << "Your result is: " << result << "\n";
    }

    if (input == Operation::Divide)
    {
        cout << "Divide Selected\n";
        int a, b, c;
        cout << "Enter First number: " ;
        cin >> a;
        cout << "Enter Second number: ";
        cin >> b;
        cout << "Working...\n";
        result = divide(a, b);
        cout << "Your result is: " << result << "\n";
    }

    if (input > 4 || input <= 0)
    {
        cout << "input was not vaild\n";
        return 0;
    }

    int ans;
    int Ans;

    cout << "Would you like to continue?\n";
    cout << "0 = No\n";
    cout << "1 = Yes\n";
    cout << "Enter Option:";
    cin >> Ans;

    if (Ans != 0 && Ans != 1)
    {
        do
        {
            cout << "Sorry, input Invalid.\n";
            cout << "Please review options\n";
            cout <<  "0 = No\n";
            cout <<  "1 = Yes\n";
            cout << "Enter Option:";
            cin >> Ans;
        } while (Ans != 0 && Ans != 1);
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
            cin >> input;

            if (input >= 5 || input <= 0)
            {
                do
                {
                    cout << "Invalid Selection\n";
                    cout << "Options\n";
                    cout << "1 = Multiply\n";
                    cout << "2 = Subtract\n";
                    cout << "3 = Add\n";
                    cout << "4 = Divide\n";
                    cout << "Enter Option: ";
                    cin >> input;
                } while (input >= 5 || input <= 0);
            }

            if (input == Operation::Multiply)
            {
                cout << "Multiply Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result = mult(result, b);
                cout << "Your result is: " << result << "\n";
            }

            if (input == Operation::Subtract)
            {
                cout << "Subtract Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result = sub(result, b);
                cout << "Your result is: " << result << "\n";
            }

            if (input == Operation::Add)
            {
                cout << "Add Selected \n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result = add(result, b);
                cout << "Your result is: " << result << "\n";
            }

            if (input == Operation::Divide)
            {
                cout << "Divide Selected\n";
                int b;
                cout << "Enter Second number: ";
                cin >> b;
                cout << "Working...\n";
                result = divide(result, b);
                cout << "Your result is: " << result << "\n";
            }

            if (input > 4 || input <= 0)
            {
                cout << "input was not vaild\n";
                return 0;
            }

            cout << "Would you like to continue?\n";
            cout << "0 = No\n";
            cout << "1 = Yes\n";
            cout << "Enter Option:";
            cin >> ans;

            if (ans != 0 && ans != 1)
            {
                do
                {
                    cout << "Sorry, input Invalid.\n";
                    cout << "Please review options\n";
                    cout <<  "0 = No\n";
                    cout <<  "1 = Yes\n";
                    cout << "Enter Option:";
                    cin >> ans;
                } while (ans != 0 && ans != 1);
            }
        } while (ans == 1);
    }

    if (Ans == 0)
    {
        cout << "Have a fantastic day";
        return 0;
    }

    return 0;
}
