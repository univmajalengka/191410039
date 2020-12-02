#include<iostream>
using namespace std;

int main(){
	int nilai[100];
	int nmax;
	
	cout<<"Masukan jumlah nilai yang dibutuhkan : ";cin>>nmax;
	
	for (int i=1; i<=nmax; i++){
	cout<<"Masukan nilai : "; cin >> nilai[i];
}

cout<<endl;

cout<<"Output"<<endl;
for (int i=1; i<=nmax; i++){
	cout<<" " << nilai[i] << endl;
	
	
}
return 0;
}
