#include <iostream>
using namespace std;

void convert(int initial, int final, int step){
	double fer=initial;
	int cel;
	while(fer<=final){
		cel=(fer-32.0)*5.0/9.0;
		cout<<fer<<"\t"<<cel<<endl;
		fer=fer+step;
	}
}

int main(){
	
	int initial,step,final;
	cout<<"Enter Initial value:\t";
	cin>>initial;
	cout<<"Enter Final value:\t";
	cin>>final;
	cout<<"Enter Step skip:\t";
	cin>>step;
	convert(initial,final,step);
	return 0;
}