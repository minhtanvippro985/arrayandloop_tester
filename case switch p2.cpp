#include<stdio.h>

 int main(){
 	char pheptinh;
    float somoi;
    int soa, sob;
    printf("xin moi nhap so cua ban theo thu tu a - b, nhap phep tinh + - * /\n");
    scanf("%d %c %d",&soa ,&pheptinh,&sob);
    
    switch(pheptinh){
    	case '+':
    		somoi = soa + sob;
    		printf("\n phep tinh %d + %d = %.2f", soa , sob, somoi);
    		break;
    	case '-':	
    	    somoi = soa - sob;
    	    printf("\n phep tinh %d - %d = %.2f",soa , sob , somoi);
    	    break;
    	case '*':
		    somoi = soa * sob;
			printf("\n phep tinh %d * %d = %.2f",soa , sob,somoi);
			break;    
		case '/':
		 if (sob == 0){
		 	printf("khong the chia cho 0!");
		 } else {
		 	somoi = (float)soa / sob;
		 	printf("\n phep tinh %d / %d = %.2f",soa , sob,somoi);
		 }
	}
 } 

