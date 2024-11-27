#include<stdio.h>
int main(){
	int i =0;
	int array[5]={1,3,5,7,9};
	int smallest= array[0];
	int biggest;
	for(i=0;i<5;i++){
	if (array[i]>smallest){
		biggest = array[i];
	}else{
		smallest=array[i];
	}
	}
	printf("So nho nhat la %d\nSo lon nhat la %d",smallest,biggest);
	return 0;
}
