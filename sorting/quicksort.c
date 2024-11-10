#include <stdio.h>
#include <stdlib.h>
void quicksort(int[], int, int);
int partition(int[], int, int);
int main()
{
    int a[20], i, n;
    printf("Enter the number of element to be sorted :\n");
    scanf("%d", &n);
    printf("enter the element :\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quicksort(a, 0, n);
    printf("\n The sorted arrau is :\n");
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
    return 0;
}
void quicksort(int a[], int p, int r)
{
    int q;
    if (p < q)
    {
        q = partition(a, p, r);
        quicksort(a, p, q);
        quicksort(a, q + 1, r);
    }
}
int partition(int a[], int p, int r)
{
    int x, i, j, temp;
    x = a[p];
    i = p - 1;
    j = r+ 1;
    while(1)
    {
        do{
            i=j-1;
        }
        while (a[j<x]);
        if(i<j){
    
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else
        return(j);
    }
}