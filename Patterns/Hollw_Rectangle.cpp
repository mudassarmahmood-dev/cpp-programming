#include <iostream>
using namespace std;
int main(){
	int r;
	cout <<"Enter r: ";
	cin >> r;
	int c;
	cout << "Enter c: ";
	cin >> c;
	
	for(int i=1; i<=r ; i++){
		for(int j=1; j<=c; j++){
			if (i==1 || j==1 || i==r || j==c) cout <<"* ";
			else cout << "  "; 
		}	
		cout << endl;
	}
	return 0;
}