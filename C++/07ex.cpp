/*
* Instituição: EtecVAV - Vasco Antonio Vechiarutti
*
* Arquivo: 07ex.cpp
* Data: 01/05/2026
* Autor: Felipe Barbosa Santos
* Descrição: 
* Ler a quantidade de pessoas e ler a altura dessas pessoas. 
* Calcular e exibir a altura média de todas as pessoas.
*/

#include <iostream>
using namespace std;

int main() {
    int peo;
    float alt, soma;
    cout << "quantidade de pessoas: ";
    cin >> peo;
    for (int i = 0; i < peo; i++) {
        cout << "altura escreva: ";
        cin >> alt;
        soma += alt;
    }
    cout << "media da altura das pessoas: " << soma / peo;
    
    return 0;
}