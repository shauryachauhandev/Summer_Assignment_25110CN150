#include<stdio.h>
#include<string.h>

struct patient
{
    int patientid;
    char name[50];
    int age;
    char disease[50];
};

int main()
{
    struct patient p[100];
    int n=0,choice,i,id,flag;

    while(1)
    {
        printf("\n========== HOSPITAL MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Disease\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Patient ID: ");
                scanf("%d",&p[n].patientid);

                printf("Enter Patient Name: ");
                scanf("%s",p[n].name);

                printf("Enter Age: ");
                scanf("%d",&p[n].age);

                printf("Enter Disease: ");
                scanf("%s",p[n].disease);

                n++;

                printf("Patient Added Successfully.\n");
                break;

            case 2:

                if(n==0)
                {
                    printf("No Patient Records Found.\n");
                }
                else
                {
                    printf("\nID\tNAME\tAGE\tDISEASE\n");

                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%d\t%s\n",
                        p[i].patientid,
                        p[i].name,
                        p[i].age,
                        p[i].disease);
                    }
                }

                break;

            case 3:

                printf("Enter Patient ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].patientid==id)
                    {
                        printf("\nPatient Found\n");
                        printf("Patient ID : %d\n",p[i].patientid);
                        printf("Name : %s\n",p[i].name);
                        printf("Age : %d\n",p[i].age);
                        printf("Disease : %s\n",p[i].disease);

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Patient Not Found.\n");
                }

                break;

            case 4:

                printf("Enter Patient ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].patientid==id)
                    {
                        printf("Enter New Disease: ");
                        scanf("%s",p[i].disease);

                        printf("Disease Updated Successfully.\n");

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Patient Not Found.\n");
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