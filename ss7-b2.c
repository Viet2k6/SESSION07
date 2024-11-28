#include <stdio.h>
int main() {
    int arr[5];
    printf("nhap gia tri co 5 phan tu: \n");
    for(int i = 0; i < 5; i++) {
    	printf("nhap gia tri phan tu thu %d: ", i + 1);
    	scanf("%d", &arr[i]);
		}
    printf("Cac phan tu trong mang la: \n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
	return 0;
	}
