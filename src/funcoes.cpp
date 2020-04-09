#include"funcoes.hpp"
int* criarVetor(int n){
    int * vet = new int[n];
    for(int i = 0; i < n; i++){
        vet[i] = i + 1;
    }
    return vet;
}
void trocaVizinho(int *vet, int k)
{
    if(k == 0){
        
    }
    else{
        int aux = vet[0];
        vet[0] = vet[k];
        vet[k] = aux;
    }
	
}