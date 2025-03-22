#include <iostream>
using namespace std;
void reverse(char a[]);
int main() {
	char str[100];
	cin.getline(str,100);
	cout << " Xau ban dau : " << str << endl;
	reverse(str);
	cout << " Xau dao nguoc: " << str << endl;
	return 0;
}
void reverse(char a[]) {
	char* bd = a;
	char* kt = a;
	while (*kt) {
		kt++;
	}
	kt--;
	while (bd<kt) {
		char tmp = *bd;
		*bd = *kt;
		*kt = tmp;
		bd++;
		kt--;
	}
}