// Write a C program to read roll no, name and marks of ‘N’ students in structures and  display the records of students merit wise.

#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    int score;
};

void main()
{
    int n;
    scanf("%d",&n);
    
    struct student s[n], temp;
    
    for (int i=0; i<n; i++)
    {
        scanf("%d %s %d",&s[i].rollno, s[i].name, &s[i].score);
    }
    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if (s[i].score<s[j].score)
            {
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;
            }
        }
    }
    
    for (int i=0; i<n; i++)
    {
        printf("%d %s %d\n",s[i].rollno, s[i].name, s[i].score);
    }
    
    return 0;
}