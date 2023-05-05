#include<iostream>
using namespace std;
int gcd(int a, int b){
	cout<<a<<" "<<b<<endl;
	if(b == 0){
        cout<<a;
		return a;
	}
	if(a==0){
		return b;
	}
	int rem= a%b;
	cout<<rem<<endl;
	return gcd(b, rem);
}
int main() {
	int n1,n2;
	cin>>n1>>n2;
	int gcdCal = gcd(n2,n1);
	cout<<gcd<<endl;
	return 0;
}