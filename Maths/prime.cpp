#include<iostream>
using namespace std;

void checkPrime(int n){
    if(n<=1){
		cout<<"No Primes"<<endl;
		return;
	}
    if(n==2){
        cout<<n<<endl;
        return;
    }
    int i=2;
    while(i<=n){
        int j=2;
        int flag=1;
        while(j<i){
            if(i%j==0){
                flag=0;
                break;
            }
            j++;
        }
        if(flag==1){
            cout<<i<<endl;
        }
        i++;
    }
}

int main() {
	int n;
	cin>>n;
	checkPrime(n);
	return 0;
}