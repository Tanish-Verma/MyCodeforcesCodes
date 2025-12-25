#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = tmp;
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char *a = malloc(n + 1);
        scanf("%s", a);

        int m;
        scanf("%d", &m);
        char *b = malloc(m + 1);
        scanf("%s", b);

        char *D = malloc(m + 1);
        char *V = malloc(m + 1);
        int j = 0, k = 0;
        getchar();
        for (int i = 0; i < m; i++) {
            char ch;
            scanf("%c", &ch); 
            if (ch == 'V') {
                V[k++] = b[i];
            } else if (ch == 'D') {
                D[j++] = b[i];
            }
        }
        V[k] = '\0';
        D[j] = '\0';
        reverseString(V);

        char *res = malloc(strlen(V) + strlen(a) + strlen(D) + 1);

        strcpy(res, V);
        strcat(res, a);
        strcat(res, D);

        printf("%s\n", res);
        free(a);
        free(b);
        free(D);
        free(V);
        free(res);
    }

    return 0;
}
