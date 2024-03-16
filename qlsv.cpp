#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
#include <string.h>
#include <stdlib.h>

struct sinhvien {
    char ho_ten[50];
    char masosv[6];
    float diemtoan;
    float diemvan;
    float diemanhvan;
};

int quantity_sinhvien() {
    int n;
    printf("Moi nhap so luong sinh vien cua ban: ");
    scanf("%d", &n);
    return n;
}
struct sinhvien* scanf_sinhvien(int n) {
    struct sinhvien* list_sv = (struct sinhvien*)malloc(n * sizeof(struct sinhvien));
    if (list_sv == NULL) {
        printf("Khong du bo nho!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++) {
        printf("Moi nhap ho va ten cua sinh vien thu %d: ", i + 1);
        scanf("%s", list_sv[i].ho_ten);

        printf("Moi nhap ma so sinh vien cua sinh vien: ");
        scanf("%s", list_sv[i].masosv);

        printf("Moi nhap diem toan cua sinh vien: ");
        scanf("%f", &list_sv[i].diemtoan);

        printf("Moi nhap diem van cua sinh vien: ");
        scanf("%f", &list_sv[i].diemvan);

        printf("Moi nhap diem anhvan cua sinh vien: ");
        scanf("%f", &list_sv[i].diemanhvan);
    }

    return list_sv;
}

void add_sinhvien(struct sinhvien arr[], int n) {
    printf("Moi nhap ho va ten cua sinh vien thu %d: ", (n + 1));
    scanf("%s", arr[n].ho_ten);

    printf("Moi nhap ma so sinh vien cua sinh vien: ");
    scanf("%s", arr[n].masosv);

    for(int i = 0; i < n; i++) {
        if (strcmp(arr[i].masosv, arr[n].masosv) == 0) {
            printf("Ma so sinh vien da ton tai\n");
            printf("Moi nhap lai ma so sinh vien cua sinh vien: ");
            scanf("%s", arr[n].masosv);
            i = -1; // Reset lại vòng lặp để kiểm tra lại từ đầu
        }
    }

    printf("Moi nhap diem toan cua sinh vien: ");
    scanf("%f", &arr[n].diemtoan);

    printf("Moi nhap diem van cua sinh vien: ");
    scanf("%f", &arr[n].diemvan);

    printf("Moi nhap diem anhvan cua sinh vien: ");
    scanf("%f", &arr[n].diemanhvan);
}

void filter_sinhvien(struct sinhvien arr[], int n) {
    char mssv[6];
    printf("Moi nhap ma so sinh vien cua sinh vien muon tim: ");
    scanf("%s", mssv);
    
    int found = 0; 
    
    for(int i = 0; i < n; i++) {
        if (strcmp(arr[i].masosv, mssv) == 0) {
            printf("Ho va ten: %s\n", arr[i].ho_ten);
            printf("Ma so sinh vien: %s\n", arr[i].masosv);
            printf("Diem toan: %.2f\n", arr[i].diemtoan);
            printf("Diem van: %.2f\n", arr[i].diemvan);
            printf("Diem anh van: %.2f\n\n", arr[i].diemanhvan);
            found = 1; 
            break; 
        }
    }
    
    if (!found) {
        printf("Khong tim thay sinh vien co ma so %s\n", mssv);
    }
}

void print_info_sinhvien(struct sinhvien arr[], int n) {
 char mssv[6];
    printf("Moi nhap ma so sinh vien cua sinh vien muon tim: ");
    scanf("%s", mssv);
    
    int found = 0; 
    
    for(int i = 0; i < n; i++) {
        if (strcmp(arr[i].masosv, mssv) == 0) {
            printf("Ho va ten: %s\n", arr[i].ho_ten);
            printf("Ma so sinh vien: %s\n", arr[i].masosv);
            printf("Diem toan: %.2f\n", arr[i].diemtoan);
            printf("Diem van: %.2f\n", arr[i].diemvan);
            printf("Diem anh van: %.2f\n\n", arr[i].diemanhvan);
            found = 1; 
            break; 
        }
    }
    
    if (!found) {
        printf("Khong tim thay sinh vien co ma so %s\n", mssv);
    }
}
void print_sinhvien(struct sinhvien arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ho va ten: %s\n", arr[i].ho_ten);
        printf("Ma so sinh vien: %s\n", arr[i].masosv);
        printf("Diem toan: %.2f\n", arr[i].diemtoan);
        printf("Diem van: %.2f\n", arr[i].diemvan);
        printf("Diem anh van: %.2f\n\n", arr[i].diemanhvan);
    }
}
void edit_sinhvien(struct sinhvien arr[],int n) {
    char mssv[6];
    int found = 0;
    printf("Moi nhap ma so sinh vien cua sinh vien muon chinh sua: ");
    scanf("%s", mssv);
    for (int i = 0;i < n;i++) {
        if (strcmp(arr[i].masosv, mssv) == 0) {
        printf("Moi nhap ho va ten cua sinh vien thu %d: ", i + 1);
        scanf("%s", &arr[i].ho_ten);

        printf("Moi nhap ma so sinh vien cua sinh vien: ");
        scanf("%s", &arr[i].masosv);

        printf("Moi nhap diem toan cua sinh vien: ");
        scanf("%f", &arr[i].diemtoan);

        printf("Moi nhap diem van cua sinh vien: ");
        scanf("%f", &arr[i].diemvan);

        printf("Moi nhap diem anhvan cua sinh vien: ");
        scanf("%f", &arr[i].diemanhvan);
        found = 1;
        }
    }
        if (!found) {
        printf("Khong tim thay sinh vien co ma so %s\n", mssv);
    }
}
void delete_sinhvien(struct sinhvien arr[], int n) {
    char mssv[6];
    int found = 0;
    printf("Moi nhap ma so sinh vien cua sinh vien muon xoa: ");
    scanf("%s", mssv);
    for (int i;i < n;i++) {
        if (strcmp(arr[i].masosv, mssv) == 0) {
            arr[i].ho_ten[0] = '\0';

            arr[i].masosv[0] = '\0';

            arr[i].diemtoan = -1;

            arr[i].diemvan = -1;

            arr[i].diemanhvan = -1;
            found = 1;
        }
    }
          if (!found) {
        printf("Khong tim thay sinh vien co ma so %s\n", mssv);
    }
}
void average_sinhvien(struct sinhvien arr[], int n) {
    char mssv[6];
    double diemtrungbinh = 0;
    int found = 0;
    printf("Moi nhap ma so sinh vien cua sinh vien muon tinh diem trung binh: ");
    scanf("%s", mssv);
    for (int i= 0;i < n;i++) {
        if (strcmp(arr[i].masosv, mssv) == 0) {
            diemtrungbinh = (arr[i].diemtoan + arr[i].diemvan + arr[i].diemanhvan) / 3;
        }
        found =1;
    }
    if (!found) {
        printf("Khong tim thay sinh vien co ma so %s\n", mssv);
    } else {
    printf("\nDiem trung binh cua sinh vien nay la: %f",diemtrungbinh);
    }

}
void average_all(struct sinhvien arr[], int n) {
    double diemtrungbinh_sinhvien = 0;
    double result = 0;
    for (int i= 0;i < n;i++) {
        diemtrungbinh_sinhvien= (arr[i].diemtoan + arr[i].diemvan + arr[i].diemanhvan) / 3;
        result += diemtrungbinh_sinhvien; 
    }

    printf("\nDiem trung binh cua toan bo sinh vien la: %f",(result/n));


}
void save_file(struct sinhvien *list, int quantity) {
    FILE *fptr;
    fptr = fopen("D:\\C\\danhsachsinhvien.txt", "a");
    if (fptr == NULL) {
        printf("Khong the mo file!\n");
        exit(1);
    }

    for (int i = 0; i < quantity; i++) {
        fprintf(fptr, "Ho va ten: %s\n", list[i].ho_ten);
        fprintf(fptr, "Ma so sinh vien: %s\n", list[i].masosv);
        fprintf(fptr, "Diem toan: %.2f\n", list[i].diemtoan);
        fprintf(fptr, "Diem van: %.2f\n", list[i].diemvan);
        fprintf(fptr, "Diem anh van: %.2f\n", list[i].diemanhvan);
        fprintf(fptr, "\n");
    }

    fclose(fptr);
}
void read_file_sinhvien() {
    FILE *fptr;

    fptr = fopen("danhsachsinhvien.txt", "r");

    char myString[1000];

    while(fgets(myString, 100, fptr)) {
    printf("%s", myString);
    }

    fclose(fptr);
}
void menu(struct sinhvien *list, int quantity) {
    int number;
    while (1)
    {
    printf("Moi nhap chuc nang can thuc hien\n");
    printf("1:Them sinh vien:\n");
    printf("2:Xem thong tin mot sinh vien\n");
    printf("3:Xem thong tin tat ca sinh vien\n");
    printf("4:Tim kiem thong tin sinh vien\n");
    printf("5:Chinh sua thong tin sinh vien\n");
    printf("6:Xoa thong tin sinh vien\n");
    printf("7:Tinh diem trung binh cua mot sinh vien\n");
    printf("8:Tinh diem trung binh cua tat ca sinh vien\n");
    printf("9:Luu thong tin sinh vien vao file\n");
    printf("10:Doc thong tin sinh vien tu file\n");    
    printf("Moi nhap chuc nang can thuc hien: ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("Them sinh vien:\n");
        add_sinhvien(list, quantity);
        (quantity)++;
        break;
    case 2:
        printf("Xem thong tin mot sinh vien:\n");
        print_info_sinhvien(list, quantity);
        break;
    case 3:
        printf("Xem thong tin tat ca sinh vien:\n");
        print_sinhvien(list, quantity);
        break;
    case 4:
        printf("Tim kiem thong tin sinh vien:\n");
        filter_sinhvien(list, quantity);
        break;
    case 5:
        printf("Chinh sua thong tin sinh vien:\n");
        edit_sinhvien(list, quantity);
        break;
    case 6:
        printf("Xoa thong tin sinh vien:\n");
        delete_sinhvien(list, quantity);
        break;
    case 7:
        printf("Tinh diem trung binh cua mot sinh vien:\n");
        average_sinhvien(list, quantity);
        break;
    case 8:
        printf("Tinh diem trung binh cua tat ca sinh vien:\n");
        average_all(list, quantity);
        break;
    case 9:
        printf("Luu thong tin sinh vien vao file:\n");
        save_file(list, quantity);
        break;
    case 10:
        printf("Doc thong tin sinh vien tu file:\n");
        read_file_sinhvien();
        break;
    default:
        printf("Khong co chuc nang do vui long chon cac chuc nang tu 1 den 10\n");
        break;
    }

    }
    
    
}

int main() {
    int quantity = quantity_sinhvien();
    struct sinhvien* list = scanf_sinhvien(quantity);
    menu(list, quantity);
    free(list);
    return 0;
}
