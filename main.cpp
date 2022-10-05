#include <iostream>

using std::cout;
using std::endl;

int policz(int lhs, int rhs) {
    return (lhs + rhs) * (lhs - rhs);
}

int main() {
    cout << "W trzecim branchu; (2 + 3) * (2 - 3) = " << policz(2, 3) << endl;
    return 0;
}