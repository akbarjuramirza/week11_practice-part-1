
#include <iostream>

using namespace std;

int main() {
    
    /*Write a program to print the address of the pointer to a variable whose value is input from user.*/
    //Problem-2
    
    int num;
    cout << "enter the number: ";
    cin >> num;
    int *x_ptr = nullptr;
    x_ptr = &num;
    cout << &x_ptr << endl;
       
    return 0;
}
