#include <iostream>
using namespace std;
void truncate(char a[], int n) {
    char* p = a;
    int len = 0;
    while (*p && len < n) {
        p++;
        len++;
        if (len == n) {
            *p = '\0';
        }
    }
}
int main() {
    char a[100];
    cin.getline(a, 100);
    int n; cin >> n;
    cout << a << endl;
    truncate(a, n);
    cout << a << endl;
}