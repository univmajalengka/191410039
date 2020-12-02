#include<iostream>
using namespace std;

int main(){
	
	const int A_SIZE = 5;
	int a[A_SIZE];
	a[0] = 1 ;
	a[1] = 2 ;
	a[2] = 3 ;
	a[3] = 4 ;
	a[4] = 5 ;
	
	const int B_SIZE = 5;
	int b[B_SIZE];
	
	if (B_SIZE >= A_SIZE){
	
	for (int i = 0; i < A_SIZE; i++)
		b[i] = a[i];
		
	for (int i = 0; i < A_SIZE; i++)
		cout<< a[i] << " , "<< b[i] << endl;
		
	}
	else
	{
		
		cout << "ERROR! Target Array Terlalu Kecil!\n";
		
	}
	
}
