/* 1
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("entera numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        sum=sum+i;
    }
    printf("\n%d",sum);
    return 0;}*/
/*  2
    #include<stdio.h>
    int main()
    {
        int n,i=1,sum=0,a;
        printf("enter a value of n");
        scanf("%d",&n);
        do
        {
            printf("%d ",a=2*i);
            sum=sum+a;
            i++;
        }while(i<=n);
        printf("\nsum of even %d",sum);
    }*/
/* 3
    #include<stdio.h>
    int main()
    {
        int n,i,sum=0,a;
        printf("enter value of n numbers");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            printf("%d  ",a=2*i-1);
            sum=sum+a;


        }
         printf("\nsum is %d",sum);
         getch();

    }*/
/* 4
    #include<stdio.h>
    int main()
    {
        int i=1,n,sum=0,a;
        printf("enter a value of n numbers");
        scanf("%d",&n);

        do
        {
            a=i*i;
            sum=sum+a;
            i++;

        }while(i<=n);
        printf("\nsqures of sum is %d",sum);
    }*/
/* 5
    #include<stdio.h>
    int main()
    {
        int i,n,sum=0,a;
        printf("enter a numbers of n ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
        a=i*i*i;
        sum=sum+a;
        }
        printf("sum of %d",sum);
    }*/

/*  6
     #include<stdio.h>
     int main()
     {
          int n,i,fact=1;
         printf("enter value of n");
         scanf("%d",&n);
         for(i=1;i<=n;i++)
         {
             fact=fact*i;
         }
         printf("factorial of %d",fact);
     }*/
/* 7
     #include<stdio.h>
     int main()
     {
         int n,i=1,count=0;
         printf("enter a n numbers");
         scanf("%d",&n);
         while(n!=0)
         {
             n=n/10;
             count++;

         }
         printf("count %d",count);
     }*/
/* 8
     #include<stdio.h>
     int main()
     {
         int n,i;
         printf("enter a value of n numbers");
         scanf("%d",&n);
         for(i=2;i<=n-1;i++)
         {
             if(n%i==0)
                break;
         }
         if(i==n)
            printf("%d is a prime numbers",n);
         else
            printf("%d is a not ptime numbers",n);
         return 0;

     }*/
/* 9
     #include<stdio.h>
     int main()
     {
         int a,b,i=1;
         printf("enter two numbers");
         scanf("%d%d",&a,&b);
         for(i=a>b?a:b;i<=a*b;i=i+(a>b?a:b))
         {
             if(i%a==0 && i%b==0)
                break;
         }
         printf("lcm, is %d ",i);
     }*/

     #include<stdio.h>
     int main()
     {
         int a,b=0,rem=0,i;
         printf("enter a numbers");
         scanf("%d",&a);
         for(i=1;a!=0;i++)
         {
             rem=a%10;
             b=b*10+rem;
             a=a/10;
         }
         printf("\n reverse order %d",b);
     }

