// Standard Exceptions

#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong() {
        char *p_mem = new char[999999999999999999];
        delete [] p_mem;
    }
};

int main() {

    try {
        CanGoWrong wrong;
    }
    catch(bad_alloc &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    
    cout << "Still running." << endl;
    return 0;
}
