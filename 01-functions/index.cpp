#include <iostream>


using namespace std;

// function declaration
// int  sum(int num1, int num2);


    // function definition
    int sum(int num1, int num2)
    {
        int addition = num1 + num2;
        return addition;
        // return num1 + num2;
    }

int main()
{

    int sumOfTwoNums  = sum(10, 20);

    cout << "Sum of two numbers : " << sumOfTwoNums <<endl;

    // int num1 = 10;
    // int num2 = 20;

    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;

    // int sum = num1 + num2;
    // cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;


    // int output = sum(20, 30)*2;

   // cout << output<< endl;

    return 0;
}

