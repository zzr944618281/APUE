#include"apue.h"
#include"stdio.h"
void main()
{
	int c;
	int i = 0;
	//static  char buf[BUFSIZ];
	char buf[BUFSIZ];	

	setbuf(stdout,buf);
	while ((c = getchar()) != '!')
		putchar(c);
	//_exit() ;
	return ;
}
//仅当_exit()的情况下才不会刷新缓冲区
