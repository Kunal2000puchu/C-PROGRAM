//
//  main.c
//  kunal2
//
//  Created by Kuntal Acharya on 01/02/20.
//  Copyright © 2020 Kuntal Acharya. All rights reserved.
//

#include <stdio.h>
#include<ctype.h>
int main()
{
    char a;
    printf("enter an character\n");
    scanf("%c",&a);
    if(isupper(a))
    {
        
        printf("the %d is in upper case\n",a);
            
        }
        else if(islower(a))
        {
            printf("the %d is in lower case\n",a);
            
        }
        else
        {
            printf("the %d is not even an alphabhet\n",a);
            
        }
    }

