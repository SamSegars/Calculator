#include <iostream>

using std::cerr;
using std::cin;
using std::cout;

enum class Operation { Multiply = 1, Subtract, Add, Divide };

int add    (int first, int second) { return first + second; }
int mult   (int first, int second) { return first * second; }
int sub    (int first, int second) { return first - second; }
int divide (int first, int second) { return first / second; }

int runOperation (int a, int b, Operation operation)
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
            throw std::domain_error("Invalid operation in `runOperation`");
    }
}

Operation elicitOperation()
{
    int input;
    auto predicate = [&input] { return input <= 0 || input >= 5; };

    do
    {
        cout << "Options\n";
        cout << "1 = Multiply\n";
        cout << "2 = Subtract\n";
        cout << "3 = Add\n";
        cout << "4 = Divide\n";
        cout << "Enter Option: ";
        cin >> input;

        if (predicate())
        {
            cout << "\nInvalid Selection\n\n";
        }
    } while (predicate());

    return static_cast<Operation>(input);
}

int elicitContinue()
{
    int input;
    auto predicate = [&input] { return input != 0 && input != 1; };

    do
    {
        cout << "\nAre you ready to exit?\n";
        cout <<  "1 = Yes\n";
        cout <<  "0 = No, continue with accumulated result\n";
        cout << "Enter Option: ";
        cin >> input;

        if (predicate())
        {
            cout << "\nSorry, input Invalid.\n\n";
        }
    } while (predicate());

    cout << "\n";

    return !input;
}

void elicitInput(int &a, int &b, bool elicitA)
{
    if (elicitA)
    {
        cout << "\nEnter First number: ";
        cin >> a;
    }
    else
    {
        cout << "\nUsing previous result, " << a << ", as first number.\n";
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
        Operation input = elicitOperation();

        elicitInput(accumulator, b, !again);

        cout << "\nWorking... ";

        accumulator = runOperation(accumulator, b, input);

        cout << "Your result is: " << accumulator << "\n";
    } while ((again = elicitContinue()));

    cout << "Have a fantastic day";

    return 0;
}
