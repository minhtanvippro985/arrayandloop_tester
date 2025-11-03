#include<stdio.h>


int main(){
	int i;
	int arrayint[5];
	for(i = 0 ; i <sizeof(arrayint)/sizeof(int); i++ ){
	
	printf("\n array [%d] = ",i);
	scanf("%d",&arrayint[i]); 
	}//nhap
    for ( i= 0 ;i < sizeof(arrayint)/sizeof(int); i++ ){ //important 
    	printf("array[%d] = %d \n", i, arrayint[i]);
	}
	return 0;
}
