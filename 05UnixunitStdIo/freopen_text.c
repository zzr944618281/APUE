#define TEST
#include<stdio.h>
#define MM 1000
int  main()
{
	#ifdef TEST
	freopen("d:\\c2_4_in.txt","r",stdin);
	freopen("d:\\c2_4_out.txt","w",stdout);
	#endif
	int i=0,sum=0,n,max=-MM,min=MM;
	
	while(scanf("%d",&n)==1)
	{
	sum=sum+n;
	if(max<n)
	max=n;
	if(min>n)
	min=n;
	i++;
	}
	printf("%d %d %.3lf\n",min,max,(double)sum/i);
}
