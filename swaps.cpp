#include <iostream>
#include <string>

using namespace std;

void swap_with_pointers(char* a, char* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "a: " << *a << " b: " << *b  << endl;
}

int main() {
    string a1 = "hello";
    string a2 = "world";

    a1.swap(a2);
    
    cout << a1 << ' ' << a2 << endl;
    
    int b1 = 1;
    int b2 = 2;
    int btemp = b1;
    b1 = b2;
    b2 = btemp;

    cout << "a: " << b1 << " b: " << b2 << endl;

    char c1 = 'c';
    char c2 = 'd';
    swap_with_pointers(&c1, &c2);
    
    return 0;

}
