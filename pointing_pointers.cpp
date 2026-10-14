#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 0;

    int* intptr = &x;
    intptr = &y;

    cout << *intptr << endl;
    cout << y << endl;
}
