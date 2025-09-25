#include<stdio.h>

int main() {
    int n, m;

    // Nhap so hang va so cot
    printf("Nhap vao so hang: ");
    scanf("%d", &n);
    printf("Nhap vao so cot: ");
    scanf("%d", &m);

    int mang[n][m];
    int i, j;

    // Nhap du lieu vao ma tran
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap mang[%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    // Xuat ma tran binh phuong cua cac phan tu
    printf("Ma tran binh phuong cua cac phan tu:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", mang[i][j] * mang[i][j]);
        }
        printf("\n");
    }

    return 0;
}

