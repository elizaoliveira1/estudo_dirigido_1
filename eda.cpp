#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void options();
void mostrar_vetor();


int opcao=0, numbers;
vector <int> numeros = {};


int main(){
  //PREENCHER LISTA
      do{
        cout << "Insira números inteiros para adicionar ao seu vetor;\n";
        cout << "Caso deseje terminar sua lista aqui, digite '0'.\n";

        cin >> numbers;
        numeros.push_back(numbers);
        system ("clear");

      } while(numbers != 0);

      numeros.pop_back();
      system ("clear");
      mostrar_vetor();
      options();

      do {

        int soma=0, media=0;

        switch(opcao){

          case 1 :

            for(int n : numeros){
                soma += n;
            }

            cout << "SOMA: " << soma << endl;

          break;

          //------------------------------------------------

          case 2 :

          for(int n : numeros){
            soma += n;
          }

            media = soma / numeros.size();
            cout << "MEDIA: "<< media << endl;

          break;

          //------------------------------------------------

          case 3 :

            for(int n : numeros){
                soma += n;
            }

            media = soma / numeros.size();
            cout << "SOMA: " << soma << endl;
            cout << "MEDIA: "<< media << endl;

          break;

          //------------------------------------------------

          case 4 :

            for (int n = 0; n < numeros.size(); n++) {
                if (numeros[n] < 0){
                    numeros[n] = 0;
                }
            }

            for(int n : numeros){
                soma += n;
            }

            media = soma / numeros.size();
            cout << "MEDIA: "<< media << endl;

          break;

          //------------------------------------------------

          case 5 :

            for (int a = 0; a < numeros.size(); a++) {
               for (int b = 0; b < numeros.size(); b++) {
                    if (a != b && numeros[a] == numeros[b]){
                        numeros[b] = 0;
                    }
                }
            }

            for(int n : numeros){
                soma += n;
            }

            media = soma / numeros.size();
            cout << "SOMA: " << soma << endl;
            cout << "MEDIA: "<< media << endl;

          break;

          //------------------------------------------------

          case 6 :

            sort(numeros. begin(), numeros. end());

          break;

      }
        mostrar_vetor();
        options();
        system ("pause");
        system ("clear");
    } while(opcao != 0);


    return 0;
}

void options(){

  cout << "----------------------------------------------------OPTIONS----------------------------------------------------\n";
  cout << "INSIRA [0] PARA SAIR DA APLICACAO\n";
  cout << "INSIRA [1] PARA IMPRIMIR O SOMATORIO DOS ELEMENTOS DO VETOR\n";
  cout << "INSIRA [2] PARA IMPRIMIR A MEDIA DOS ELEMENTOS DO VETOR\n";
  cout << "INSIRA [3] PARA VER O SOMATORIO E A MEDIA DOS ELEMENTOS DO VETOR\n";
  cout << "INSIRA [4] PARA SUBSTITUIR POR 0 OS VALORES NEGATIVOS E IMPRIMIR A MEDIA DOS ELEMENTOS DO VETOR\n";
  cout << "INSIRA [5] PARA SUBSTITUIR POR 0 OS VALORES REPETIDOS E IMPRIMIR O SOMATORIO A MEDIA DOS ELEMENTOS DO VETOR\n";
  cout << "INSIRA [6] PARA IMPRIMIR O VETOR ORDENADO DE FORMA CRESCENTE\n";
  cout << "---------------------------------------------------------------------------------------------------------------\n";

  cin >> opcao;

}

void mostrar_vetor(){

    int z = numeros.size();

    cout << "OK, este eh o seu vetor:\n\n[ ";
    for(int mostrar : numeros){
      cout << mostrar;
        if(z > 1){
        cout << " , ";
        z--;
        }
    }
    cout << "]\n";

}
