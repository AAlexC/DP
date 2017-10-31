#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000100
int Cajas[MAXN];
int Suma=0, Aux, N, guarda = 0, final, i;
int main(){	 
	cin >> N;	
	for(int i = 1;i <= N; i++){ 
	 	if(Suma < 0) {
	       		Suma = 0;            
			guarda++;
		}
	cin >> Aux;
	if(Aux < 0) guarda++;
	 	Suma += Aux;	
		Cajas[guarda]=Suma;			  
	}
	final =- 10000;
	for(i = 0;i <= guarda; i++){  	
   		if(Cajas[i] > final) final = Cajas[i];   	 			
  	}	
	cout << final<<"\n";	
	return 0;
}
