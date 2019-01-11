#include <iostream>
using namespace std;

int main() {
    
    string gLineInput, cinInput;
    
    cout << "Input for getLine \n ";
    getline(cin, gLineInput);
    cout << "getLine read: " << gLineInput << endl;
    
    cout << "Input for cin \n ";
    cin >> cinInput;
    cout << "cin read: " << cinInput << endl;
    
    return 0;
    
}
