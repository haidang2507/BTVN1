#include <iostream>
using namespace std;
bool palindrome(char a[]) {
    char* p = a;
    char* kt = a;
    while (*kt) kt++;
    kt--;
    while (p < kt) {
        if (*p != *kt) {
            return false;
        }
        p++;
        kt--;
    }
    return true;
}
int main() {
    char a[100];
    cin.getline(a, 100);
    cout << palindrome(a);
}