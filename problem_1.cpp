
#include <iostream>

using namespace std;

int main() {
    
    /*Write a program to print the address of a variable whose value is input from user.*/
    //Problem-1
    
    int number;
    cout << "enter the number: ";
    cin >> number;
    
    int *n_ptr = nullptr;
    n_ptr = &number;
    cout << n_ptr << endl;
       
    return 0;
}
