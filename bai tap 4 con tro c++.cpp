#include<stdio.h>
int sortArr(int *arr,int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return 0;
}
int main(){
	int arr[100];
	printf("nhap so phan tu cua mang");
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("cac phan tu cua mang truoc khi sap xep la ");
	for(int i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	sortArr(arr,n);
	printf("\ncac phan tu cua mang sau sap xep la ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
	

