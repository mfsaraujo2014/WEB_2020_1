#include "Numero.hpp"
#include <iostream>
#include <sstream>
#include <limits>

using namespace std;

Numero::Numero() {
  this->primeiro = nullptr;
  this->tamanho = 0;
}

Numero::Digito::Digito(int valor, Digito* prox) {
  this->valor = valor;
  this->proximo = proximo;
}

void Numero::addResultados(int elemento) {
  if (this->tamanho == 0) {
    Digito* new_no = new Digito(elemento);
    this->primeiro = new_no;
    this->tamanho++;
  } else {
    Digito* ant = obterDigitoEm(tamanho - 1);
    Digito* new_no = new Digito(elemento);
    ant->proximo = new_no;
    this->tamanho++;
  }
}

Numero* Numero::adicionaNumero(int num){
    int unidade = 0;
    Numero* temp = new Numero();
    for(int i = 0; i < num; i++){
        cout <<"Informe a unidade: " << endl;
        cin >> unidade;
        Digito* newDig = new Digito(unidade);
        newDig->proximo = nullptr;
        if(temp->tamanho == 0){
            temp->primeiro = newDig;
        } else {
          Digito* aux = temp->primeiro;
          while(aux->proximo != nullptr){
              aux = aux->proximo;
          }
          aux->proximo = newDig;
        }
        temp->tamanho++;
    }
    return temp;
}
int Numero::converteStringInt(std::string temp){
    int aux = std::stoi(temp);
    return aux;
}

// Operações Matemáticas
void Numero::operacaoMatematica(int operacao){
    int qtd1, qtd2;
    cout << "Quantos numeros tem? ";
    cin >> qtd1;
    cout << "Quantos numeros tem? ";
    cin >> qtd2;
    cout << "Número 1: " << endl;
    Numero* aux1 = adicionaNumero(qtd1);
    cout << "Número 2: " << endl;
    Numero* aux2 = adicionaNumero(qtd2);
    // Trabalho a list1
    string numero1 = "";
        for(int i = 0; i < qtd1; i++){
            int dig1 = aux1->obterValorEm(i);
            std::stringstream Resultado;
              Resultado << dig1;
            numero1 = numero1 + "" + Resultado.str();
        }
      int val1 = converteStringInt(numero1);

      // Trabalho a list2
      string numero2 = "";
        for(int i = 0; i < qtd2; i++){
            int dig2 = aux2->obterValorEm(i);
            std::stringstream Resultado;
              Resultado << dig2;
            numero2 = numero2 + "" + Resultado.str();
        }
      int val2 = converteStringInt(numero2);

      int Result;
      if(operacao == 1) Result = val1 + val2;
      if(operacao == 2) Result = val1 - val2;
      if(operacao == 3) Result = val1 * val2;
      if(operacao == 4) Result = val1 / val2;

      cout << "Resultado: " << Result << endl;
      addResultados(Result);
      cout << "Guardado em memória " << endl;
      cout << "Tamanho da lista: " << tamanho << endl;
      cout << "\n" << endl;

}
void Numero::Memoria(){
    if(this->tamanho == 0) {
      cout << "-> Memória vazia\n" << endl;
    } else {
      for(int i = 0; i < this->tamanho; i++){
          cout << "Posição " << i << " -> " << obterValorEm(i) << endl;
      }
    }
}

//  MÉTODOS DE APOIO
int Numero::obterValorEm(int indice) {
  if (!(this->tamanho > 0)) {
    return std::numeric_limits<int>::max();
  } else {
    if (indice >= this->tamanho) {
      return std::numeric_limits<int>::max();
    } else {
      Digito* temp = obterDigitoEm(indice);
      if (temp == nullptr) {
        return std::numeric_limits<int>::max();
      }
      return temp->valor;
    }
  }
  return std::numeric_limits<int>::max();
}

Numero::Digito* Numero::obterDigitoEm(int indice) {
  if (!(this->tamanho > 0)) {
    return nullptr;
  } else {
        Digito* temp = this->primeiro;
    for (unsigned int i = 0; i < indice; i++) {
      temp = temp->proximo;
    }
    return temp;
  }
  return nullptr;
}
