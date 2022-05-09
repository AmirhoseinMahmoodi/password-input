#include<stdio.h>

void main()
{
    char finalChar[41] ;
    char pass_Char ;
    int   pass_Counter = 0 , loop_counter1 = 0;
    int coplexity_Value ;
    int loop_counter2 ;
    int loop_counter ;
    for(loop_counter2 = 0 ; loop_counter2 < 1 ; loop_counter2++)
    {
        printf("Enter your new password up to 40 characters\nTry to set a ");
        printf("complicated password using numbers , capital and small letters , and special characters(At least 8 characters):");
        loop_counter = 0 ;
        while ((pass_Char = _getch()) != 13 )
        {
            if(pass_Char == 8)
            {
                if(pass_Counter != 0)
                {
                    loop_counter--;
                    pass_Counter--;
                }
                system("cls");
                printf("Enter your new password up to 40 characters\nTry to set a ");
                printf("complicated password using numbers , capital and small letters , and special characters(At least 8 characters):");
                for (loop_counter1 = 0 ; loop_counter1 < pass_Counter ; loop_counter1++)
                {
                    printf("*");
                }
            }
            else
            {
                pass_Counter++;
                system("cls");
                printf("Enter your new password up to 40 characters\nTry to set a ");
                printf("complicated password using numbers , capital and small letters , and special characters(At least 8 characters):");
                for (loop_counter1 = 0 ; loop_counter1 < pass_Counter ; loop_counter1++)
                {
                    printf("*");
                }
                loop_counter++;
            }
        }
    }
}
