#include<stdio.h>

int main()
{
    int b;
    scanf("%d",&b);
    while(b--)
    {
        char q[4],p[4],r[4];
    int j=0;
        scanf("%s %s %s",q,p,r);
        if(q[1]=='l'&&p[1]=='l'&&p[2]=='l')
            j=1;
        if(q[0]=='l'&&p[0]=='l'&&p[1]=='l')
            j=1;
        if(p[0]=='l'&&r[0]=='l'&&r[1]=='l')
            j=1;
        if(p[1]=='l'&&r[1]=='l'&&r[2]=='l')
            j=1;


    if(j==1)
        printf("yes\n");
    else
        printf("no\n");

    }
 return 0;
 }