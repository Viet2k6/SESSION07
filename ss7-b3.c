#include<stdio.h>
int main() {
    int array[5] = {1, 2, 5, 6, 9};
    int i, chan = 0; 
	for (i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) { 
            chan++;  
        }
    }
	if (chan == 0) {
        printf("Mang khong co so chan\n");
    } else {
        printf("Mang co %d so chan\n", chan);
    }
    return 0;
}
