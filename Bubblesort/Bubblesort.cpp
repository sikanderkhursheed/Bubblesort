#include <stdio.h>
#include <conio.h>
int i,n;
int a[100];
void bubblesort();
void main()
{

printf("Enter total numbers: ");
scanf("%d",&n);
printf("\nEnter values : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
bubblesort();
printf("\nArray after bubble sort is :\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
getche();
}
void bubblesort()
{
int j,k,l,temp;
for(i=0;i<n-1;i++)
{
	k=0;
	for(j=0;j<n-1-i;j++)
	{
	if (a[j]>a[j+1])
		{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
	k++;
		}
	}
}
}