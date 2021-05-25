#include<iostream>
using namespace std;
int main () {
	int n;
	int* p;
	cin >> n;
	cout << n << endl;
	p = &n;
	delete p;
	cout << n << endl;
	return 0;
	//khi tro p toi dia chi cua n, giai phong p thi tai dia chi cua n se rong, nen cout n sau giai phong se ko hien ket qua
}
