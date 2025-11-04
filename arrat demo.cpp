#include<stdio.h>


int main(){
	int choice;
	int size;
	int i;
	printf("nhap size mang cua ban");
	scanf("%d",&size);
	int array[size];
	for (i = 0 ; i < size ; i++){
		printf("phan tu thu %d = ", i);
		scanf("%d",&array[i]);
	} 
	for (int j = 0 ; j < size ; j++){
		printf("\n array %d =  %d", j , array[j]);
		
	} 
	 do {
        printf("\n------------- MENU ------------------\n");
        printf("1. Bubble Sort\n");
        printf("2. Linear Search\n");
        printf("3. Xoa 1 phan tu\n");
        printf("4. Thoat chuong trinh\n");
        printf("Chon mode cua ban: ");
        scanf("%d", &choice);

        if (choice == 1) {
            // ?? BUBBLE SORT
            for (int a = 0; a < size - 1; a++) {
                for (int b = 0; b < size - a - 1; b++) {
                    if (array[b] > array[b + 1]) {
                        int temp = array[b];
                        array[b] = array[b + 1];
                        array[b + 1] = temp;
                    }
                }
            }
            printf("Mang sau khi sap xep tang dan:\n");
            for (int j = 0; j < size; j++) {
                printf("%d ", array[j]);
            }
            printf("\n");
        }

        else if (choice == 2) {
            // ?? LINEAR SEARCH
            int x, found = 0;
            printf("Nhap gia tri can tim: ");
            scanf("%d", &x);
            for (int j = 0; j < size; j++) {
                if (array[j] == x) {
                    printf("Tim thay %d o vi tri %d\n", x, j);
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Khong tim thay gia tri %d trong mang.\n", x);
        }

        else if (choice == 3) {
            // ?? DELETE 1 ELEMENT
            int pos;
            printf("Nhap vi tri can xoa (0 -> %d): ", size - 1);
            scanf("%d", &pos);

            if (pos >= 0 && pos < size) {
                for (int j = pos; j < size - 1; j++) {
                    array[j] = array[j + 1];
                }
                size--;
                printf("Mang sau khi xoa:\n");
                for (int j = 0; j < size; j++) {
                    printf("%d ", array[j]);
                }
                printf("\n");
            } else {
                printf("Vi tri khong hop le!\n");
            }
        }

        else if (choice == 4) {
            printf("Thoat chuong trinh...\n");
        }

        else {
            printf("Lua chon khong hop le! Vui long nhap lai.\n");
        }

    } while (choice != 4);  // ?? L?p l?i cho d?n khi ch?n 4;
}