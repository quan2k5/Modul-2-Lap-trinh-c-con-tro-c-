#include<stdio.h>
#include<stdlib.h>
int findNumber(int *arr,int number,int n){
	for(int i=0;i<n;i++){
		if(number==arr[i]){
			return i;
		}
	}
	return 0;
}
int swapArr(int *arr1,int *arr2,int n,int m,int currentIndex){
	if(m>=n){
		for(int i=0;i<m;i++){
				arr1[currentIndex]=arr2[i];
				currentIndex++;
			}
		}
}

int main(){
	int  arr1[100],arr2[100];
	int n,m;
	do{
		printf("\n1.nhap vao mang \n");
		printf("2.in ra mang\n");
		printf("3.sao chep mang vao mang khac\n");
		printf("4.nhap vao mang khac doi cho 2 mang voi nhau\n");
		printf("5.dao nguoc mang\n");
		printf("6.nhap vao 1 ki tu va tim kiem ki tu do trong mang");
		printf("\n7.thoat\n");
		printf("nhap vao lua chon cua ban");
		int choice;
		int *ptr=arr1;
		scanf("%d",&choice);
		int number;
		int check;
		int currentIndex;
		switch(choice){
			case 1:
				printf("nhap so phan tu cua mang");
				scanf("%d",&n);
				currentIndex=0;
				for(int i=0;i<n;i++){
					printf("arr[%d]",i);
					scanf("%d",&arr1[i]);
					currentIndex++;
				}
				break;
			case 2:
				for(int i=0;i<currentIndex;i++){
					printf("%d ",arr1[i]);
				}
				break;
			case 3:
				printf("mang truoc khi sao chep la ");
				for(int i=0;i<n;i++){
					printf("%d",arr1[i]);
				}
				for(int i=0;i<n;i++){
					arr2[i]=arr1[i];
				}
				printf("\nmang sau khi so chep la");
				for(int i=0;i<n;i++){
					printf("%d",arr2[i]);
				}
				break;
			case 5:
				for(int i=n-1;i>=0;i--){
					printf("%d ",*(arr1+i));
				}
				break;
			case 6:
				printf("nhap 1 so bat ky");
				scanf("%d",&number);
				check=findNumber(arr1,number,n);
				if(check==0){
					printf("khong co ki tu do trong mang");
				}else{
					printf("ki tu can tim o trong mang o vi tri tri thu %d",check);
				}
				break;
			case 4:
				printf("nhap so phan tu cua mang");
				scanf("%d",&m);
				for(int i=0;i<m;i++){
					printf("arr2[%d]=",i);
					scanf("%d",&arr2[i]);
				}
				swapArr(arr1,arr2,n,m,currentIndex);
				break;
			case 7:
			exit(0);
			default:
			printf("vui long nhap lai tu 1 den 7");		
		}
	}while(1==1);
}
