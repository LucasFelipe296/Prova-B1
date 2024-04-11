/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2, num3, maior;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    // Verifica qual é o maior número
    if (num1 > num2 && num1 > num3)
        maior = num1;
    else if (num2 > num1 && num2 > num3)
        maior = num2;
    else
        maior = num3;

    printf("O maior número digitado foi: %d\n", maior);

    return 0;
}
