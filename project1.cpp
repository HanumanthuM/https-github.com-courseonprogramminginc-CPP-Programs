#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	int r;
for(r=0;r==0;){
char s[20],s1[20],s2[20],op;
	int i,j,num1,num2,ans;
	gets(s);
	if(strcmp(s,"0")==0)
	{
		return 0;
	}
	else {
	for(i=0; s[i] !=' ';i++){
		s1[i]= s[i];
	}
	op=s[i+1];
	int k=0;
	for(j=i+3; s[j] !='\0';j++){
         
		s2[k]= s[j];
		k++;
	}
	num1=atoi(s1);
	num2=atoi(s2);
	ans;
switch(op)
{
	case  '+' : ans = num1+num2;
	break;
	case  '-' : ans = num1-num2;
	break;
	case  '*' : ans = num1*num2;
	break;
	case  '/' : ans = num1/num2;
	break;
	case  '%' : ans = num1%num2;
	break;
}
printf("%d\n",ans);
}
}
}
