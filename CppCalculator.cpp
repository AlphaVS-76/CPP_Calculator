#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter an Operator (+, -, *, /, %): "<< endl;
    cin >> op;
    cout << "Enter a second number: "<< endl;
    cin >> b;

    if(op == '+'){
        cout << a + b;
    }
    else if(op == '-'){
        cout << a - b;
    }
    else if(op == '*'){
        cout << a * b;
    }
    else if(op == '/'){
        if(b == 0){
            cout << "Denominator Cannot be 0";
        }
        else{
            cout << float(a / b);
        }
    }
    else if(op == '%'){
        cout << a % b;
    }
    else{
        cout << "Invalid Operator";
    }

    return 0;
}