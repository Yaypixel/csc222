#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    s1 = "abc";
    s2 = s1.substr(1,2) + s1.substr(2) + s1.substr();
    s1 = s2.substr(3,1) + s2.substr();
    s1.swap(s2);
    cout << s1 << " " << s2 << endl;

    string s = "CSatACC";
    for (int i = 1; i < s.length(); i++) {
        s[i - 1] = s[i] + 'c' - 'a';
    }
    cout << s << endl;

    string ahh = "bccabc";
    cout << ahh.substr(3, 1) << endl;

    return 0;
}
