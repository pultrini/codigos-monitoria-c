**Objetivo:** Simular sistemas de validação que dependem de regras e condições específicas.

---

**Exercício 1.1: Verificador de Idade Legal**

Crie um programa que receba a idade do usuário (um inteiro). O programa deve imprimir mensagens diferentes baseadas na idade, seguindo estas regras:

1. Se a idade for menor que 0: Imprimir "Erro! Idade inválida."
2. Se a idade estiver entre 0 e 17 anos: Imprimir "Menor de idade. Acesso restrito."
3. Se a idade estiver entre 18 e 64 anos: Imprimir "Idade adulta. Acesso liberado."
4. Se a idade for maior que 64 anos: Imprimir "Aposentado(a). Descontos especiais aplicáveis."

> _**Ponto de Atenção:** Lembre-se da ordem das suas condições. O uso correto do `else if` garante que apenas um bloco de código seja executado._

---

**Exercício 1.2: Classificador de Paridade e Sinal**

Crie um programa que receba um número inteiro `N`. O programa deve determinar duas coisas e imprimir as mensagens correspondentes:

1. Se o número é par ou ímpar (Use o operador `%`).
2. Se o número é positivo, negativo ou zero.

> _**Dica:** Você precisará aninhar (ou encadear) suas condições para cobrir todos os cenários possíveis de um único número._