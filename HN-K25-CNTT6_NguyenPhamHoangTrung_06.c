#include <stdio.h>

int main () {
	int arr[100];
	int n, i, j, x, value, index;
	int cont;
	int key;
	int choice, sorted;
	while(cont == 'Y' && cont == 'X') {
		printf("\n==========MENU==========\n");
		printf("1.Nhap so luong phan tu va gia tri mang\n");
		printf("2.In mang\n");
		printf("3.In phan tu chan trong mang\n");
		printf("4.In ra gia tri lon nhat cua phan tu trong mang\n");
		printf("5.Them moi phan tu vào vi tri cu the\n");
		printf("6.Xoa phan tu tai vi tri cu the\n");
		printf("7.Sap xep mang theo thu tu giam dan\n");
		printf("8.Kiem tra su ton tai cua phan tu trong mang\n");
		printf("9.In phan tu xuat hien dung 1 lan trong mang\n");
		printf("10.Tim va in cac cap phan tu trong mang co tong bang k\n");
		printf("11.Thoat\n");
		printf("Nhap lua chon: ");
		scanf("%d", &choice);
	}
	switch (choice) {
		case 1:
			printf("Nhap so phan tu n: ");
			scanf("%d", &n);
			if(n <= 0 || n >= 100) {
				printf("So phan tu khong hop le\n");
				n = 0;
				break;
			}
			printf("n");
			for(int i = 0; i < n; i++) {
				printf("arr[%d]= \n", i);
				scanf("%d", &arr[i]);	
			}
			sorted = 0;
			break;
		case 2:
			if(n == 0) {
			    printf("Mang rong");
			}
			printf("Mang hien tai la: ");
			for(int i = 0; i < n; i++) {
				printf("arr[%d]= ", i);
			}
			break;
		case 3:
			if(n == 0) {
				printf("Mang rong");
			}	
		case 4:
			if(n == 0) {
				printf("mang rong");
			}		
		case 5:
			
		case 6:
		case 7:
			if(n == 0) {
				printf("mang rong");
			}
			for(int i = 0; i < n; i++) {
				key = arr[i];
				j = i - 1;
				while(j >= 0 && arr[i] < key) {
					arr[j + 1] + arr [j];
					j--;
				}
				arr[j + 1] = key;
			}
		case 8:
			int left = 0; right = n - 1;
			wwhile(left <= right) {
				int mid = (left + right)/ 2;
				if(arr[mid] < left) {
					left = mid + 1;
				} else {
					right = mid - 1;
				}
			}
		case 9:
		case 10:
		case 11:
			printf("Cam on vi da den!");
			break;
	}
	printf("ban co muon tiep tuc");
	scanf("%c", &choice);
	if(cont != 'X' && cont != 'Y') {
		printf("lua chon khong hop le");
	} else {
	    printf("tiep tuc");
	}
}

