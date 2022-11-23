
#include <iostream>
#include <vector>

using namespace std;

void vector_print(vector<int> test) {
    for(int i = 1; i <= 10; i++) {
        test.push_back(i);
    }
    
    for(int z = 0; z < 10; z++) {
        cout << test[z] << " ";
    }
}

int main() {
    
    /*Playing with vectors and their features*/
    //Problem-10
    
    //adding one element into dynamic array
    vector<int> marks = {24, 48, 12};
    marks.push_back(33);
    for(int i = 0; i < marks.size(); i++) {
        cout << marks[i] << " ";
    }
    cout << endl;
    //removing one value from vector
    vector<int> marks2 = {10, 20, 30, 40, 50};
    marks.pop_back();
    for(int i = 0; i < marks2.size(); i++) {
        cout << marks2[i] << " ";
    }
    cout << endl;
    //print vector using separate function
    vector<int> test;
    //function call
    vector_print(test);
    
    
    return 0;
}
