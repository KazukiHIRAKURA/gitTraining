#include <stdio.h>
#define MAX_LINE 1024
#define MAX_COLS 80

int main(void){
	char str[MAX_COLS];
	FILE *fp;
	fp = fopen("prop/prop1.dat","r");
	if(fp == NULL){
		printf("Can not open the file.\n");
		return 1;
	}
	while(fgets(str,MAX_LINE,fp)!=NULL){
		printf("%s", str);
	}
	fclose(fp);
	printf("This massage is written on the source code.\n");
	return 0;
}