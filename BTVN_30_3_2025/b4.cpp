
int tknp (int a[] ,int l , int n , int x){
    int l = 0;
    int r = n - 1;
    int mid = (l + r) / 2;
    if (a[mid] == x) return mid;
    if (a[mid] < x) return tknp(a, mid + 1, r, x);
    if (a[mid] > x) return tknp(a, l, mid - 1, x);
    return -1;
}