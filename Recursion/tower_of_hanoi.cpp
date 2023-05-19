#include<iostream>
using namespace std;

void towerOfHanoi(int n, char source, char target, char aux){
    if(n==0) return;

    towerOfHanoi(n-1, source, aux, target);
    cout<<"Move disk "<<n<<" from rod "<<source<<" to "<<target<<endl;
    towerOfHanoi(n-1, aux, target, source);
}

int main(){
    int n;
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}