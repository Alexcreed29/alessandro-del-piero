#include<stdio.h>

int main()
{
    int x;
    int y= 0;
    
    x = 2;
    while(x<=100)
    {
       y += x;  
      x=x + 2;
    }
    printf("%d\n", y);
}