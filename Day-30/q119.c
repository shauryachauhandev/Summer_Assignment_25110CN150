#include<stdio.h>
#include<string.h>

struct employee
{
    int empid;
    char name[50];
    char department[50];
    float salary;
};

int main()
{
    struct employee e[100];
    int n=0,choice,i,id,flag;
    float newsalary;

    while(1)
    {
        printf("\n========== EMPLOYEE MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Employee ID: ");
                scanf("%d",&e[n].empid);

                printf("Enter Employee Name: ");
                scanf("%s",e[n].name);

                printf("Enter Department: ");
                scanf("%s",e[n].department);

                printf("Enter Salary: ");
                scanf("%f",&e[n].salary);

                n++;

                printf("Employee Added Successfully.\n");
                break;

            case 2:

                if(n==0)
                {
                    printf("No Employee Records Found.\n");
                }
                else
                {
                    printf("\nID\tNAME\tDEPARTMENT\tSALARY\n");

                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%s\t\t%.2f\n",
                        e[i].empid,
                        e[i].name,
                        e[i].department,
                        e[i].salary);
                    }
                }

                break;

            case 3:

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(e[i].empid==id)
                    {
                        printf("\nEmployee Found\n");
                        printf("Employee ID : %d\n",e[i].empid);
                        printf("Name : %s\n",e[i].name);
                        printf("Department : %s\n",e[i].department);
                        printf("Salary : %.2f\n",e[i].salary);

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Employee Not Found.\n");
                }

                break;

            case 4:

                printf("Enter Employee ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(e[i].empid==id)
                    {
                        printf("Enter New Salary: ");
                        scanf("%f",&newsalary);

                        e[i].salary=newsalary;

                        printf("Salary Updated Successfully.\n");

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Employee Not Found.\n");
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