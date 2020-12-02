#include<iostream>
using namespace std;

int main(){
	int a[5];
	a[0] = 1 ;
	a[1] = 2 ;
	a[2] = 3 ;
	a[3] = 4 ;
	a[4] = 5 ;
	
	int b[5];
	b[0] = a[0];
	b[1] = a[1];
	b[2] = a[2];
	b[3] = a[3];
	b[4] = a[4];
	
	for (int i = 0; i < 5; i++){
		cout<< a[i] << " , "<< b[i] << endl;
	}
}
