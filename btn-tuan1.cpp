#include<stdio.h>
int main() {
// // bai1
//     int a = 50;
//     int b = 100;
//     int total = a + b;
// // bai2
//     int percen = 0.58;
//     int total = 8600000;
//     int result = total * percen;
// // bai3
//     int price_each = 95;
//     int percen_bang = 0.04;
//     int percen_quan = 0.02;
//     int result = price_each * percen_bang + price_each * percen_quan;
// // bai4
// int price_meal = 88.67;
// int tax = 6.75/100;
// int tip = (price_meal * tax + price_meal) * 0.02;

// printf("%.2f", tip);
// printf("%.2f", price_meal);
// printf("%.2f", price_meal * tax);

// // bai5
// int a = 28;int b = 32;int c =37;int d =24;int e =33;
// int sum = a + b + c + d + e;

// printf("%d", sum/5);
// // bai6
// int celery = 2200;
// int timetopayayear = 26;
// int annualPay = celery * timetopayayear;
// printf("%d",annualPay);
// // bai7
// for (int i = 1;i <= 10;++i) {
//     float level_sea_now = 1.5;
//     if (i == 5 || i == 7 || i ==10) {
//         printf("%f\n",level_sea_now * i);
//     }
// }
// // bai8
// float product_1 = 15.95;
// float product_2 = 24.95;
// float product_3 =6.95;
// float product_4 =12.95;
// float product_5 =3.95;
// float tax = 0.07;
// printf("%f\n",product_1 + product_2 + product_3 + product_4 + product_5);
// printf("%f\n",(product_1 + product_2 + product_3 + product_4 + product_5)*tax);
// printf("%f\n",(product_1 + product_2 + product_3 + product_4 + product_5) + (product_1 + product_2 + product_3 + product_4 + product_5)*tax)
// }
// bai9
// //bai10;
// printf("%f\n",375/15);
// //bai11
// printf("%f\n",20 * 23.5);
// printf("%f\n",20 * 29.5);
// // bai12
//printf("%f\n",391.876/43.560);
// // bai13
// printf("%f\n",14.95*0.35);
// // bai14
// // printf("%s","Nguyen dinh thai\ncntt2");
// bai15,16
for(int i = 1;i <= 7;i +=2) {
    for (int j = 0;j < 7;j++) {
        if (j == (7-i)/2) {
            printf("%s","*");

        } else if (j >(7-i)/2 && j < ((7-i)/2 + i)) {
            printf("%s","*");

        } else {
        printf("%s"," ");
        }
}
    printf("\n");
}
int num = 0;
for(int i = 7;i >= 1;i-=2) {
    
    for(int j = 0;j < 7;j++) {
        int delta = 7-i;
        if (j >= num && j < 7-num) {
            printf("%s","*");
        } else {
            printf("%s"," ");
        }
}
    printf("\n");
    num++;

}
}