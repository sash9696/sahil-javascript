#include <iostream>

using namespace std;

int main() {

	int n;
	cout<<"Enter a no. \n";
	cin>>n;
	int reverse=0;
	while(n>0) {
		reverse=(reverse*10) + (n%10);
		n=n/10;
	}
	cout<<reverse;

	return 0;
}