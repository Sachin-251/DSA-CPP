#include <iostream>
using namespace std;

int main(){
	
	int initial,step,final,cel;
	cout<<"Enter Initial value:\t";
	cin>>initial;
	cout<<"Enter Final value:\t";
	cin>>final;
	cout<<"Enter Step skip:\t";
	cin>>step;
	double fer=initial;
	while(fer<=final){
		cel=(fer-32.0)*5.0/9.0;
		cout<<fer<<" "<<cel<<endl;
		fer=fer+step;
	}
	return 0;
}