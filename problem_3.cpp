
#include <iostream>

using namespace std;

int main() {
    
    /*Write C++ program that asks the user to enter integers as inputs to be stored in the variables 
    ’a’ and ’b’ respectively. There are also two integer pointers named ptrA and ptrB. Assign the values of 
    ’a’ and ’b’ to ptrA and ptrB respectively, and display them.*/
    //Problem-3
    
    int a;
    cout << "enter thh a number: ";
    cin >> a;
    int b;
    cout << "enter the b number: ";
    cin >> b;
    
    int *ptrA = nullptr;
    int *ptrB = nullptr;
    *ptrA = a;
    *ptrB = b;
    
    cout << *ptrA << endl << *ptrB << endl;
    
    
    return 0;
}
