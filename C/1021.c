#include <stdio.h>

int main() {
  double n, moedas[6] = {1, .5, .25, .1, .05, .01};
  int notas, moeda, cedulas[6] = {100, 50, 20, 10, 5, 2};
  
  scanf("%lf", &n);
  
  printf("NOTAS:\n");

  int contador = 0;

  while (contador < 6) {

    notas = (int) n / cedulas[contador];
    n -= notas * cedulas[contador];

    printf("%i nota(s) de R$ %i.00\n", notas, cedulas[contador++]);

  }

  printf("MOEDAS:\n");

  contador = 0;
  
  while (contador < 5) {

    moeda = (int) (n / moedas[contador]);
    n -= (double) moeda * moedas[contador];

    printf("%i moeda(s) de R$ %.2lf\n", moeda, moedas[contador++]);

  }
  printf("%.lf moeda(s) de R$ 0.01\n", n * 100);

  return 0;
}
