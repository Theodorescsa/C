#include<stdio.h>
void bai_tap1() {
    int n;
    int total  = 0;
    printf("Moi nhap so nguyen duong n: ");
    scanf("%d",&n);
    for (int i = 1;i<=n;i++) {
        total += i;
    }
    printf("\nTong la:%d", total);
    
}
void bai_tap6() {
    int v;
    int t;
    printf("Moi nhap van toc cua tau:");
    scanf("%d",&v);
    printf("\nMoi nhap thoi gian cua tau:");

    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        printf("%d             :%d Km\n",i,v*i);
    }
    

}
void bai_tap20() {
    int n;
    printf("Moi nhap vao do dai canh hinh vuong:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
int main() {
    bai_tap20();
}