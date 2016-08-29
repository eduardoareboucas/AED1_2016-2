#include <stdio.h>

void comb(int *arr, size_t n, size_t index) {
    size_t k;
    if (index == n) {
        /* array vazio, imprime o que est� "para tr�s" */
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
    int v[] = {1, 2, 3, 4};
    comb(v, sizeof v / sizeof *v, 0);
    return 0;
}