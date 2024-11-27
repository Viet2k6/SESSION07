#include<stdio.h>
int main(){
	int array[5]={1,2,3,4,5};
	int size = sizeof(array)/sizeof(int);
	int i;
	for(i=0;i<size;i++){
		printf("%d\n", array[i]);
}
	printf("Do dai cua mang la: %d",size);
	return 0;
}

