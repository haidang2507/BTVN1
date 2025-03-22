#include <iostream>
using namespace std;
void delete_char(char a[], char c) {
	char* bd = a; char* kt = a;
	while (*bd) {
		if (*bd != c) {
			*kt = *bd;
			kt++;
		}
		bd++;
	}
	*kt = '\0';

}
int main() {

	char str[100];
	cin.getline(str, 100);
	char c; cin >> c;
	cout << " Xau ban dau : " << str << endl;
	delete_char(str, c);
	cout << " Xau sau khi xoa : " << str << endl;
}