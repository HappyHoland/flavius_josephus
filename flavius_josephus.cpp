#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {
 
    int entradas, npessoas, nsaltos;
    
    cin >> entradas;
    
    for (int i = 0; i < entradas; i++) {
        cin >> npessoas >> nsaltos;

        int res = 0;
        
        for (int j = 1; j <= npessoas; j++) {
            if (j == 1){
                continue;
            } else {
                res = ((nsaltos - 1)%j + 1 + res)%j;
            }
        }
        
        cout << "Case " << i + 1 << ": " << res + 1 << endl;
    }
 
    return 0;
}