#include <stdio.h>
#include"apue.h"
int  main()
{
	FILE *myf;
	long f1;	//此处将f1设置为long 可以读取更长的文件
	myf=fopen("1.txt","r");
	fseek(myf,0,SEEK_END);
	f1=ftell(myf);
	fclose(myf);
	printf("%d\n",f1);
	return (0);
}
