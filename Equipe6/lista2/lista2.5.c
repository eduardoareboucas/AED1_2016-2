/*
 * =====================================================================================
 *
 *       Filename:  questão5.c
 *
 *    Description: questão5
 *
 *        Version:  1.0
 *        Created:  29-08-2016 15:38:12
 *       Revision:  none
  *       Compiler:  gcc
 *
 *         Author:  Hélio Paulo
 *         			Jailson Pereira
 *         			Tiago Cauassa
 *         			Rebeca Assunção
 *
 *   Organization:  AED1
 *
 * =====================================================================================
 */
 /* Quero gerar todas as combinações possiveís dado um array com os elementos, por exemplo:
v=(2,5,6);
O output seria:
2
5
6
25
52
256
526
562
652

*/
/*5) Gere todas as possíveis combinações para um jogo da MegaSena com 6 dezenas.*/

#include <stdio.h>

void comb(int *arr, size_t n, size_t index) {
    size_t k;
    if (index == n) {
        /* array vazio, imprime o que está "para trás" */
        printf("%d", arr[0]);
        for (k = 1; k < n; k++) printf(" %d", arr[k]);
        puts("");
        return;
    }
    for (k = index; k < n; k++) {
        int tmp;
        /* mete cada um dos elementos ao principio */
        tmp = arr[k];
        arr[k] = arr[index];
        arr[index] = tmp;

        /* recursividade! */
        comb(arr, n, index + 1);

        /* repoe posicao inicial */
        tmp = arr[k];
        arr[k] = arr[index];
        arr[index] = tmp;
    }
int main(void) {
    int v[] = {60};
    comb(v, sizeof v / sizeof *v, 0);
    return 0;
}
