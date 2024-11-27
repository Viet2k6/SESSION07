#include<stdio.h>
int main(){
	int array[7];
	int i;
	for(i=1;i<8;i++){
	printf("Hay nhap phan tu: ");
	scanf("%d",&array[i]);
	}
	for(i=1;i<8;i++){
		printf("\n Phan tu thu %d la: %d\n",i,array[i]);
	}
	return 0;
}
