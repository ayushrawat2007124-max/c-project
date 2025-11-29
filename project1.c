#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void format_time(long seconds)
 {
    int h=seconds/3600;
    int m=(seconds%3600)/60;
    int s=seconds%60;
    printf("Elapsed Time=%02d:%02d:%02d\n",h,m,s);
}
int main()
{
    int choice;
    time_t start_time,end_time;
    long elapsed;
    while (1) 
    {
        printf("\nSTOPWATCH MENU\n");
        printf("1.Start Stopwatch\n");
        printf("2.Exit\n");
        printf("Select=");
        scanf("%d",&choice);
        if(choice==1) 
        {
            printf("\nStopwatch start...(Press ENTER to start)\n");
            getchar();
            getchar(); 
            start_time=time(NULL);
            printf("Stopwatch running...Press ENTER to stop.\n");
            getchar();
            end_time=time(NULL);
            elapsed=(long)(end_time - start_time);
            format_time(elapsed);
        }
        else if(choice==2) 
        {
            printf("Goodbye!\n");
            break;
        }
        else 
        {
            printf("Invalid choice.Try again.\n");
        }
    }
    return 0;
}
