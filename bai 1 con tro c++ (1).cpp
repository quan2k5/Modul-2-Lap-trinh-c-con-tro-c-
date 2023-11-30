#include<stdio.h>
int main(){
	int a=1000;
	int *ptr=&a;
	*ptr=a;
	printf("dia chi cua bien a la %d\n",&a);
	printf("gia tri cua bien a la %d\n",a);
	printf("gia tri cua con tro la %d\n",ptr);
	printf("gia tri cua bien ma con tro dang quan ly la %d\n",*ptr);
}
