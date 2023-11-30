#include<stdio.h>
int length1(char*arr1){
	int i=0;
	int count=1;
	while(*(arr1+i)!='\0'){
		count++;
		i++;
	}
	return count;
}
int length2(char*arr2){
	int i=0;
	int count=1;
	while(*(arr2+i)!='\0'){
		count++;
		i++;
	}
	return count;
}
int main(){
	printf("nhap chuoi so 1 bat ky ");
	char str1[100];
	scanf("%s",&str1);
	printf("so phan tu trong chuoi so 1 ke ca null la %d",length1(str1));
	printf("\nnhap chuoi so 2 bat ky ");
	char str2[100];
	scanf("%s",&str2);
	printf("so phan tu trong chuoi 2 ke ca null la%d",length2(str2));
	if(length1(str1)>length2(str2)){
		printf("\n");
		puts(str1);
	}else if(length2(str2)>length1(str1)){
		printf("\n");
		puts(str2);
	}else{
		printf("\nkhong hop le");
	}
}
