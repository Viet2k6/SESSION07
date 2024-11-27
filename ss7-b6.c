#include<stdio.h>
int main(){
	int i =0;
    int array[5]={1,2,3,4,5};
	for(i=0;i<5;i++){
		if (array[i]%2==0){
			array[i]=array[i]+3;
		}else if (array[i]%2!=0){
		    array[i]=array[i]+2;
		}
}
        printf("%d %d %d %d %d", array[0],array[1],array[2],array[3],array[4]);
        return 0;
}
