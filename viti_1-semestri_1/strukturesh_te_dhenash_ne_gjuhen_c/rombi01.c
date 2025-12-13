
#include <stdio.h>

int main() {
    int nr, i, j, hap, hap2, j2;
    printf("Jep gjatesine e piramides: ");
    scanf("%d", &nr);
    for (i = 1;i <= nr; i++){
        for (hap = 1; hap <= nr - i; hap++){
            printf(" ");
        }
        for(j = 1;j <= 2 * i - 1;j++){
            printf("*");
        }
        for (hap2 = 1;hap2 <= (hap * 2) - 2; hap2++){
            printf(" ");
        }
        for (j2 = 1; j2 <= (2 * i) - 1; j2++){
            printf("*");
        }
        printf("\n");
    }
    for (i = nr - 1; i >= 1; i--){
        for (hap = 1; hap <= nr - i; hap++){
            printf(" ");
        }
        for(j = 1; j <= 2 * i - 1; j++){
            printf("*");
        }
        for (hap2 = 1; hap2 <= hap * 2 -2; hap2++){
            printf(" ");
        }
        for (j2 = 1; j2 <= 2 * i - 1; j2++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}