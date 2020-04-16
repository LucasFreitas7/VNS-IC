#ifndef FUNCOES_HPP
#define FUNCOES_HPP
#include<iostream>
#include <stdlib.h>
#include <time.h> 
#include <math.h>
#include "BiskupFeldmann.hpp"
int* criarVetor(int n);
void vizinhoQualquer(int *vet, int n);
void buscaLocal(int *vet, int& solucao, int n);
#endif