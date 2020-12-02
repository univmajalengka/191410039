#include <iostream>
using namespace std;

int main() {

	int a[5] = {2,4,6,8,10};
	int b[5] = {2,2,6,8,10};
	

	for(int i=1; i<5; i++) {
		if(a[i] == b[i]) {
			cout<<"dua array sama";
			break;
		} else {
			cout<<"dua array tidak sama";
			break;
		}
	}
	return 0;
}
