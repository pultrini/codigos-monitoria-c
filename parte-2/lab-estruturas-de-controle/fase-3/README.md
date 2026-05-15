**Exercicio 3.1: Menu Interativo com switch-case**

Crie um programa que simule um pequeno menu de serviços (como uma caixa eletrônica simplificada). O usuário deve digitar um código de serviço (exemplo: 1, 2 ou 3). Use a estrutura [switch-case] para processar o pedido.

**Requisitos:**
- Caso 1: Consultar Saldo. Peça um valor e imprima “Saldo consultado com sucesso.”
- Caso 2: Saque. Peça um valor e verifique se ele é positivo. Se for, imprima “Saque realizado.” Caso contrário, use o [default] para avisar que o valor é inválido.
- Caso 3: Ajuda. Imprimir uma mensagem de boas-vindas.
Qualquer outro número digitado deve cair no bloco [default].

> Quando você tem um único tipo de variável (como um inteiro) e precisa testá-lo contra vários valores discretos, o [switch] é mais legível e eficiente que longas cadeias de [if-else if].

**Exercício 3.2: Jogo Simples**
Crie um programa que simule a jogada de um dado virtual (número entre 1 e 6). Este programa deve combinar todas as estruturas aprendidas:

1. **Geração:** Use rand() para gerar o número aleatório (simulando o lançamento do dado). Lembre-se de _incluir_ `<stdlib.h>` e usar `srand(time(NULL))` no início.
2. **Decisão (if/else if):** Verifique se o número gerado é um número primo (números primos são 2, 3, 5). Se for, imprima “Excelente jogada! Número Primo detectado.” Caso contrário, continue.
3. **Repetição (while ou do-while):** Peça ao usuário para tentar adivinhar o número sorteado (o dado). Use um laço de repetição que só pare quando a tentativa for igual ao número do dado OU após 5 tentativas.