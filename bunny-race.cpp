#include <iostream>
using namespace std;

void BubbleSort(float v[], int k){ //função para executar o bubblesort
        float aux;
        aux = v[k];
        v[k] = v[k+1];
        v[k+1] = aux;
}

int main() {
  int numero_coelhos;

  cout << "Quantos coelhos compõe a sua equipe: "; //define a quantidade de coelhos na equipe
  cin >> numero_coelhos;  //aloca a quantidade de coelhos na variavel
  float velocidade[numero_coelhos];
  
  for (int i = 0; i < numero_coelhos; i++){ //loop para alocar a velocidade dos coelhos no vetor
    cout << "Digite a velocidade do coelho " << i+1 << ": ";
    cin >> velocidade[i];
  }
  cout << "\n";
  for (int i = 0; i < numero_coelhos; i++){ 
    for (int k = 0; k < numero_coelhos-1; k++){
      if (velocidade[k] > velocidade[k+1]){ //verifica se a velocidade do primeiro coelho é maior que a do proximo
        BubbleSort(velocidade, k);
      }
    }
  }
  for (int i = 0; i < numero_coelhos; i++){ //loop para mostrar a velocidade dos coelhos
    cout << "\nO " << i+1 << "º coelho a competir possui a velocidade de: " << velocidade[i] << endl;
  }
}