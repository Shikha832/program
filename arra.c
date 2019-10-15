#include<stdio.h>
void main()
{
	int array[100],i,j,n;
	printf("enter the no  of rows of the array");
    scanf("%d",&n);
    printf("enter the array");
for(i=0;i<n;i++)
{
	scanf("%d \n",array[i]);
}

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(array[i]>array[j])
		{
			
		int temp= array[i];
		array[i]=array[j];
		array[j]=temp;
	}
	

}
}
	printf("the array in the ascending order");
	for(i=0;i<n;i++)
	printf("the sorting of the array is %d",array[i]);
}
