# include<stdio.h>
int main()
{
	int n,a[10],s=0,i;
	
	printf("enter the size of array\n");
	scanf("%d",&n);
    printf("enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    	s=s+a[i];
	}
	printf("the sum of elements is %d",s);
	return 0;
}
