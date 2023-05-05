#include<iostream>
using namespace std;

int main(){
    int n;
    char str[100];
    cin>>n;
    cin.ignore();
    cin.getline(str, 100);
    cout<<n<<endl;
    cout<<str<<endl;
}