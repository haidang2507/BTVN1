#include <iostream>
using namespace std;
void pad_right(char a[], int n) {
    char* kt = a;
    int long_l = 0;
    while (*kt) {
        kt++;
        long_l++;
        if (long_l > n) return;
    }
    while (long_l < n) {
        *kt = ' ';
        kt++;
        long_l++;
    }
    *kt = '\0';
}
int main() {
    char a[100];
    cin.getline(a, 100);
    int n; cin >> n;
    cout << "Xau da nhap: " << a << endl;
    pad_right(a, 9);

}