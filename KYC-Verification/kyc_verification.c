#include <stdio.h>

int main()
{
    int pan[3] = {101,102,103};
    int aadhar[3] = {201,202,203};
    int aadharID[3] = {301,302,303};
    int drivingLicense[3] = {401,402,403};
    int passport[3] = {501,502,503};

    int i,inputID,choice;
    int size = 3;

    printf("WELCOME TO KYC VERIFICATION\n");

    printf("\n1. PAN Number");
    printf("\n2. Aadhar Number");
    printf("\n3. Aadhar ID");
    printf("\n4. Driving License");
    printf("\n5. Passport");

    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    printf("\nEnter your ID: ");
    scanf("%d",&inputID);

    int verified = 0;   // flag

    switch(choice)
    {
        case 1:
            for(i=0;i<size;i++)
            {
                if(inputID==pan[i])
                {
                    verified=1;
                    break;
                }
            }
            break;

        case 2:
            for(i=0;i<size;i++)
            {
                if(inputID==aadhar[i])
                {
                    verified=1;
                    break;
                }
            }
            break;

        case 3:
            for(i=0;i<size;i++)
            {
                if(inputID==aadharID[i])
                {
                    verified=1;
                    break;
                }
            }
            break;

        case 4:
            for(i=0;i<size;i++)
            {
                if(inputID==drivingLicense[i])
                {
                    verified=1;
                    break;
                }
            }
            break;

        case 5:
            for(i=0;i<size;i++)
            {
                if(inputID==passport[i])
                {
                    verified=1;
                    break;
                }
            }
            break;

        default:
            printf("\nInvalid choice");
            return 0;
    }

    if(verified==1)
        printf("\nIndividual is VERIFIED");
    else
        printf("\nIndividual is NOT VERIFIED");

    return 0;
}
