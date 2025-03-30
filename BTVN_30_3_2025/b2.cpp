#include <iostream>
using namespace std;

int main() {
    int m, n, k, q;
    cin >> m >> n >> k >> q;
    int arr[100][100] = {0};
    for (int i = 0; i < k; i++) {
        int x, y, v;
        cin >> x >> y >> v;
        arr[x][y] = v;
    }
    for (int t = 0; t < q; t++) {
        int xp, yp;
        cin >> xp >> yp;
        int sum = 0;
        for (int i = xp - 1; i <= xp + 1; i++) {
            for (int j = yp - 1; j <= yp + 1; j++) {
                if (i >= 0 && i < m && j >= 0 && j < n) {
                    sum += arr[i][j];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
