#include<iostream>
using namespace std;

int main(){


int a[5] = {4, 6, 20, 7, 9};

int min = a[0];
int max = a[0];

for (int i = 0; i < 5; i++){
	
	if(min > a[i])
	{
		min = a[i];
	}
	if(max < a[i])
	{
		max = a[i];
	}
}

	cout << "Nilai Maximum :" << max <<endl;
	cout << "Nilai Minimum :" << min <<endl;
}
