#include"funcoes.hpp"
using namespace std;
float VNS(int *vet,  int n, int kMAX){ 
    int solucao = 1000000;
    int solucaoAux = 0;
    int k = 0;
    int *vetFinal = new int[n];
    while((solucaoAux - solucao) < kMAX)
    {
        while(k < kMAX){
            vizinhoQualquer(vet, n);
            buscaLocal(vet, solucaoAux, n);//firstImprovement
            for(int i = 0; i < n; i++){
                   cout << vet[i] << "  ";
            }
            cout << endl;
            if(solucaoAux < solucao){
                for(int i = 0; i < n; i++){
                   vetFinal[i] = vet[i];
                }
                solucao = solucaoAux;
                k = 0;
            }
            else{
                k++;
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
        cout << "Posicao: " << i+ 1 << " =  "<< vetFinal[i] << endl;
    }
    return solucao;

}
int main(){
    int n = 50;
    int kmax  = 5000;
    int * vet = criarVetor(n);
    double s = VNS(vet, n, kmax);
    cout << s;
}