#include <stdio.h>
#include<stdlib.h>
void quick_sort(int[],int,int);
int partition(int[],int,int);
 
int main()
{
    int *a,n,i;
   
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        
    quick_sort(a,0,n-1);  

    return 0;        
}
void quick_sort(int ar[], int left, int right)
{
if (left < right)
{
int p = partition(ar, left, right);
quick_sort(ar, left, p - 1);
quick_sort(ar, p + 1, right);
for (int i = left; i <= right; i++)
printf("%d ",ar[i]);
printf("\n");
}
}

int partition(int ar[], int left, int right)
{
int b[1000], n = 0;
int temp = ar[left];
for (int i = left + 1; i <= right; i++)
if (ar[i] <= temp)
b[n++] = ar[i];
b[n++] = temp; 
int index = n - 1 + left;
for (int i = left + 1; i <= right; i++)
if (ar[i] > temp)
b[n++] = ar[i];
for (int i = left; i <= right; i++)
ar[i] = b[i - left];
return index;
}

