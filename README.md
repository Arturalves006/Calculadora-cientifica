🧮 Calculadora Científica em C
✅ O que o programa faz

Este programa é uma calculadora científica que roda no terminal e permite ao usuário realizar operações matemáticas básicas e avançadas, como:

Operações aritméticas (adição, subtração, multiplicação e divisão)

Funções trigonométricas (seno, cosseno e tangente)

Logaritmos (natural e decimal)

Potenciação, raiz quadrada, exponencial

Fatorial de números inteiros

Arredondamentos (ceil, floor, round)

Conversões entre graus e radianos

Cálculo da hipotenusa e área de círculo

Entre outros recursos

O usuário interage com o programa através de um menu numérico e insere os valores desejados conforme a operação escolhida.

🛠️ Tecnologias e recursos utilizados

Linguagem C

Biblioteca Padrão do C (stdio.h) — para entrada/saída de dados

Biblioteca Matemática (math.h) — para operações matemáticas como pow, sqrt, log, sin, cos, etc.

Estrutura de controle switch-case — para o menu de opções

Função personalizada para cálculo de fatorial

💻 Como instalar, compilar e executar
📦 Requisitos

Compilador C (ex: GCC
)

Terminal (Linux, Mac ou Windows com WSL/MinGW)

🔧 Compilação

No terminal, navegue até o diretório onde está o arquivo calculadora.c e execute:

gcc calculadora.c -o calculadora -lm


⚠️ O -lm é necessário para usar a biblioteca matemática math.h.

▶️ Execução

Depois de compilado, execute o programa com:

./calculadora

💡 Exemplos de uso

Exemplo 1: Soma de dois números

Digite a opcao: 1
Digite dois numeros: 10 25
Resultado: 35.0000


Exemplo 2: Cálculo do seno de 30 graus

Digite a opcao: 9
Digite o angulo em graus: 30
Resultado (sen): 0.5000


Exemplo 3: Fatorial de 5

Digite a opcao: 12
Digite um numero inteiro nao-negativo: 5
Resultado (5!): 120


Exemplo 4: Conversão de graus para radianos

Digite a opcao: 19
Digite o angulo em graus: 180
Resultado em radianos: 3.1416

ℹ️ Informações adicionais

As funções trigonométricas consideram que o ângulo de entrada está em graus.

A função fatorial implementada é manual e funciona para números inteiros não-negativos.

O programa trata alguns erros comuns, como:

Divisão por zero

Raiz quadrada de número negativo

Logaritmo de valores menores ou iguais a zero

Fatorial de número negativo

Todos os resultados são exibidos com quatro casas decimais de precisão.

