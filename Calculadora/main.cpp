#include <iostream>
#include "Numero.hpp"
#include <limits>

using namespace std;

int main() {

    int comandos;
    cout << "Informe o numero de comandos: ";
    cin >> comandos;

    Numero calc;

    while(comandos-- > 0){
    int op;
    cout << "!!!CALCULADORA PARA NÚMEROS GIGANTES!!!" << endl;
    cout << "Escolha a opção desejada: " << endl;
    cout << "'+' -> (1) - Adição" << endl;
    cout << "'-' -> (2) - Subtração" << endl;
    cout << "'*' -> (3) - Multiplicação" << endl;
    cout << "'/' -> (4) - Divisão" << endl;
    cout << "'m?' -> (5) - Exibir Memória" << endl;
    cout << "'m#' -> (6) - limpar Memória" << endl;

    cin >> op;

    switch(op){
        case 1: 
            calc.operacaoMatematica(1);
        break;
        case 2: 
            calc.operacaoMatematica(2);
        break;
        case 3: 
            calc.operacaoMatematica(3);
        break;
        case 4: 
            calc.operacaoMatematica(4);
        break;
        case 5: 
            calc.Memoria();
        break;
        case 6: 
            
        break;
    }
    }


    return 0;
}