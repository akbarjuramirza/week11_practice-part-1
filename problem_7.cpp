
#include <iostream>

using namespace std;

int main() {
    
    /*Write C++ program to calculate the product of two variables using pointers.*/
    //Problem-7
    
    int w;
    cout << "enter the first value: ";
    cin >> w;
    int z;
    cout << "enter the second value: ";
    cin >> z;
    int product = 0;
    
    int *w_ptr = nullptr;
    int *z_ptr = nullptr;
    w_ptr = &w;
    z_ptr = &z;
    product = *w_ptr * *z_ptr;
    cout << "The product is: " << product << endl;
    
    
    return 0;
}
