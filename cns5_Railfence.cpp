#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i,j,k,l,key=2;
	char a[20],c[20],d[20];
	printf("\n\t\t RAIL FENCE TECHNIQUE");
	printf("\n\nEnter Plain Text : ");
	gets(a);
	
	l=strlen(a);
	/*Ciphering*/
	for(i=0,j=0;i<l;i++){
		if(i%key==0){
			c[j++]=a[i];
			printf("%c  ",a[i]);
		}
	}
	printf("\n");
	for(i=0;i<l;i++){
		if(i%key==1){
			c[j++]=a[i];
			printf("  %c",a[i]);
		}
	}
	c[j]='\0';
	printf("\nCipher Text:");
	printf("%s",c);
	/*Deciphering*/
	if(l%2==0)
		k=l/2;
	else
		k=(l/2)+1;
	for(i=0,j=0;i<k;i++){
		d[j]=c[i];
		j=j+2;
	}
	for(i=k,j=1;i<l;i++){
		d[j]=c[i];
		j=j+2;
	}
	d[l]='\0';
	printf("\nDecrypted Text: ");
	printf("%s",d);
	getch();
}
