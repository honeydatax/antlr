#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argments[50];

int main(){
	char tokens[82];
	char *p1;
	char *p2;
	int count;
	int b=0;
	int n=0;
	printf("input token?: ");
	p1=fgets(tokens,80,stdin);
	argments[0]=p1;
	p2=strstr(p1," ");
	count=1;
	if(p2!=NULL){
		p1=p2+1;
		argments[1]=p1;	
		p2[0]=0;
		count++;
		while(b!=1){
				p2=strstr(p1,",");
				if(p2!=NULL){
					p1=p2+1;
					argments[count]=p1;
					p2[0]=0;
					count++;
				}else{
					b=1;
				}
		}
	}
	p2=strstr(p1,"\n");
	if(p2!=NULL)p2[0]=0;
	p2=strstr(p1,"\r");
	if(p2!=NULL)p2[0]=0;
	printf("\ntokens count: %d\n",count);
	for (n=0;n<count;n++){
		printf("tokens %d: %s\n",n,argments[n]);
	}
	return 0;
}










