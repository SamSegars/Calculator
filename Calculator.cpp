#include <iostream>

using std::cerr;
using std::cin;
using std::cout;

enum Operation { Multiply = 1, Subtract, Add, Divide };

int add    (int first, int second) { return first + second; }
int mult   (int first, int second) { return first * second; }
int sub    (int first, int second) { return first - second; }
int divide (int first, int second) { return first / second; }

int runOperation (int a, int b, int operation)
{
    switch (operation)
    {
        case Operation::Multiply:
            return mult(a, b);

        case Operation::Subtract:
            return sub(a, b);

        case Operation::Add:
            return add(a, b);

        case Operation::Divide:
            return divide(a, b);

        default:
            cerr << "Invalid operation in `runOperation`\n";
            exit(0);
    }
}

int elicitOperation()
{
    int input;

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

    return input;
}

int elicitContinue()
{
    int input;

    do
    {
        cout << "Are you ready to exit?\n";
        cout <<  "1 = Yes\n";
        cout <<  "0 = No, continue with accumulated result\n";
        cout << "Enter Option:";
        cin >> input;

        if (input != 0 && input != 1)
        {
            cout << "Sorry, input Invalid.\n";
        }
    } while (input != 0 && input != 1);

    return !input;
}

void elicitInput(int &a, int &b, bool elicitA)
{
    if (elicitA)
    {
        cout << "Enter First number: ";
        cin >> a;
    }
    else
    {
        cout << "Using previous result, " << a << ", as first number.\n";
    }

    cout << "Enter Second number: ";
    cin >> b;
}

int main()
{
    int accumulator;
    int again = false;

    do
    {
        int b;
        int input = elicitOperation();

        elicitInput(accumulator, b, !again);

        cout << "Working...\n";

        accumulator = runOperation(accumulator, b, input);

        cout << "Your result is: " << accumulator << "\n";
    } while ((again = elicitContinue()));

    cout << "Have a fantastic day";

    return 0;
}
