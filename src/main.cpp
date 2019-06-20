#include <iostream>
#include "a_list.hpp"

using namespace std;

int main () {
       
    try {

        // const int SIZE = 10;
        AList<int> intList;
        
        // int tmp = 10;
        int value = 0;
        
        // intList.insert(tmp);
        // intList.getValue(value);
        cout << "value : " << value << endl;
        return 0;
        
    } catch(const std::exception& e) {
        cerr << e.what() << '\n';
    }

    return -1;
}