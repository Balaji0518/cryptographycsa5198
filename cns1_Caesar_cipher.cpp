#include <stdio.h>
#include <string.h>
#include<conio.h>
#include <ctype.h>
int main(){
	char plain[20], cipher[20];
	int key,i,length;
	printf("\n Enter the Plain text:");
	scanf("%s", plain);
	printf("\n Enter the Key value:");
	scanf("%d", &key);
	printf("\n \n \t PLAIN TEXT: %s",plain);
	printf("\n \n \t ENCRYPTED TEXT: ");
	for(i=0, length = strlen(plain); i<length; i++){
		cipher[i]=plain[i] + key;
		if (isupper(plain[i]) && (cipher[i] > 'Z'))
			cipher[i] = cipher[i] - 26;
		if (islower(plain[i]) && (cipher[i] > 'z'))
			cipher[i] = cipher[i] - 26;
		printf("%c", cipher[i]);
	}
	printf("\n \n \t AFTER DECRYPTION : ");
	for(i=0;i<length;i++){
		plain[i]=cipher[i]-key;
		if(isupper(cipher[i])&&(plain[i]<'A'))
			plain[i]=plain[i]+26;
		if(islower(cipher[i])&&(plain[i]<'a'))
			plain[i]=plain[i]+26;
		printf("%c",plain[i]);
	}
	getch();
}
