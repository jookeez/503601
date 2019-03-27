//UVA 11727
//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
	int T;
	cin >> T;

	for (int i = 0; i < T; i++){
		int a, b, c;
		cin >> a >> b >> c;

		cout << "Case " << i+1 << ": ";
		if (a<b && b<c) cout << b << "\n";	//ABC
		if (a<c && c<b) cout << c << "\n";	//ACB
		if (b<a && a<c) cout << a << "\n";	//BAC
		if (b<c && c<a) cout << c << "\n";	//BCA
		if (c<a && a<b) cout << a << "\n";	//CAB
		if (c<b && b<a) cout << b << "\n";	//CBA
	}

	return 0;
}