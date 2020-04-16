#include"funcoes.hpp"
int* criarVetor(int n){
    int * vet = new int[n];
    for(int i = 0; i < n; i++){
        vet[i] = i + 1;
    }
    return vet;
}
void vizinhoQualquer(int *vet, int n){
    srand (time(NULL));
    for (int i = 0; i < n; i++)
	{
		int r = rand() % n;

		int temp = vet[i];
		vet[i] = vet[r];
		vet[r] = temp;
	}
}
void buscaLocal(int *vet, int& solucao, int n) //first improvement
{
    solucao = objetive_function(vet);
    int aux = 0;
    int aux1 = 0;
    for(int i = 1; i < n; i++){//talvez tenha q melhorar aq
        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        aux1 = objetive_function(vet);
        if(aux1 < solucao){
            solucao = aux1;
            break;
        }
        
    }
	
}