/* Laboratory Advance Programming */
/* Authors: Gabriel Badilla & Rodrigo Kobayashi */
/* Compiler: gcc */
#include "basicPolynomialArithmetics.h"
#include "doublyLinkedListPolynomial.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
  char input;
  int n;

  do {
    printf("\n#################### Menu ####################");
    printf("\n1. Add and Subtract");
    printf("\n2. Multiply");
    printf("\n0. Exit");
    printf("\nChoose an option: ");
    scanf("\n%c", &input);
    if (input == '0') {
      return 0; // Program will be terminated if 0 is pressed
    }
    switch (input) {
    case '1':
      if (input == '1') {
        printf("Enter the degree of the polynomial to generate: ");
        scanf("%d", &n);

        struct Polynomial *polynomial = generatePolynomial(n);
        printf("\n##############################################");
        printf("\nGenerated polynomial:\n");
        printPolynomial(polynomial);

        struct Polynomial *copyPoly = copyPolynomial(polynomial);
        printf("\nPolynomial copy:\n");
        printPolynomial(copyPoly);

        printf("\nSubstrahend:\n");
        struct Polynomial *subtrahend = copyPolynomial(polynomial);
        printPolynomial(subtrahend);

        printf("\nPolynomial subtraction:\n");
        struct Polynomial *difference =
            subtractPolynomials(subtrahend, polynomial);
        printPolynomial(difference);

        printf("\nPolynomial sum:\n");
        struct Polynomial *sum = addPolynomials(polynomial, copyPoly);
        printPolynomial(sum);

        freePolynomial(polynomial);
        freePolynomial(copyPoly);
        freePolynomial(subtrahend);
      }
      break;

    case '2':
      if (input == '2') {
        do {
          printf("\n##############################################");
          printf("\n1. Brute Force");
          printf("\n2. Decrease and Conquer");
          printf("\n3. Brute Force and Decrease-and-Conquer");
          printf("\n0. Back");
          printf("\nChoose an option: ");
          scanf("\n%c", &input);
          if (input == '0') {
            break;
          }
          switch (input) {  // Nested switch.
          case '1':
            if (input == '1') {
              printf("Enter the degree of the polynomial to generate: ");
              scanf("%d", &n);

              struct Polynomial *polynomial = generatePolynomial(n);
              printf("\n##############################################");
              printf("\nGenerated polynomial:\n");
              printPolynomial(polynomial);

              struct Polynomial *copyPoly = copyPolynomial(polynomial);
              printf("\nPolynomial copy:\n");
              printPolynomial(copyPoly);

              printf("\nPolynomial product Brute force:\n");
              struct Polynomial *product =
                  multiplyPolynomials(polynomial, copyPoly);
              printPolynomial(product);

              freePolynomial(product);
              freePolynomial(polynomial);
              freePolynomial(copyPoly);
            }
            break;
          case '2':
            if (input == '2') {
              printf("Enter the degree of the polynomial to generate: ");
              scanf("%d", &n);

              struct Polynomial *polynomial = generatePolynomial(n);
              printf("\n##############################################");
              printf("\nGenerated polynomial:\n");
              printPolynomial(polynomial);

              struct Polynomial *copyPoly = copyPolynomial(polynomial);
              printf("\nPolynomial copy:\n");
              printPolynomial(copyPoly);

              printf("\nPolynomial product Decrease and conquer:\n");
              struct Polynomial *productDecrease =
                  decreaseAndConquer(polynomial, copyPoly);
              printPolynomial(productDecrease);

              freePolynomial(productDecrease);
              freePolynomial(polynomial);
              freePolynomial(copyPoly);
            }
            break;
          case '3':
            if (input == '3') {
              printf("Enter the degree of the polynomial to generate: ");
              scanf("%d", &n);

              struct Polynomial *polynomial = generatePolynomial(n);
              printf("\n##############################################");
              printf("\nGenerated polynomial:\n");
              printPolynomial(polynomial);

              struct Polynomial *copyPoly = copyPolynomial(polynomial);
              printf("\nPolynomial copy:\n");
              printPolynomial(copyPoly);

              printf("\nPolynomial product Brute force:\n");
              struct Polynomial *product =
                  multiplyPolynomials(polynomial, copyPoly);
              printPolynomial(product);

              printf("\nPolynomial product Decrease and conquer:\n");
              struct Polynomial *productDecrease =
                  decreaseAndConquer(polynomial, copyPoly);
              printPolynomial(productDecrease);

              freePolynomial(product);
              freePolynomial(productDecrease);
              freePolynomial(polynomial);
              freePolynomial(copyPoly);
            }
            break;

          default:
            printf("Enter a valid number");
            break;
          }
        } while (true);
      }
      break;

    default:
      printf("Enter a valid number");
      break;
    }
  } while (true);

  return 0;
}
