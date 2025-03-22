#include <iostream>
using namespace std;
void pad_left(char a[], int n) {
    char* p = a;
    int len = 0;
    while (*p) {
        len++;
        p++;
    }
    if (len >= n) return;

    int space_count = n - len;
    char* end = a + len;
    char* new_end = end + space_count;
    while (end >= a) {
        *new_end = *end;
        end--;
        new_end--;
    }
    while (space_count--) {
        *a = ' ';
        a++;
    }
}
int main() {
    char a[100];
    cin.getline(a, 100);
    int n; cin >> n;
    cout << "Xau da nhap: " << a << endl;
    pad_left(a, 9);

}