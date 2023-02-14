// Write a C program that reads a number (in a hexadecimal system) as input. 
// And converts it into its equivalent binary value, using pointers. 

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char a[n], *hexdec;
    hexdec=a;
    scanf("%s",hexdec);
    
    for ( int i=0; hexdec[i]!='\0'; i++)
    {
        if (hexdec[i]=='0') { printf("0000"); }
        else if (hexdec[i]=='1') { printf("0001"); }
        else if (hexdec[i]=='2') { printf("0010"); }
        else if (hexdec[i]=='3') { printf("0011"); }
        else if (hexdec[i]=='4') { printf("0100"); }
        else if (hexdec[i]=='5') { printf("0101"); }
        else if (hexdec[i]=='6') { printf("0110"); }
        else if (hexdec[i]=='7') { printf("0111"); }
        else if (hexdec[i]=='8') { printf("1000"); }
        else if (hexdec[i]=='9') { printf("1001"); }
        else if (hexdec[i]=='A' || hexdec[i]=='a') { printf("1010"); }
        else if (hexdec[i]=='B' || hexdec[i]=='b') { printf("1011"); }
        else if (hexdec[i]=='C' || hexdec[i]=='c') { printf("1100"); }
        else if (hexdec[i]=='D' || hexdec[i]=='d') { printf("1101"); }
        else if (hexdec[i]=='E' || hexdec[i]=='e') { printf("1110"); }
        else { printf("1111"); }
    }

    return 0;

}


