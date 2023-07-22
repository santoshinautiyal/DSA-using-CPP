#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int spaces = 1;
		while (spaces <= n - i) {
			cout << ' ';
			spaces++;
		}
        int p=i;
        int j = 1;
		while (j <= i) {
			cout << p;
            p++;
			j++;
		}
        p=p-2;
        j = i - 1;
		while (j >= 1) {
			cout <<p;
            p--;
			j--;
		}
		cout << endl;
		i++;
	}
}
