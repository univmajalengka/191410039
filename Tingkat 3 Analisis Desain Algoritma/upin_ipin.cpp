#include<iostream>
using namespace std;

int n;

main(){
	cout<<"Masukan Nilai (1-1000) = ";
	cin>>n;
	cout<<endl;
	
	for(int x=1; x<n; x++){
		if((x%3!=0) && (x%5!=0))
		{
	  cout<<x<<endl;
	}
		if(x%3==0){
			cout<<"UPIN "<<endl;
	}
		if(x%5==0){
			cout<<"IPIN "<<endl;
	}
	}
	
	cout<<endl;
	cout<<endl;
	cout<<"Program by Iid Muiz";
	return 0;
}
