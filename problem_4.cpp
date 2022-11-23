
#include <iostream>

using namespace std;

int main() {
    
    /*Write a C++ program where program asks input in variable and display same value by pointer.*/
    //Problem-4
    
    int value;
    cout << "enter the value: ";
    cin >> value;
    
    int *v_ptr = nullptr;
    v_ptr = &value;
    cout << *v_ptr << endl;
    
    
    return 0;
}
