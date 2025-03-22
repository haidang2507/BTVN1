#include <stdio.h>

void trim_left(char a[]) {
    char* p = a;
    int num_sp = 0;
    while (*p == ' ') {
        num_sp++;
        p++;
    }

    char* q = a;
    while (*p) {
        *q = *p;
        q++;
        p++;
    }

    *q = '\0';
}
void trim_right(char a[]) {
    char* p = a;
    while (*p) p++;
    p--;
    while (*p == ' ' && p > a) {
        p--;
    }
    *(p + 1) = '\0';
}
int main() {

}