
#include <iostream>

using namespace std;

int main() {
    
    /*Write a C++ program to ask user for 3 inputs and find the minimum number among three numbers using pointers*/
    //Problem-9
    
    int size = 3;
    int num[size];
    cout << "enter three integers to get min of them (insert with probel): ";
    int counter = 0;
    
    while(counter != size) {
        cin >> num[counter];
        counter++;
    }
    
    int *a_ptr[size];
    int min = num[0];
    
    for(int i = 0; i < size; i++) {
        a_ptr[i] = &num[i];
        
        if(*a_ptr[i] < min) {
            min = *a_ptr[i];
        }
        
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "Min number is: " << min << endl;
    
    
    return 0;
}
