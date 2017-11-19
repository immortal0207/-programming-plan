#include<stdio.h>
int main()
{
    int i,a[6]={2,3,5,6,7},n,m;
    scanf("%d",&n);
    for(i=0;i<=5;i++)
    {
    	if(a[i]>n)
    	{
		m=i;
		break;
    	}
 	}
    for(i=4;i>=m;i--)
        a[i+1]=a[i];
    a[m]=n;
    for(i=0;i<6;i++)
	    printf("%d",a[i]);
    return 0;
}
