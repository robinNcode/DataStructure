#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int choice;
    printf("  1. Arithmetic. \n  2. Relational. \n  3. Logical Operators.\n  4. Loop. \n  5. Array. \n  6. If......else. \n  7. String \n  8. Multiplication table. \n  9. Prime Number.  \n  10.Date /  Month  /   Year . \n\n  ");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();
        printf("\n");

        switch(choice){
        case 1:
        {
            int x,y,z ;

            printf("Enter the value of X:");
            scanf("%d",&x);
            printf("Enter the value of Y:");
            scanf("%d",&y);
            printf("Enter the value of Z:");
            scanf("%d",&z);

            printf("\n");

            printf("%d\n",x++);
            printf("%d\n",y--);
            printf("%d\n",x*y);
            printf("%d\n",x/y);
            printf("%d\n",x%y);
            printf("%d\n",x+z);
            printf("%d\n",x+y);
            printf("%d\n",x-y);
            printf("%d\n",x+z+y);
            printf("%d\n",z%y);

            printf("\n");
        }
        break;
        case 2:
        {
            int number;
            printf("Enter the a number:");
            scanf("%d",&number);
            printf("\n");
            if(number%2==0)
                printf("\tEven Number\n");
            else
                printf(" \t Odd Number\n");
            printf("\n");
        }
        break;
        case 3:
        {
            int num1,num2,n1,n2,rem,gcd,lcm;

            printf("Enter the value of Number 1:");
            scanf("%d",&num1);
            printf("Enter the value of Number 2:");
            scanf("%d",&num2);

            printf("\n\n");
            n1=num1;
            n2=num2;

            while(n2!=0){
                rem=n1%n2;
                n1=n2 ;
                n2=rem;
            }
            gcd=n1;
            lcm=(num1*num2)/gcd;

            printf("GCD=%d\n",gcd);
            printf("LCM=%d\n",lcm);
        }
        break;
        case 4:
        {
            int i, j, k,l;
            int arr[4];
            for(i=0; i<4; i++) {
                printf("Enter the number:");
                scanf("%d",&arr[i]);
            }
            for (i = 0; i < 4; i++){
                for (j = 0; j < 4; j++){
                    for (k = 0; k < 4; k++) {
                        for(l=0; l < 4; l++){
                            if (i != j && j != k && k!=i&&l!=i && l!=k && l!=j){
                                printf("[%d %d %d %d ]\n", arr[i], arr[j], arr[k],arr[l]);
                            }
                        }
                    }
                }
            }
        }
        break;
        case 5:
        {
            int num;
            printf("Enter the value of Array:");
            scanf("%d",&num);

            int a[num];
            int i,j,ab;

            for(i=0; i < num ; i++) {
                printf("Enter the value:");
                scanf("%d",&a[i]);
            }
            for(i=0; i < num ; i++){
                for(j=i+1; j < num ; j++){
                    if(a[i]<a[j])
                    {
                        ab=a[i] ;
                        a[i]=a[j];
                        a[j]=ab;
                    }
                }
            }
            printf("Largest to smallest:\n");
            for(i=0; i < num ; i++){
                printf("%d\n",a[i]);
            }
            for(i=0; i < num ; i++){
                for(j=i+1; j < num ; j++){
                    if(a[i]>a[j]){
                        ab=a[i] ;
                        a[i]=a[j];
                        a[j]=ab;
                    }
                }
            }
            printf("Smallest to largest :\n");
            for(i=0; i < num ; i++){
                printf("%d\n",a[i]);
            }
        }
        break;
        case 6:
        {
            int m;
            printf("Enter the Number:");
            scanf("%d",&m);
            printf("\n");
            if(m>100||m<0)
                printf("\t You Entered Invaild Marks!");
            else if(m>=80)
                printf("\t You Got=A+");
            else if(m>=70)
                printf("\t You Got=A");
            else if(m>=60)
                printf("\t You Got=A-");
            else if(m>=50)
                printf("\t You Got=B");
            else if(m>=40)
                printf("\t You Got=C");
            else if(m>=33)
                printf("\t You Got=D");
            else
                printf("\t You Got=F");
            printf("\n\n");
        }
        break;
        case 7:
        {
         char str[200];
            int index,alpha=0,digit=0,space=0,special=0;
            fputs("Enter string:",stdout);
            scanf("%[^\n]%*c", str);
            //getchar();

            int len = strlen(str);
            for(index=0; index<len; index++){
                if(isalpha(str[index])){
                    //printf("I Am alpha \n");
                    alpha++;
                }
                else if(isdigit(str[index])){
                    //printf("I Am digit \n");
                    digit++;
                }
                else if(isspace(str[index])){
                    //printf("I Am space \n");
                    space++;
                }
                else special++;
                //index ++;
            }

            puts(str);
            printf("Loop = %d\n",index);
            printf("Alpha Char = %d\n",alpha);
            printf("Digit = %d\n",digit);
            printf("Space = %d\n",space);
            printf("Special = %d\n",special);
        }
        break;
        case 8:
        {
            int i,n;
            printf("Enter the Multiplication table Number: ");
            scanf("%d",&n);
            for(i=1; i<=10; i++){
                printf(" \t %d x %d = %d\n",i,n,i*n);
            }
            printf("\n\n");
        }
        break;
        case 9:
        {
            int i,n,count=0;
            printf("Enter a positive Number:");
            scanf("%d",&n);
            for(i=2 ; i<n ; i++){
                if(n % i == 0)
                {
                    count++;
                    break;
                }
            }
            if(count==0) printf("\t Prime Number\n");
            else printf("\t Not Prime Number\n");
        }
        break;
        case 10:
        {
            int y,y1,y2,y3;

            printf("Enter a value :");
            scanf("%d",&y);

            printf("\t %d Year \n",y/365);
            y1=y%365;

            printf("\t %d Month\n",y1/30);
            y2=y1%30;

            printf("\t %d Day\n",y2*1);
            y3=y2*1;
        }
        break;
        }
    }
    return 0;
}
