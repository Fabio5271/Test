//Desenvolvido por: Fábio Melo Martins | Matrícula: 2122130014

// 1: O algiritmo iterativo roda um código em loop, enquanto o recursivo é uma função que executa a si mesma, podendo retornar diferentes resultados cada iteração.

#include <stdio.h>

// 2: a):
unsigned int fact(int n) {
	//Critério de parada
	if (n == 1) { return 1; }
	// Passo recursivo
	else { return n * fact(n - 1); }
}


// b):
unsigned int somaFt(int n) {
	//Critério de parada
	if (n == 1) { return 1; }
	// Passo recursivo
	else { return n + somaFt(n - 1); }
}


// c):
unsigned int soma3(int n) {
	//Critério de parada
	if (n == 1) { return 2; }
	// Passo recursivo
	else { return (3 + soma3(n - 1)); }
}


// d):
unsigned int dupl3(int n) {
	//Critério de parada
	if (n == 1) { return 3; }
	// Passo recursivo
	else { return 2 * dupl3(n - 1); }
}


// e):
unsigned int antSoma3(int n) {
	//Critério de parada
	if (n == 1) { return 0; }
	// Passo recursivo
	else { return n-1 + antSoma3(n - 1); }
}


int main() {
	int x;
	char c;
	printf("-------------------------------------------------------------------\n"); // Só uma divisória rs
	printf("Insira a letra da questão (ou 't' para testar todas de uma vez): ");
	scanf("%c",&c);
	printf("Insira a posição desejada na sequência: "); // Variável usada na função selecionada
	scanf("%d", &x);
	printf("-------------------------------------------------------------------\n"); // Mais uma divisória

	//Executa a função selecionada
	switch (c){
	case 'a':
 	printf("%d! = %d\n\n", x, fact(x));
	break;

	case 'b':
 	printf("b(%d) = %d\n\n", x, somaFt(x));
	break;
	
	case 'c':
 	printf("c(%d) = %d\n\n", x, soma3(x));
	break;
	
	case 'd':
 	printf("d(%d) = %d\n\n", x, dupl3(x));
	break;
	
	case 'e':
 	printf("e(%d) = %d\n\n", x, antSoma3(x));
	break;
	
	case 't':
 	printf("%d! = %d\n", x, fact(x));
 	printf("b(%d) = %d\n", x, somaFt(x));
 	printf("c(%d) = %d\n", x, soma3(x));
 	printf("d(%d) = %d\n", x, dupl3(x));
 	printf("e(%d) = %d\n\n", x, antSoma3(x));
	break;
	break;

	}
	
	return 0;
}

