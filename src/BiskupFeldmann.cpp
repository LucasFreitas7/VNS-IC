#include"BiskupFeldmann.hpp"
int objetive_function(int * vet){
    ifstream arquivo("../Instancias/sch50-1.txt");
    int n;
    arquivo >> n;
    int * p = new int[n];
    int * a = new int[n];
    int * b = new int[n];
    double h = 0.2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        arquivo >> p[i];
        arquivo >> a[i];
        arquivo >> b[i];
    }   
    for(int i = 0; i < n; i++){
        sum += p[i];
    }
    int d = h * sum;
    int c = 0;
    int * alpha = new int[n];
    int * beta = new int[n];
    int * E = new int[n];
    int * T = new int[n];
    int j;
    for(int i = 0; i < n; i++){
        j = vet[i];
        alpha[i] = a[j];
        beta[i] = b[j];
        c = c + p[j];
        E[i] = max(d - c, 0);
        T[i] = max(c -d, 0);
    }

    int y = 0; //variavel com o resultado do problema;
    int sum_aux1 = 0;
    int sum_aux2 = 0;
    for(int i =0; i<n; i++){
        sum_aux1 += E[i] + alpha[i];
        sum_aux2 += T[i] + beta[i];
    }
    y = sum_aux1 + sum_aux2;
    return y;  
}