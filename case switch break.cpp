#include <stdio.h>

int main() {
    char phuongAn, choiTiep;

    printf("Cau hoi dang hien ra tren man hinh?\n");
    printf("Phuong an a\n");
    printf("Phuong an b\n");
    printf("Phuong an c\n");
    printf("Phuong an d\n");

    do {
    	fflush(stdin);
        printf("Nhap vao cau tra loi: ");
        scanf(" %c", &phuongAn);
        fflush(stdin);

        switch (phuongAn) {
            case 'a':
           
                printf("Khong dung!\n");
                printf("Them luot nua? (Y/N): ");
                scanf(" %c", &choiTiep);
                break;
            case 'b':
   
                printf("Khong dung!\n");
                  printf("Them luot nua? (Y/N): ");
                 scanf(" %c", &choiTiep);
                break;
             case 'c':
                printf("BAN DA CHON DUNG!!! XIN CHUC MUNG!!!\n");
                choiTiep = 'n'; // kết thúc luôn
                break;
            case 'd':
           
                printf("Khong dung!\n");
                printf("Them luot nua? (Y/N): ");
                scanf(" %c", &choiTiep);
                break;
            default:
         
                printf("Lua chon khong hop le!\n");
                printf("Them luot nua? (Y/N): ");
                scanf(" %c", &choiTiep);
                break;
        }

     
        fflush(stdin);

    } while (choiTiep == 'y' || choiTiep == 'Y' );
      
    return 0;
}
