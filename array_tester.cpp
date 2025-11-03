#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n = 0; // số phần tử hiện có
    int chon;

    do {
        printf("\n——————————————— Quản lý danh sách số nguyên ———————————————\n");
        printf("1. Thêm phần tử vào vị trí bất kỳ\n");
        printf("2. Xóa phần tử ở vị trí bất kỳ\n");
        printf("3. Cập nhật giá trị tại vị trí bất kỳ\n");
        printf("4. Tìm kiếm phần tử trong mảng\n");
        printf("5. Hiển thị mảng\n");
        printf("6. Thoát chương trình\n");
        printf("Chọn chức năng: ");
        scanf("%d", &chon);

        if (chon == 1) {
            if (n >= MAX) {
                printf("Mảng đã đầy!\n");
                continue;
            }

            int x, pos;
            printf("Nhập giá trị cần thêm: ");
            scanf("%d", &x);
            printf("Nhập vị trí cần thêm (0 -> %d): ", n);
            scanf("%d", &pos);

            if (pos < 0 || pos > n) {
                printf("Vị trí không hợp lệ!\n");
            } else {
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = x;
                n++;
                printf("Đã thêm thành công!\n");
            }
        } 
        else if (chon == 2) {
            if (n == 0) {
                printf("Mảng rỗng, không thể xóa!\n");
                continue;
            }
            int pos;
            printf("Nhập vị trí cần xóa (0 -> %d): ", n - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= n) {
                printf("Vị trí không hợp lệ!\n");
            } else {
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Đã xóa thành công!\n");
            }
        } 
        else if (chon == 3) {
            if (n == 0) {
                printf("Mảng rỗng!\n");
                continue;
            }
            int pos, x;
            printf("Nhập vị trí cần cập nhật (0 -> %d): ", n - 1);
            scanf("%d", &pos);

            if (pos < 0 || pos >= n) {
                printf("Vị trí không hợp lệ!\n");
            } else {
                printf("Nhập giá trị mới: ");
                scanf("%d", &x);
                arr[pos] = x;
                printf("Đã cập nhật thành công!\n");
            }
        } 
        else if (chon == 4) {
            if (n == 0) {
                printf("Mảng rỗng!\n");
                continue;
            }
            int x, found = 0;
            printf("Nhập giá trị cần tìm: ");
            scanf("%d", &x);

            for (int i = 0; i < n; i++) {
                if (arr[i] == x) {
                    printf("Tìm thấy %d tại vị trí %d\n", x, i);
                    found = 1;
                }
            }
            if (!found) {
                printf("Không tìm thấy giá trị %d trong mảng.\n", x);
            }
        } 
        else if (chon == 5) {
            if (n == 0) {
                printf("Mảng rỗng!\n");
            } else {
                printf("Mảng hiện tại: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        } 
        else if (chon == 6) {
            printf("Thoát chương trình.\n");
        } 
        else {
            printf("Lựa chọn không hợp lệ!\n");
        }

    } while (chon != 6);

    return 0;
}
