#include <string>
#include <sstream>
class Numero {
 private:
  // Classe que representa os componentes da lista na memória
  class Digito {
   public:

    int valor;
    Digito* proximo;

    friend class Numero;

    // Construtor
    Digito(int valor, Digito* proximo = nullptr);
  };

  Digito* primeiro;
  unsigned int tamanho;

 public:
  // Construtores
  Numero();
  Numero(unsigned int tamanho, int inicial);

// Métodos da Auxiliares
    Numero* lerNumero(int num);
    void Exibir();
    void Limpar();

 // Método de operação matemática
    void operacaoMatematica(int operacao);

 // Métodos de memória
    void Memoria();
    void limparMemoria();

  // Métodos de apoio
  Numero* adicionaNumero(int num);
  int obterValorEm(int indice);
  unsigned int obterIndiceDe(int elemento);
  void addResultados(int elemento);
  int converteStringInt(std::string temp);

 protected:
  // Métodos de apoio
  Digito* obterDigitoEm(int indice);
  Digito* obterDigitoAnteriorA(int valor);
};