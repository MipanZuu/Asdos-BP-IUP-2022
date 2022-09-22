#include <stdio.h>
int main()  
{  
    int num1, num2, num3, num4, num5, idt1, idt2, idt3, idt4, idt5, nt1, nt2, nt3;
    scanf("%d%d", &num1, &num2); 
    if (num1 > num2)
    {
       idt1 = 1;
       idt2 = 2;
       nt1 = num1;
       nt2 = num2;
    } else {
       idt1 = 2;
       idt2 = 1;
       nt1 = num2;
       nt2 = num1;
    }
    
    scanf("%d", &num3); 
    if (num3 < nt1 && num3 > nt2)
    {
       nt3 = nt2;
       idt3 = idt2;
       nt2 = num3;
       idt2 = 3;
    } 
    else if (num3 > nt1)
    {
        nt3 = nt2;
        idt3 = idt2;
        nt2 = nt1;
        idt2 = idt1;
        nt1 = num3;
        idt1 = 3;
    } else {
        nt3 = num3;
        idt3 = 3;
    }


    scanf("%d", &num4);
    if (num4 > nt3)
    {
        nt3 = num4;
        idt3 = 4;
    }
    else if (num4 < nt1 && num4 > nt2)
    {
        nt3 = nt2;
        idt3 = idt2;
        nt2 = nt1;
        idt2 = idt1;
    }
    else if (num4 > nt1)
    {
        nt3 = nt2;
        idt3 = idt2;
        nt2 = nt1;
        idt2 = idt1;
        nt1 = num3;
        idt1 = 4;
    }
    
    
    
    
    
    
    

    
    
  
    return 0;  
}  
