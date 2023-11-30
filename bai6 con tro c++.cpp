#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str1[100],str2[100],str3[100],str4[100];
	do{
	printf("\n******MENU*****\n");
	printf("1.nhap vao chuoi\n");
	printf("2.in ra chuoi\n");
	printf("3.sao chep chuoi vao 1 chuoi khac\n");
	printf("4.nhap vao chuoi khac tien hanh them chuoi do vao chuoi ban dau\n");
	printf("5.nhap vao chuoi khac so sanh chuoi do voi chuoi ban dau\n");
	printf("6.in ra chuoi dao nguoc\n");
	printf("7.thoat\n");
	printf("nhap lua chon cua ban ");
	int choice;
	scanf("%d",&choice);
	char *ptr1=str1;
	int size;
	switch(choice){
		case 1:
			printf("nhap 1 chuoi bat ky ");
			scanf("%s",ptr1);
			size=strlen(str1);
			break;
		case 2:
			for(int i=0;i<size;i++){
			    printf("%c",*(ptr1+i));
			    }
			break;
		case 3:
			strcpy(str2,str1);
			printf("chuoi so 1 la %s",str1);
			printf("\nchuoi so 2 la %s",str2);
			break;
		case 4:
			printf("nhap chuoi so 3 la ");
			scanf("%s",&str3);
			printf("chuoi 1 truoc khi noi voi chuoi 3 la %s",str);
			strcat(str1,str3);
			printf("\nchuoi 1 sau khi noi chuoi la %s",str);
			
			break;
		case 5:
			printf("nhap chuoi so 4 la ");
			scanf("%s",&str4);
			 if (strcmp(str1,str4)>0){
                printf("chuoi lon hon la %s",str1);
            }else if (strcmp(str1,str4)<0){
                printf("chuoi lon hon la %s",str4);
            }else{
            	printf("2 chuoi bang nhau");
			}
			break;
		case 6:
			for(int i=size-1;i>=0;i--){
				printf("%c",*(ptr1+i));
			}
			break;
		case 7:
			exit(0);
        default:
        	printf("vui long nhap lai tu 1 den 7");		   	
	}
	}while(1==1);
}
