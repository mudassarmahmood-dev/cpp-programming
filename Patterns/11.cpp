#include <iostream>
using namespace std;
int main(){
	int r;
	cout << "Enter number of rows :"<<endl;
	cin>> r;
	int c;
	cout << "Enter number of Columns :"<<endl;
	cin >> c;
	
	for(int i=1; i<=r ; i++){
		for(int i=1; i<=c; i++){
		cout << "* ";	
		}
		cout << endl;
	}
	
	
	
	
	return 0;
}