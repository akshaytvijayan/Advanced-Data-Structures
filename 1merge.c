#include <stdio.h>
void main()
{
int arr1[20] ,arr2[20] ,arr3[40];
int m,n;
void read_array(int[],int);
void print_array(int[],int);
void merge(int[],int[],int[],int,int);
printf("No of Elements in Frist array[1 - 20]:");
scanf("%d",&m);
printf("Enter element in non decreaseing order:");
read_array(arr1,m);
printf("No of arrays in Second array:");
scanf("%d",&n);
printf("Enter element in non decreaseing order:");
read_array(arr2,n);
merge(arr1,arr2,arr3,m,n);
printf("merged array :      \n");
print_array(arr3,m+n);
}
void read_array(int a[],int n)
{
int i;
for(i=0;i<n;++i)
scanf("%d",&a[i]);
}
void print_array(int arr[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d ",arr[i]);
return;
}
void merge(int a[],int b[],int c[],int m,int n)
{
int i,j,k;
i=j=k=0;
while (i<m && j<n)
if( a[i]<b[j])
{
c[k]=a[i];
i=i+1;
k=k+1;
}
else
{
c[k]=b[i];
j=j+1;
k=k+1;
}
while (i<m)
c[k++]=a[i++];
while (j<n)
c[k++]=b[j++];
}









