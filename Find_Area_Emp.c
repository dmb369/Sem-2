//Write a c program which accepts ‘N’employee details like eid,ename, salary ,address.
//Display the employee names and id belonging to a particular area.

#include <stdio.h>
#include <string.h>

struct emp
{
    int eid;
    char ename[20];
    float salary;
    char eaddress[20];
};

int main()
{
    int n;
    scanf("%d",&n);
    struct emp e[n];
    
    for (int i=0; i<n; i++)
    {
        scanf("%d %s %f %s", &e[i].eid, e[i].ename, &e[i].salary, e[i].eaddress);
    }
    
    for (int i=0; i<n; i++)
    {
        printf("%d %s %f %s\n", e[i].eid, e[i].ename, e[i].salary, e[i].eaddress);
    }
    
    char key[20];
    printf("Enter the area to find the employees belong to that area:");
    scanf("%s",key);
    
    for (int i=0; i<n; i++)
    {
        if (strcmp(e[i].eaddress,key)==0) 
        printf("Name=%s Empid=%d\n", e[i].ename, e[i].eid);
    }
    
    return 0;
    
}
