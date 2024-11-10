#include<stdio.h>
#include<conio.h>
int main()
{
    void array_dele(int n ,int a[],int pos);
    int n,a[20],i,pos;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter array element\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter position\n");
    scanf("%d",&pos);
    array_dele(n,a,pos);
    return 0;
}
void array_dele(int n,int a[],int pos)
{
    int i;
    printf("Deleted item =%d",a[pos-1]);
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("After deletion\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}