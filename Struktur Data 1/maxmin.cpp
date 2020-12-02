#include<iostream>
using namespace std;
int main(){
	int a, b, max, min;
	cout<<"Masukan nilai pertama : "; cin>>a; 
	cout<<"Masukan nilai kedua : "; cin>>b;
	
	if(a>b){
		max=a;min=b;
	}
	else{
		max=b;min=a;
	}
	cout<<"Nilai terbesar adalah : "<<max<<endl;
	cout<<"Nilai terkecil adalah : "<<min<<endl;
	
	return 0;
}
