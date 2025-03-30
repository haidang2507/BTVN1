#include <iostream>
#include <map>
using namespace std;
int main(){
    map <int , int> kq;
    int n,k; cin >> n;int arr[n];
    for (int *p = arr; p < arr +n ; p++) cin >> *p;
    cin >>k ;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                int a = max(arr[i], arr[j]);
                int b = k - a;
                if (kq[a] == 0) {
                    kq[a] = b;
                    cout << b << " " << a << endl;
                }
            }
        }
    }
    return 0;
}
