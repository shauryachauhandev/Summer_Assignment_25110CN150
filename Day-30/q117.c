#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[50];
    int marks;
};

int main()
{
    struct student s[100];
    int n=0,choice,i,roll,flag,newmarks;

    while(1)
    {
        printf("\n========== STUDENT RECORD SYSTEM ==========\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Roll Number: ");
                scanf("%d",&s[n].rollno);

                printf("Enter Name: ");
                scanf("%s",s[n].name);

                printf("Enter Marks: ");
                scanf("%d",&s[n].marks);

                n++;

                printf("Student Added Successfully.\n");
                break;

            case 2:

                if(n==0)
                {
                    printf("No Student Records Found.\n");
                }
                else
                {
                    printf("\nROLL NO\tNAME\tMARKS\n");

                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%d\n",
                        s[i].rollno,
                        s[i].name,
                        s[i].marks);
                    }
                }

                break;

            case 3:

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(s[i].rollno==roll)
                    {
                        printf("\nStudent Found\n");
                        printf("Roll No : %d\n",s[i].rollno);
                        printf("Name : %s\n",s[i].name);
                        printf("Marks : %d\n",s[i].marks);

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Student Not Found.\n");
                }

                break;

            case 4:

                printf("Enter Roll Number: ");
                scanf("%d",&roll);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(s[i].rollno==roll)
                    {
                        printf("Enter New Marks: ");
                        scanf("%d",&newmarks);

                        s[i].marks=newmarks;

                        printf("Marks Updated Successfully.\n");

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Student Not Found.\n");
                }

                break;

            case 5:

                printf("Thank You.\n");
                return 0;

            default:

                printf("Invalid Choice.\n");
        }
    }

    return 0;
}