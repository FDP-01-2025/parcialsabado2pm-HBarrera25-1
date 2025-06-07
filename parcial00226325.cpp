#include <iostream>

using namespace std;

int main(){
    int n, i;
    cout << "--PROGRAMA SERIE DE NUMERO N--" <<endl <<endl;
    cout << "Ingresa tu numero: " <<endl;
    cin >> n;

    for(int i = 1; i <= n; i++){
       cout << i;
    if ( i < n){
        cout << " / " <<n <<endl;
        cout << endl;
    } 
   

        return 0;
    
    }
}
