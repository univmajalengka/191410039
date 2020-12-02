#include<iostream>
using namespace std;

int main() {

    int arr1[10], arr2[10], i, n;

    cout << "Masukan jumlah array:";
    cin>>n;

    cout << "Enter elemen array:" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }
    cout << "Salinan array tersebut adalah :";
    for (i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}
