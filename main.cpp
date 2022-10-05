#include <iostream>

using std::cout;
using std::endl;

int policz(int lhs, int rhs) {
    return lhs + rhs;
}

int main() {
    cout << "W pierwszym branchu; 2 + 3 = " << policz(2, 3) << endl;
    return 0;
}