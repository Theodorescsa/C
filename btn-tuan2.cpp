#include <stdio.h>

int main() {
// bt1
float gallons;
float km;
float total = 0;
printf("Moi nhap so kuong gallon xang: ");
scanf("%f",gallons);
printf("Moi nhap so dam ma o to co the di voi mot binh xang day");
scanf("%f",km);
for (float i = 0;i < gallons;i++) {
    printf("So km di dupc trong %f km la:",i);
    total = total + km;
    printf("%f",total);
}
}