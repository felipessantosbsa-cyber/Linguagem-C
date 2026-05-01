/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 01ex.cpp
* Data: 23/04/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler um número inteiro. Verificar e exibir se o número é primo.
*/

#include <iostream>
using namespace std;

int main()
{
    int num, cont = 0;

    cout << "escreva um numero: " << endl;
    cin >> num;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            cont++;
        }
        
    }
    if (cont == 1) {
        cout << "seu numero é primo";
    }
    else {
        cout << "seu numero não é primo";
    }

    return 0;
}
