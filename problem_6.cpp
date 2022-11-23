
#include <iostream>

using namespace std;

int main() {
    
    /*Write C++ program to calculate the sum of two variables using pointers.*/
    //Problem-6
    
    int x;
    cout << "enter the first value: ";
    cin >> x;
    int y;
    cout << "enter the second value: ";
    cin >> y;
    int sum = 0;
    
    int *f_ptr = nullptr;
    int *s_ptr = nullptr;
    f_ptr = &x;
    s_ptr = &y;
    sum = *f_ptr + *s_ptr;
    cout << "The sum is: " << sum << endl;
    
    
    return 0;
}
