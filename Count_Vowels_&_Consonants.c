//Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    char a[n], *ptr;
    ptr=a;
    
    int count_v=0, count_c=0;
    
    scanf("%s", ptr);

    
    for (int i=0; ptr[i]!='\0'; i++)
    {
        if (ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I' || ptr[i]=='O' || ptr[i]=='U' || ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i' || ptr[i]=='o' || ptr[i]=='u') { count_v++; }
        else { count_c++; }
    }
    
    printf("The number of vowels in the string is %d.\n",count_v);
    printf("The number of consonants in the string is %d.\n",count_c);
    
    return 0;
}