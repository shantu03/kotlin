/*#include<stdio.h>
void main()
{
    int a,b,i,c;
    printf("Enter no . of rows you want");
    scanf("%d",&a);
    i=a;
    for(b=1;b<=a;b++)
    {
        for(c=1;c<=i-1;c++)
        {
            printf(" ");
           
        }
         i--;
        for(int k=1;k<=2*b-1;k++)
        {
            if(k==1||k==2*b-1||b==a)
            {
            printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("thanks");
}
#include<stdio.h>
void main()
{
    int a,b,c,d,i;
    printf("Enter number of line you want");
    scanf("%d",&a);

    for(b=1;b<=a;b++)
    {
        for(c=1;c<=b;c++)
        {
            printf(" ");
        }
        for(d=a;d>=1;d--)
        {
            printf("*");
        }
        printf("\n");
    }
}

// to find sum of digit
#include<stdio.h>
#include<stdlib.h>

void main()
{
int a,b=0,rem;
printf("Enter a number");
scanf("%d",&a);
for(int i=1;a>0;i++)
    {
        rem=a%10;
        b=b+rem;
        a=a/10;
    }
printf("\n The add is %d",b);
}

//reverse number
#include<stdio.h>
void main()
{
    int a,rem=0,rev=0;
    printf("Enter the number to get it's reverser");
    scanf("%d",&a);
    while(a>0)
    {
        rem=a%10;
        rev=(rev*10)+rem;
        a=a/10;
    }
    printf("\n the reverse is %d",rev);
}

// decimal to binary conversion
#include<stdio.h>
void main()
{
    int dec,bin[50],i=0;
    printf("Enter any decimal number ");
    scanf("%d",&dec);
    while(dec!=0)
    {
        bin[i]=dec%2;
        i++;
        dec=dec/2;
    }
    printf("\n");
    for(i=(i-1);i>=0;i--)
    {
        printf("%d",bin[i]);
    }
}

// hexadecimal to octal conversion with indirect method( we are going to convert hex into binary and then binary to octal)
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i=0, chk=0, len, rem, binDigit, octalDigit;
    long long  binaryInt=0, temp=1, octalNum;
    char hexdec[11], binnum[40]="";
    printf("Enter Hexadecimal Number: ");
    gets(hexdec);
    while(hexdec[i])
    {
        switch(hexdec[i])
        {
            case '0':
                strcat(binnum, "0000");
                break;
            case '1':
                strcat(binnum, "0001");
                break;
            case '2':
                strcat(binnum, "0010");
                break;
            case '3':
                strcat(binnum, "0011");
                break;
            case '4':
                strcat(binnum, "0100");
                break;
            case '5':
                strcat(binnum, "0101");
                break;
            case '6':
                strcat(binnum, "0110");
                break;
            case '7':
                strcat(binnum, "0111");
                break;
            case '8':
                strcat(binnum, "1000");
                break;
            case '9':
                strcat(binnum, "1001");
                break;
            case 'A':
                strcat(binnum, "1010");
                break;
            case 'a':
                strcat(binnum, "1010");
                break;
            case 'B':
                strcat(binnum, "1011");
                break;
            case 'b':
                strcat(binnum, "1011");
                break;
            case 'C':
                strcat(binnum, "1100");
                break;
            case 'c':
                strcat(binnum, "1100");
                break;
            case 'D':
                strcat(binnum, "1101");
                break;
            case 'd':
                strcat(binnum, "1101");
                break;
            case 'E':
                strcat(binnum, "1110");
                break;
            case 'e':
                strcat(binnum, "1110");
                break;
            case 'F':
                strcat(binnum, "1111");
                break;
            case 'f':
                strcat(binnum, "1111");
                break;
            default:
                chk = 1;
                break;
        }
        i++;
    }
    if(chk==0)
    {
        len = strlen(binnum);
        while(len!=0)
        {
            if(binnum[len-1]=='0')
                binDigit=0;
            else
                binDigit=1;
            binaryInt = binaryInt + (binDigit*temp);
            temp = temp*10;
            len--;
        }
        
        octalNum = 0;
        temp = 1;
        while(binaryInt>0)
        {
            rem = binaryInt%1000;
            switch(rem)
            {
                case 0:
                    octalDigit = 0;
                    break;
                case 1:
                    octalDigit = 1;
                    break;
                case 10:
                    octalDigit = 2;
                    break;
                case 11:
                    octalDigit = 3;
                    break;
                case 100:
                    octalDigit = 4;
                    break;
                case 101:
                    octalDigit = 5;
                    break;
                case 110:
                    octalDigit = 6;
                    break;
                case 111:
                    octalDigit = 7;
                    break;
            }
            octalNum = (octalDigit*temp) + octalNum;
            binaryInt = binaryInt/1000;
            temp = temp*10;
        }
        printf("\nEquivalent Octal Value = %lld", octalNum);
    }
    else
        printf("\nInvalid Hexadecimal Character/Digit");
    getch();
    return 0;
}*/

#include<stdio.h>
void dmain() // Renamed dmain,because using it in datatype.cpp program 
{
    int a,b;
    printf("ENter no. of rows you want");
    scanf("%d",&a);
    for(int i=a;i>=1;i--)
    {
        for(b=a;b>=1;b--)
        {
            if(b==1||b==a||i==a/2+1)
            {
            printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\t\t\n\n");
        for(int i=a;i>=1;i--)
    {
        for(b=a;b>=1;b--)
        {
            if(b==1||b==a||i==1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    printf("\t\t\n\n");
        for(int i=a;i>=1;i--)
    {
        for(b=a;b>=1;b--)
        {
            if(b==a||i==1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}