#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
struct student 
{
int roll;
char name[20];
int marks;
};
struct student s[5];
void main()
{
int i, k,m,n;
char search[20],com[20], user[20], *pass[20];
user:
printf("enter user id=");
scanf("%s",&user);
*pass=getpass("enter password= ");
if((strcmp(user,"admin")==0)&&(strcmp(*pass,"admin")==0)){
    printf("Enter information:\n");
        for(i=0;i<=4;i++)
        {
        s[i].roll=i+1;
        printf("Enter name=");
        scanf("%s",&s[i].name);
        printf("Enter marks=");
        scanf("%d",&s[i].marks);
        }
data:
printf("Roll no.\tName\t\tMarks\n");
    for(i=0;i<=4;i++)
    {
    printf("%d\t\t%s\t\t%d\n",s[i].roll,s[i].name,s[i].marks);
    }



do
    {
    printf("\ncommand==>");
    scanf("%s",com);
        if(strcmp(com,"data")==0)
        {
        goto data;
        }

    else if(strcmp(com,"search")==0)
    {
    printf("search==>");
    scanf("%s",&search);
    printf("\nRoll no.\tName\t\tMarks\n");
        for(i=0;i<=4;i++) 
        {
        k=strcmp(search,s[i].name);
            if(k==0)
            {  
            printf("%d\t\t%s\t\t%d\n",s[i].roll,s[i].name,s[i].marks);
            }
            else
            {
            m=1;
            }
        }
        if(m==1)
        {
        printf("Not found");
        }
        }
    else if(strcmp(com,"sort")==0)
    {
        if(strcmp(com,"exit")!=0)
        {
        printf("enter marks for sorting==>");
        scanf("%d",&n);
        printf("\nRoll no.\tName\t\tMarks\n");
            for(i=0;i<=4;i++)
            {
                if(s[i].marks>=n)
                {
                printf("%d\t\t%s\t\t%d\n",s[i].roll,s[i].name,s[i].marks);
                }
            }
        }
    }
    else if(strcmp(com,"logout")==0)
    {
    goto user;
    }
    else
    {
        if(strcmp(com,"exit")!=0)
        {
        printf("command not found");
        }
    }
 }while(strcmp(com,"exit")!=0);
}
    else
    {
    printf("Wrong userid or password\n");
    goto user;
    }
}
