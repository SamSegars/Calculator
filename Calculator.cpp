#include <iostream>

using std::cin;
using std::cout;

int add    (int first, int second) { return first + second; }
int mult   (int first, int second) { return first * second; }
int sub    (int first, int second) { return first - second; }
int divide (int first, int second) { return first / second; }

int main()
{
    enum Operation { Multiply = 1, Subtract, Add, Divide };

    int a, b;
    int input;
    int result;

    do
    {
        cout << "Options\n";
        cout << "1 = Multiply\n";
        cout << "2 = Subtract\n";
        cout << "3 = Add\n";
        cout << "4 = Divide\n";
        cout << "Enter Option: ";
        cin >> input;

        if (input <= 0 || input >= 5)
        {
            cout << "Invalid Selection\n";
        }
    } while (input <= 0 || input >= 5);

    cout << "Enter First number: ";
    cin >> a;

    cout << "Enter Second number: ";
    cin >> b;
    cout << "Working...\n";

    switch (input)
    {
        case Operation::Multiply:
            result = mult(a, b);
            break;

        case Operation::Subtract:
            result = sub(a, b);
            break;

        case Operation::Add:
            result = add(a, b);
            break;

        case Operation::Divide:
            result = divide(a, b);
            break;
    }
    
    cout << "Your result is: " << result << "\n";

    int ans;
    int Ans;

    do
    {
        cout << "Please review options\n";
        cout <<  "0 = No\n";
        cout <<  "1 = Yes\n";
        cout << "Enter Option:";
        cin >> Ans;

        if (Ans != 0 && Ans != 1)
        {
            cout << "Sorry, input Invalid.\n";
        }
    } while (Ans != 0 && Ans != 1);

    if (Ans == 1)
    {
        do
        {
            do
            {
                cout << "Options\n";
                cout << "1 = Multiply\n";
                cout << "2 = Subtract\n";
                cout << "3 = Add\n";
                cout << "4 = Divide\n";
                cout << "Enter Option: ";
                cin >> input;

                if (input <= 0 || input >= 5)
                {
                    cout << "Invalid Selection\n";
                }
            } while (input <= 0 || input >= 5);

            int b;

            cout << "Enter Second number: ";
            cin >> b;

            cout << "Working...\n";

            switch (input)
            {
                case Operation::Multiply:
                    result = mult(result, b);
                    break;

                case Operation::Subtract:
                    result = sub(result, b);
                    break;

                case Operation::Add:
                    result = add(result, b);
                    break;

                case Operation::Divide:
                    result = divide(result, b);

                    break;
            }

            cout << "Your result is: " << result << "\n";

            do
            {
                cout << "Please review options\n";
                cout <<  "0 = No\n";
                cout <<  "1 = Yes\n";
                cout << "Enter Option:";
                cin >> ans;

                if (ans != 0 && ans != 1)
                {
                    cout << "Sorry, input Invalid.\n";
                }
            } while (ans != 0 && ans != 1);
        } while (ans == 1);
    }
    else
    {
        cout << "Have a fantastic day";
    }

    return 0;
}
