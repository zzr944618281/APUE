#include <stdio.h> 
char outbuf[BUFSIZ]; 
int main(void) 
{ 
  setbuf(stdout, outbuf); // 把缓冲区与流相连
  puts("This is a test of buffered output.\n");
  puts(outbuf);
  fflush(stdout); // 刷新
  puts(outbuf); // 输出
  return 0; 
}

/*
 *程序先把outbuf与输出流相连，然后输出一个字符串，这时因为缓冲区已经与流相连，所以outbuf中也保存着这个字符串，紧接着puts函数又输出一遍，所以现在outbuf中保存着两个一样的字符串。刷新输出流之后，再次puts，则又输出两个字符串。
 * */
