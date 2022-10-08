#include <stdio.h>

void main() {
    
   int n,j=0,i=0,sum=0,k,week=0;
   printf("Enter the number of days:");
   scanf("%d",&n);
   if(n<=5)
   {
       j=n;
       while(j>0)
       {
             i=i+100;
             sum=sum+i;
             j--;
       }
   }
   else
   {
       j=n;
       while(j>0)
       {
           
           if(j>7)
                {
                    k=5;
                    while(k>0)
                     {
                            i=i+100;
                            sum=sum+i;
                            k--;
                    }
                    
                    //end of a week
                    j=j-7;
                    week=week+1;
                  
                }
            else
               {
                    if(j>5)
                    {
                
                        k=5;
                        while(k>0)
                        {
                            i=i+100;
                            sum=sum+i;
                            k--;
                         }
                         j=0;
                    }
                    {
                        k=j%5;
                        while(k>0)
                        {
                            i=i+100;
                            sum=sum+i;
                            k--;
                         }
                         j=0;
                        
                    }
                   
               }
            // incrementing monday amount after week
            i=100*week;
    }
       
   }
   

    printf("Savings:%d", sum);
}
