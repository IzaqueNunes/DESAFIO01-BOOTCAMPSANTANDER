#include<stdio.h>
#include<stdlib.h>

void imprimeVetor(int *v, int n){
	int i;
	printf("Ordenando o vetor:");
	for(i=0;i<n;i++){
	printf("%d", v[i]);
	}
	printf("\n");
}

void troca(int *x, int *y){
	int t = *x;
	*x=*y;
	*y=t;
}


void selecao(int *v, int n){
	int i, j;
	int menor;
	
	for (i=0;i<n-1;i++){
		menor=i;
		for (j=i+1;j<n;j++){
			if(v[j]<v[menor]){
				menor=j;
			}
		}
		troca(&v[i], &v[menor]);		
		imprimeVetor(v, n);
	}
}

int main(){
	int v [] = {9,8,7,6,5,4,3,2,1,0};
	imprimeVetor(v, 10);
	selecao(v, 10);
}
