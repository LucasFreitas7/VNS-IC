#include"funcoes.hpp"
#include"BiskupFeldmann.hpp"
using namespace std;
float VNS(int *vet,  int n, int kMAX){ 
    double solucao = 999999999999;
    double solucaoAux;
    int contador = 0;
    int k = 0;
    int *vetFinal = new int[n];
    while((solucaoAux - solucao) < kMAX)
    {
        while(k < kMAX){
            trocaVizinho(vet, contador);
            for(int i = 0; i < n; i++){
                   cout << vet[i] << "  ";
            }
            cout << endl;
            solucaoAux = objetive_function(vet);
            if(solucaoAux < solucao){
                for(int i = 0; i < n; i++){
                   vetFinal[i] = vet[i];
                }
                solucao = solucaoAux;
                k = 0;
                contador = 0;
            }
            else{
                k++;
                contador++;
                if(contador >= 9){
                    contador = 0;
                }
            }
            cout << "Solucao na " << k << " Iteracao = " << solucao << endl;
        }
        if(k == kMAX)
        {
            break;
        }
    }
    cout << "----------------------------Vetor Da Solucao-------------------------------" << endl;
    for(int i = 0; i < n; i++){
        cout << vetFinal[i] << "   ";
    }
    return solucao;

}
int main(){
    int n = 10;
    int kmax  = 100000;
    int * vet = criarVetor(n);
    double s = VNS(vet, n, kmax);
    cout << s;
}