#include<stdio.h>
int partition(int a[],int left,int right)//分区 
{
	int i=left;//i=0
	int j=right;//j=4
	int temp=a[i];//分界值 
	while(i<j)
	{
		while(i<j&&a[j]>temp)
			j--;           
		if(i<j)         
			a[i]=a[j];
		while(i<j&&a[i]<=temp)
			i++;
		if(i<j)
			a[j]=a[i];
    }
a[i]=temp;
return i;
}
void quickSort(int a[],int left,int right)
{
	int dp;
	
	if(left<right)
	{
		dp=partition(a,left,right);
		quickSort(a,left,dp-1);
		quickSort(a,dp+1,right);
	}
}
int main()
{
	int a[5]={40,88,94,20,76};/*73,37,67,11,14*/
	quickSort(a,0,4);
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);	
	}
	return 0;
}
