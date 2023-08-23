#include <stdio.h>

// Lucas Cerqueira Galvão
// Lucas Carmona Neto
// Felipe Barbosa dos Santos
// Caio Vinicius Silva Queiroz
// Thiago Batista de Souza
// Pablo da Silva Minhão
// Felipe Monteiro


// b = divisor a = dividendo

void divisaoRecursiva(int a, int b, int *q, int *r);

int main() {
    int dividendo, divisor;
    printf("Digite o dividendo: \n");
    scanf("%d", &dividendo);
    printf("Digite o divisor: \n");
    scanf("%d", &divisor);

    int quociente = 0, resto = 0;

    divisaoRecursiva(dividendo, divisor, &quociente, &resto);

    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}

void divisaoRecursiva(int a, int b, int *q, int *r) {
    if (b > a) {
        *r = a;
    }
    else {
        (*q)++;
        divisaoRecursiva(a-b, b, q, r);
    }
}


