#include<stdio.h>
int swap(int*a,int*b){
	int temp=*a;
	*a=*b;
	*b=temp;	
}
int main(){
	int a=7;
	int b=5;
	
	printf("hieu truoc khi doi cho:%d-%d=%d",a,b,a-b);
	swap(&a,&b);
	printf("\nhieu sau khi doi cho:%d-%d=%d",a,b,a-b);
}
