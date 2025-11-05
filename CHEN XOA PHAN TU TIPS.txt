#include<stdio.h>



int main(){
	
	int choice = 0 ;
	int size;
	int tempor;
	int i;
	int j;
	int didit = 0;
	int position;
	int showmenu = 1;
	int value;
	printf (" your array size gooess here");
	scanf("%d",&size );
	int arraytemplate[size];
	
	for (i = 0 ; i < size ; i ++ ){
		printf("\n array %d =    ", i);
		scanf("%d",&arraytemplate[i]);
	} 
	for (i = 0 ; i < size ; i ++ ){
		printf("\n array %d =  %d ", i , arraytemplate[i]);
	} 
   while (showmenu == 1){
    printf("\nlua chon cua ban , \n 1. bubble sort \n 2 exit  \n 3 chen xoa phan tu ");
    scanf("%d",&choice);

    // bubble sort
   // ----------- Bubble Sort -----------
        if (choice == 1) {
            printf("\nDang thuc hien bubble sort...\n");
            for (i = 0; i < size - 1; i++) {
                for (j = 0; j < size - i - 1; j++) {
                    if (arraytemplate[j] > arraytemplate[j + 1]) {
                        tempor = arraytemplate[j];
                        arraytemplate[j] = arraytemplate[j + 1];
                        arraytemplate[j + 1] = tempor;
                        didit = 1;
                    }
                }
            }

            if (didit == 1) {
                printf("\nMang sau khi sap xep: ");
                for (i = 0; i < size; i++) {
                    printf("%d ", arraytemplate[i]);
                }
                printf("\n");
                didit = 0;
            }
        }

        // ----------- Exit -----------
        else if (choice == 2) {
            printf("\nThoat chuong trinh...\n");
            return 0;
        }

        // ----------- Chen phan tu -----------
        else if (choice == 3) {
            printf("\nNhap vi tri muon chen (0 -> %d): ", size);
            scanf("%d", &position);

            if (position < 0 || position > size) {
                printf("Vi tri khong hop le!\n");
                continue;
            }

            printf("Nhap gia tri can chen: ");
            scanf("%d", &value);  

            // Dịch các phần tử sang phải
            for (i = size; i > position; i--) {
                arraytemplate[i] = arraytemplate[i - 1];
            }

            arraytemplate[position] = value;
            size++; // tăng kích thước mảng

            printf("\nMang sau khi chen: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
            }
            printf("\n");
        }  // ----------- 3. XOÁ PHẦN TỬ -----------
        else if (choice == 4) {
            printf("\nNhap vi tri muon xoa (0 -> %d): ", size - 1);
            scanf("%d", &position);

            if (position < 0 || position >= size) {
                printf("Vi tri khong hop le!\n");
                continue;
            }

            // Dịch các phần tử bên phải sang trái để ghi đè phần tử bị xóa
            for (i = position; i < size - 1; i++) {
                arraytemplate[i] = arraytemplate[i + 1];
            }

            size--; // giảm kích thước mảng

            printf("\nMang sau khi xoa: ");
            for (i = 0; i < size; i++) {
                printf("%d ", arraytemplate[i]);
            }
            printf("\n");
        }

        else {
            printf("Lua chon khong hop le!\n");
        }
    }
}