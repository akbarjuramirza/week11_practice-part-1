/*Write a C++ program to print two dimensipnal array using vectors*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<vector<long>> v;
    int saver;
    int check = 1;
    
    while(check != 0)  {
        cout << endl;
        int row_size;
        cout << "enter the number of rows: ";
        cin >> row_size;
        int col_size;
        cout << "enter the number of columns: ";
        cin >> col_size;
        
        if(check != 0) {
            //vector matrix input
            for(size_t i = 0; i < row_size; i++) {
                cout << "row" << i + 1 << ": ";
                vector<long> row;
                for(size_t j = 0; j < col_size; j++) {
                    cin >> saver;
                    row.push_back(saver);
                }
                v.push_back(row);
            }
            //vector matrix print
            cout << endl;
            for(size_t row = 0; row < row_size; row++) {
                for(size_t col = 0; col < col_size; col++) {
                    cout << v[row][col] << " ";
                } 
                cout << endl;
            }
        } 
        else {
            break;
        }
        cout << "Press 0 to terminate or any number to continue: ";
        cin >> check;
    }
    cout << "Luck!" << endl;

    
    return 0;
}
