#include <iostream>
using namespace std;

int main() {
int arr[15];
int mayor, menor;

cout << "Ingresa 15 numeros:" << endl;
for (int i = 0; i < 15; i++) {
cout << "Numero " << i + 1 << ": ";
cin >> arr[i];
}

mayor = menor = arr[0];
for (int i = 1; i < 15; i++) {
if (arr[i] > mayor)
mayor = arr[i];
if (arr[i] < menor)
menor = arr[i];
}

cout << "Mayor: " << mayor << endl;
cout << "Menor: " << menor << endl;

return 0;
}
