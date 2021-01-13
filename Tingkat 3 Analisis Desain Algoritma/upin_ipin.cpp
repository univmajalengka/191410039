#include<iostream>
using namespace std;

int n;

int main(){
	cout<<"Masukan Nilai (1-1000) = ";
	cin>>n;
	cout<<endl;
	
	for(int x=1; x<=n; x++){
		if((x%3==0) && (x%5==0)){
		cout<<"UPIN IPIN"<<endl;
	  	cout<<x<<endl;
	}else if(x%3==0){
		cout<<"UPIN "<<endl;
	}else if(x%5==0){
		cout<<"IPIN "<<endl;
	}else{
		cout<<x<<endl;
		}
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Program by Iid Muiz";
	return 0;
}
