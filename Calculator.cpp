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


    switch (input)
    {
        int a, b;

        case Operation::Multiply:
            cout << "Multiply Selected\n";
            cout << "Enter First number: " ;
            cin >> a;

            cout << "Enter Second number: ";
            cin >> b;

            cout << "Working...\n";
            result = mult(a, b);

            cout << "Your result is: " << result << "\n";
            break;

        case Operation::Subtract:
            cout << "Subtract Selected\n";
            cout << "Enter First number: ";
            cin >> a;

            cout << "Enter Second number: ";
            cin >> b;

            cout << "Working...\n";
            result = sub(a, b);

            cout << "Your result is: " << result << "\n";
            break;

        case Operation::Add:
            cout << "Add Selected \n";
            cout << "Enter First number: " ;
            cin >> a;

            cout << "Enter Second number: ";
            cin >> b;

            cout << "Working...\n";
            result = add(a, b);

            cout << "Your result is: " << result << "\n";
            break;

        case Operation::Divide:
            cout << "Divide Selected\n";
            cout << "Enter First number: " ;
            cin >> a;

            cout << "Enter Second number: ";
            cin >> b;

            cout << "Working...\n";
            result = divide(a, b);

            cout << "Your result is: " << result << "\n";
            break;
    }

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

            switch (input)
            {
                int b;

                case Operation::Multiply:
                    cout << "Multiply Selected\n";
                    cout << "Enter Second number: ";
                    cin >> b;

                    cout << "Working...\n";
                    result = mult(result, b);

                    cout << "Your result is: " << result << "\n";
                    break;

                case Operation::Subtract:
                    cout << "Subtract Selected\n";
                    cout << "Enter Second number: ";
                    cin >> b;

                    cout << "Working...\n";
                    result = sub(result, b);

                    cout << "Your result is: " << result << "\n";
                    break;

                case Operation::Add:
                    cout << "Add Selected \n";
                    cout << "Enter Second number: ";
                    cin >> b;

                    cout << "Working...\n";
                    result = add(result, b);

                    cout << "Your result is: " << result << "\n";
                    break;

                case Operation::Divide:
                    cout << "Divide Selected\n";
                    cout << "Enter Second number: ";
                    cin >> b;

                    cout << "Working...\n";
                    result = divide(result, b);

                    cout << "Your result is: " << result << "\n";
                    break;
            }

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
        return 0;
    }

    return 0;
}
