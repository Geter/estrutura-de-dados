#include <iostream>

using namespace std;
/*
int Somatorio(int n, int soma) {

    if (n == 0) {
        return soma;
    }

    return Somatorio(n - 1, soma + n);
}

int main() {

    cout << Somatorio(5, 0);

}	

*/

/*
void contagemRegressiva(int n){
	// caso base
	if (n==0){
		return;
		}
	// imprime o valor atual
	
	cout << n << " ";
	   
	// chamada recursiva
	contagemRegressiva(n-1);   
	
	}
	
	int main(){
		contagemRegressiva(5);
		return 0;
	}
*/

/*
void contagemCrescente(int n){
	//caso base
	
	if(n==0){
		return;
		}
		
	//chamada recursiva
	contagemCrescente(n-1);
	
	// imprime depois da chamada
	cout << n << " ";
	
	int main (){
		contagemCrescente(5);
		cout << endl;
		
		return 0;
		}
	}
*/

/*
int somaAte(int n){
	//caso base 
	if (n==0){
		return 0;
		}
	//chamada recursiva
	return n + somaAte(n-1);
}
  int main (){
	  cout <<somaAte(5)<<endl;
	  return 0;
	 }
*/

/*
int fatorial(int n){
	//caso base 
	
	if(n==0){
		return 1;
		}
		
	// chamada recursiva
	return n* fatorial(n-1);
	}
  int main(){
	  cout << fatorial(5)<<endl;
	  return 0;
	  }*/ 

/*
int potencia(int base, expoente-1){
//casobase

    if(expoente == 0){
		return 1;
		}
		
	// chamada recursiva
	return base*potencia (base, expoente -1);
}
  int main(){
	  cout << potencia(2,8)<<endl;
	  return 0;
	  }
    	
*/

int somaVetor(int itens[], int quantidade){
	//casobaase
	if(quantidade == 0){
		return 0 ;
		}
		// so}
