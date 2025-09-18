#include <stdio.h>
int main()
{
    int Age;
    char Eyesight, WrittenTest, DrivingTest, MedicalFitnessCertificate;
    printf("Enter your Age.\n");
    scanf("%d", &Age);
   if (Age<18)
   {
    printf("you are ineligible for a driver's license.");
   }
   else
   {
    printf("Enter P if you passed your Eyesight Test and F if you failed.\n");
    scanf(" %c", &Eyesight);

    if (Eyesight != 'P')
    {
        printf("you are ineligible for a driver's license.");
    }
    else
    {
        printf("Enter P if you passed your Written Test and F if you failed.\n");
        scanf(" %c", &WrittenTest);

        if (WrittenTest != 'P')
        {
            printf("you are ineligible for a driver's license.");
        }
        else
        {
            printf("Enter P if you passed your Driving Test and F if you failed.\n");
            scanf(" %c", &DrivingTest);

            if (DrivingTest != 'P')
            {
                printf("you are ineligible for a driver's license.");
            }
            else if (Age>60)
            {            
                printf("Enter Y if you have a Medical Fitness Certificate and N if not.\n");
                scanf(" %c", &MedicalFitnessCertificate);

                if (MedicalFitnessCertificate != 'Y')
                {
                    printf("you are ineligible for a driver's license.");
                }
                else
                {
                    printf("you are Eligible for a driver's license.");
                }
                
            }
            else
            {
                printf("you are Eligible for a driver's license.");
            }
            
            
            
        }
        
    }
    
   }
return 0;
}