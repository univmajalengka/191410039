#include<iostream>
using namespace std;
int main()
{
	//BISA
	int a[4][4][2] ={{{1,2},{3,4},{5,6},{7,8}},
					{{9,10},{11,12},{13,14},{15,16}},
					{{17,18},{19,20},{21,22},{23,24}},
					{{25,26},{27,28},{29,30},{31,32}}};

	
	//PRINTOUT HASIL OPERASI
		for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
		for(int k=0;k<2;k++){
			cout << a[i][j][k] << "\t";
		}
		cout << endl;
		}
		cout << endl;
	}
}

