#include<stdio.h>
#include<stdlib.h>
#include<p18f4550.h>
void main(void)
{ 
int i,j,temp;
int num_asc[]={10,2,5,1,6};
for(i=0;i<=4;i++)
{
	for(j=i+1;j<=4;j++)
	if(num_asc[i]>num_asc[j])
		{
        temp=num_asc[i];
		num_asc[i]=num_asc[j];
		num_asc[j]=temp;
		}
	}
	
}