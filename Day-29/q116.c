#include<stdio.h>

struct product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct product p[100];
    int n=0,choice,i,id,flag,newquantity;

    while(1)
    {
        printf("\n========== INVENTORY MANAGEMENT ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:

                printf("Enter Product ID: ");
                scanf("%d",&p[n].id);

                printf("Enter Product Name: ");
                scanf("%s",p[n].name);

                printf("Enter Quantity: ");
                scanf("%d",&p[n].quantity);

                printf("Enter Price: ");
                scanf("%f",&p[n].price);

                n++;

                printf("Product Added Successfully.\n");
                break;

            case 2:

                if(n==0)
                {
                    printf("No Products Available.\n");
                }
                else
                {
                    printf("\nID\tNAME\tQUANTITY\tPRICE\n");

                    for(i=0;i<n;i++)
                    {
                        printf("%d\t%s\t%d\t\t%.2f\n",
                        p[i].id,
                        p[i].name,
                        p[i].quantity,
                        p[i].price);
                    }
                }

                break;

            case 3:

                printf("Enter Product ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        printf("\nProduct Found\n");
                        printf("ID : %d\n",p[i].id);
                        printf("Name : %s\n",p[i].name);
                        printf("Quantity : %d\n",p[i].quantity);
                        printf("Price : %.2f\n",p[i].price);

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Product Not Found.\n");
                }

                break;

            case 4:

                printf("Enter Product ID: ");
                scanf("%d",&id);

                flag=0;

                for(i=0;i<n;i++)
                {
                    if(p[i].id==id)
                    {
                        printf("Enter New Quantity: ");
                        scanf("%d",&newquantity);

                        p[i].quantity=newquantity;

                        printf("Quantity Updated Successfully.\n");

                        flag=1;
                        break;
                    }
                }

                if(flag==0)
                {
                    printf("Product Not Found.\n");
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