#include<iostream>
using namespace std;
 int kj(int j,int m,int d){
 	int td;
 td=(j*3600)+(m*60)+d;
 return td;
 }
 int main(){
 	int td1,td2,td3,j1,m1,d1,j2,m2,d2;
 	cout<<"Program Prosedur Fungsi"<<endl;
 	cout<<"Jam:";cin>>j1;
 	cout<<"Menit:";cin>>m1;
 	cout<<"Detik:";cin>>d1;
 	cout<<j1<<":"<<m1<<":"<<d1<<endl;
 	
 	cout<<"Jam:";cin>>j2;
 	cout<<"Menit:";cin>>m2;
 	cout<<"Detik:";cin>>d2;
 	cout<<j2<<":"<<m2<<":"<<d2<<endl;
 	
 	td1=kj(j1,m1,d1);
 	td2=kj(j2,m2,d2);
 	td3=td2-td1;
 	cout<<"Total Detik :"<<td3;
 	
 }
	
	 
 
