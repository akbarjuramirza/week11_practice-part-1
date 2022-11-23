
#include <iostream>

using namespace std;

int main() {
    
    /*Write a C++ program to find the maximum number among three numbers using pointers*/
    //Problem-8
    
    int size = 3;
    int num[size];
    cout << "enter three integers to get max of them (insert with probel): ";
    int counter = 0;
    
    while(counter != size) {
        cin >> num[counter];
        counter++;
    }
    
    int *a_ptr[size];
    int max = 0;
    
    for(int i = 0; i < size; i++) {
        a_ptr[i] = &num[i];
        
        if(*a_ptr[i] > max) {
            max = *a_ptr[i];
        }
        
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "Max number is: " << max << endl;
    
    
    return 0;
}
