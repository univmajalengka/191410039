#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char stringPertama[100], stringKedua[100];
  cout << "Masukkan string pertama: ";
  fgets(stringPertama, sizeof(stringPertama), stdin);
  cout << "Masukkan string kedua: ";
  fgets(stringKedua, sizeof(stringKedua), stdin);
  if (strcmp(stringPertama, stringKedua) == 0){
    cout << "Kedua string sama.\n";
  } else{
    cout << "Kedua string tidak sama.\n";
  }
  return 0;
}
