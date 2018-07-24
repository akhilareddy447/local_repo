#include<stdio.h>
void printarray(int array[],int index,int length)
{
if(index>=length)
return;
printf("%d,",array[index]);
printarray(array,index+1,length);
}

int main()
{
int arr[50],n,i;
printf("enter how many elements into array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printarray(arr,0,n);
}




 




