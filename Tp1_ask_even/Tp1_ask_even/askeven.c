#include <stdio.h>
#include "askeven.h"

void askEven() {
	int nb, go = 0;
	do {
		printf("Entrez un nb svp(0 pour arreter): ");
		int r = scanf_s("%d", &nb);
		if (r != 1) {
			printf("Erreur de saisie\n");
			scanf_s("%*[^\n]");
			nb = -1;
		}
		if (0 == nb) {
			go = 0;
		}
		else {
			go = 1;
		}
		if (nb > 0) {
			if (isEven(nb)) {
				printf("Le nombre %d est pair\n", nb);
			}
			else {
				printf("Le nombre %d est impair\n", nb);
			}
		}
	} while (go);
}
