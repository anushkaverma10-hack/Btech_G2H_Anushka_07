#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,z ;
    printf("Enter numbers x , y to be swabed:") ;
    scanf("%d%d", &x,&y) ;
    z=x ;
    x=y ;
    y=z ;
    printf("The numbers are swabed : %d %d\n",x,z ) ;
    return 0;
}
