#include<stdio.h>


//ARRAY


int main(){
	int student1[] = {10 ,8 ,9};
	int student2[] = {7,3,9};
	int student3[] = {6,9,5};
    int danhsach[3][3] = {{10,8,9},{7,3,9},{6,9,5}};
    
    
    printf("diem toan ly hoa sv 1 la %d %d %d \n",danhsach[0][0],danhsach[0][1],danhsach[0][2]  );
    printf("diem toan ly hoa sv 2 la %d %d %d \n",danhsach[1][0],danhsach[1][1],danhsach[1][2]  );
    return 0;
}