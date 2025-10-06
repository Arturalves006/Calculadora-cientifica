#include <stdio.h>
#include <math.h>

long long fatorial(int n) {
    long long fat = 1;
    for (int i = 1; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

int main() {
    int opcao;
    double num1, num2, resultado;

    do {
        printf("\n===== CALCULADORA CIENTÍFICA =====\n");
        printf("0  - Sair\n");
        printf("1  - Adicao\n");
        printf("2  - Subtracao\n");
        printf("3  - Multiplicacao\n");
        printf("4  - Divisao\n");
        printf("5  - Raiz Quadrada\n");
        printf("6  - Potenciacao (x^y)\n");
        printf("7  - Logaritmo natural (ln x)\n");
        printf("8  - Logaritmo base 10 (log10 x)\n");
        printf("9  - Seno (graus)\n");
        printf("10 - Cosseno (graus)\n");
        printf("11 - Tangente (graus)\n");
        printf("12 - Fatorial (n!)\n");
        printf("13 - Exponencial (e^x)\n");
        printf("14 - Valor absoluto (|x|)\n");
        printf("15 - Arredondar para cima (ceil)\n");
        printf("16 - Arredondar para baixo (floor)\n");
        printf("17 - Arredondar (round)\n");
        printf("18 - Hipotenusa (catetos a,b)\n");
        printf("19 - Graus -> Radianos\n");
        printf("20 - Radianos -> Graus\n");
        printf("21 - Area de um circulo\n");
        printf("Digite a opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("Encerrando a calculadora...\n");
                break;

            case 1:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 + num2;
                printf("Resultado: %.4lf\n", resultado);
                break;

            case 2:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 - num2;
                printf("Resultado: %.4lf\n", resultado);
                break;

            case 3:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = num1 * num2;
                printf("Resultado: %.4lf\n", resultado);
                break;

            case 4:
                printf("Digite dois numeros: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.4lf\n", resultado);
                } else {
                    printf("Erro: Divisao por zero!\n");
                }
                break;

            case 5:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    printf("Resultado: %.4lf\n", resultado);
                } else {
                    printf("Erro: Raiz de numero negativo!\n");
                }
                break;

            case 6:
                printf("Digite a base e o expoente: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %.4lf\n", resultado);
                break;

            case 7:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    resultado = log(num1);
                    printf("Resultado (ln): %.4lf\n", resultado);
                } else {
                    printf("Erro: log definido apenas para numeros > 0!\n");
                }
                break;

            case 8:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    resultado = log10(num1);
                    printf("Resultado (log10): %.4lf\n", resultado);
                } else {
                    printf("Erro: log10 definido apenas para numeros > 0!\n");
                }
                break;

            case 9:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = sin(num1 * M_PI / 180.0);
                printf("Resultado (sen): %.4lf\n", resultado);
                break;

            case 10:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = cos(num1 * M_PI / 180.0);
                printf("Resultado (cos): %.4lf\n", resultado);
                break;

            case 11:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = tan(num1 * M_PI / 180.0);
                printf("Resultado (tan): %.4lf\n", resultado);
                break;

            case 12:
            {
                int n;
                printf("Digite um numero inteiro nao-negativo: ");
                scanf("%d", &n);
                if (n >= 0) {
                    long long fat = fatorial(n);
                    printf("Resultado (%d!): %lld\n", n, fat);
                } else {
                    printf("Erro: fatorial de numero negativo nao existe!\n");
                }
                break;
            }

            case 13:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                resultado = exp(num1);
                printf("Resultado (e^x): %.4lf\n", resultado);
                break;

            case 14:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                resultado = fabs(num1);
                printf("Resultado (|x|): %.4lf\n", resultado);
                break;

            case 15:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                resultado = ceil(num1);
                printf("Resultado (ceil): %.4lf\n", resultado);
                break;

            case 16:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                resultado = floor(num1);
                printf("Resultado (floor): %.4lf\n", resultado);
                break;

            case 17:
                printf("Digite o numero: ");
                scanf("%lf", &num1);
                resultado = round(num1);
                printf("Resultado (round): %.4lf\n", resultado);
                break;

            case 18:
                printf("Digite os dois catetos: ");
                scanf("%lf %lf", &num1, &num2);
                resultado = hypot(num1, num2);
                printf("Resultado (hipotenusa): %.4lf\n", resultado);
                break;

            case 19:
                printf("Digite o angulo em graus: ");
                scanf("%lf", &num1);
                resultado = num1 * M_PI / 180.0;
                printf("Resultado em radianos: %.4lf\n", resultado);
                break;

            case 20:
                printf("Digite o angulo em radianos: ");
                scanf("%lf", &num1);
                resultado = num1 * 180.0 / M_PI;
                printf("Resultado em graus: %.4lf\n", resultado);
                break;

            case 21:
                printf("Digite o raio do circulo: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    resultado = M_PI * pow(num1, 2);
                    printf("Area do circulo: %.4lf\n", resultado);
                } else {
                    printf("Erro: raio negativo!\n");
                }
                break;

            default:
                printf("Opcao invalida!\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
