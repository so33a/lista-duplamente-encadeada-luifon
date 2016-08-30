#include <stdio.h>
#include <stdlib.h>
#include "ListaDupla.h"
/* NAO FAZ SENTIDO DAR INCLUDE NO .c */
//#include "ListaDupla.c"


int main () { // professor, eu deletei algumas coisas que eram desnecessárias no código (como impressão inversa, retirada de elementos, etc
  ListaDupla l = inicializa();
  link aux, aux2;
  insereDepois(l, l->head, aux= novoNo(12, NULL, NULL));
  aux2 = novoNo(42, NULL, NULL);
  insereDepois(l,aux,aux2);
  aux = novoNo(21, NULL, NULL);
  insereDepois(l, aux2, aux);
  aux2 = novoNo(52, NULL, NULL);
  insereDepois(l,aux,aux2);
  aux = novoNo(40, NULL, NULL);
  insereDepois(l, aux2, aux);



  printf (" imprime(l): \n");
  imprime(l);

  printf (" imprimeReverso(l): \n");
  imprimeReverso(l);

  link menor = buscaMenor(l);

  printf("\nmenor elemento = %d\n\n", menor->item);

  ordenar(l); // professor, o ordenar não vai funcionar com o valor 0 dentro de um nó da lista, por conta da inserção que utiliza o 0 como

  printf ("ORDENADO \n");
  imprime(l);

  return 0;
}
