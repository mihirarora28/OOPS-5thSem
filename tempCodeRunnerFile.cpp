# include <iostream>
using namespace std;

int main() {
    float x, y;
    cout << "Enter the  2 numbers: ";
    cin >> x >> y;
      cout << "Enter operator: +, -, *, /: ";
         char op;
    cin >> op;

    switch(op) {
        case '+':
            cout << x << " + " << y << " = " << x + y;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}