#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%1000!=0) printf("%d\n",1000-n%1000);
    else printf("0\n");
}
