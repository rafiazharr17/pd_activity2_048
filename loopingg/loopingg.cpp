#include <iostream>
using namespace std;

int main()
{
	int a[5];
	cout << "mengisi array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> a[i];
	}
	cout << ",e,baca array" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "data ke-" << (i + 1) << " :" << a[i] << endl;
	}
}
