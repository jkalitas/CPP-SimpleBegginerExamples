#include <iostream>
using namespace std;

void passByValue(int num1){
    cout << "In passByValue()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1, won't impact num
    num1++;

    cout << "num1 is now " << num1 << endl;
}


void passByRef(int &num1)
{
    cout << "In passByRef()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    // modify num1 which will now change num
    num1++;

    cout << "num1 is now " << num1 << endl;
}


int main() {

    int num = 3;
    int &refNum = num;
//    int &refNum2; /*If we not initialize it gives a compile error*/

    /**
     * Checking the output they have the same memory location.
     */
    cout << "##############     Example 1     ##############\n"<< endl;
    cout << "num Value: " << num << " located at : " << &num << endl;
    cout << "refNum Value: "<< refNum << " located at : " << &refNum << endl << endl;

    cout << "##############     Example 2     ##############\n"<< endl;
    refNum++;
    /**
     * Incrementing the refNum will increment the referenced value and so the num will be incremented;
     */
    cout << "num Value: " << num << " located at : " << &num << endl;
    cout << "refNum Value: "<< refNum << " located at : " << &refNum << endl << endl;

    cout << "##############     Example 3     ##############\n"<< endl;
    /**
     * When we pass it to a function and increment, the variable isn't changed on main.
     */
    int num1 = 3;
    cout << "In main()" << endl;
    cout << "Value of num1 is " << num1 << endl;

    passByValue(num1);

    cout << "Back in main and the value of num is  " << num1 << endl << endl;

    cout << "##############     Example 4     ##############\n"<< endl;
    /**
     * Now we try to pass on reference.
     */
    passByRef(num1);
    cout << "Back in main and the value of num is  " << num1 << endl << endl;
    return 0;
}