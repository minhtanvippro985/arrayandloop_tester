#include <stdio.h>

int main() {
    int choice;
    int temp;
    int arraytemplate[] = {55, 90, 75, 100};
    int n = sizeof(arraytemplate) / sizeof(int);

    // In m?ng ban d?u
    for (int i = 0; i < n; i++) {
        printf("array[%d] = %d\n", i, arraytemplate[i]);
    }

    printf("Please select: 1 = Bubble Sort, 2 = Quit terminal: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Selected Bubble Sort... Doing it now...\n");

        // Bubble Sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arraytemplate[j] > arraytemplate[j + 1]) {
                    temp = arraytemplate[j];
                    arraytemplate[j] = arraytemplate[j + 1];
                    arraytemplate[j + 1] = temp;
                }
            }
        }

        // In k?t qu?
        printf("\nArray after sorting: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arraytemplate[i]);
        }
        printf("\n");
    } else {
        printf("Program exited.\n");
    }

    return 0;
}
