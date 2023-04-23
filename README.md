# Stacks-in-C
 
Nesta implementação, a pilha é representada por uma estrutura stack que contém um array de inteiros data e um inteiro top que aponta para o topo da pilha.

As funções implementadas são:

init_stack: inicializa a pilha;
is_empty: verifica se a pilha está vazia;
is_full: verifica se a pilha está cheia;
push: adiciona um elemento ao topo da pilha;
pop: remove o elemento do topo da pilha e retorna o seu valor;
top: retorna o valor do elemento do topo da pilha sem removê-lo.
No main(), a pilha é inicializada com init_stack(&s) e, em seguida, são adicionados três valores à pilha usando push(&s, valor). Em seguida, são removidos dois valores da pilha usando pop(&s) e é impresso o valor do elemento do topo da pilha usando top(&s).