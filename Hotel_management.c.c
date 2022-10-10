#include<stdio.h>
int gym();
int room();
int dining();
int play();
int main()
{
    printf("\n\t\tWELCOME TO THE RESTRAUNT HOPE YOU ENJOYED IT!!!\n");
    int var=gym();
    int var1=room();
    int var2=dining();
    int var3=play();
    printf("\nYour total bill is generated here!!!\n");
    printf("\nTOTAL BILL IS:  %d",var+var1+var2+var3);
    printf("\n...ENJOY YOUR SERVCES....\n");
    return 0;
}
int gym()
{
    int Rs=600,v;
    printf("\n\t***TRAIN ALONG WITH GYM TRAINEE AND GET FIT***\n");
    printf("\nAre You interested in joining GYM \nSelect your option \n");
    printf("1.YES \n2.NO\n\n");
    label1:
    scanf("%d",&v);
    switch(v)
    {
        case 1 :
                printf("\nGym facility is added\n");
                printf("\nYour Gym charges is %d",Rs);
                break;
        case 2 :
                printf("\nGym facility is not added\n");
                Rs=0;
                break;
        default:
                printf("\nYou have selected the wrong option\n Please select the valid option\n");
                goto label1;
    }
    
    return Rs;
}
int room()
{
    int days,hours,weeks,months,val,h1,m1,d1,w1;
    printf("\n\t***WELCOME TO THE ROOM SECTION BILLING***");
    label:
    printf("\nPlease select the choice:\n1.Weeks\n2.Days\n3.Hours\n4.Months\n");
    scanf("%d",&val);
    switch(val)
    {
        case 1 :
                printf("\nYOU ARE SELECTED THE WEEKS SECTION\n");
                printf("\nEnter your total number of weeks to spend in our Restraunt:\n");
                scanf("%d",&weeks);
                w1=weeks*7000;
                printf("\nYOUR TOTAL AMOUNT FOR ROOM IS %d \n",w1);
                return w1;
                break;
        case 2 :
                printf("\nYOU ARE SELECTED THE DAYS SECTION\n");
                printf("\nEnter your total number of days to spend in our Restraunt:\n");
                scanf("%d",&days);
                d1=days*1000;
                printf("\nYOUR TOTAL AMOUNT FOR ROOM IS %d \n",d1);
                return d1;
                break;
        case 3 :
                printf("\nYOU ARE SELECTED THE HOURS SECTION\n");
                printf("\nEnter your total number of hours to spend in our Restraunt:\n");
                scanf("%d",&hours);
                h1=hours*50;
                printf("\nYOUR TOTAL AMOUNT FOR ROOM IS %d \n",h1);
                return h1;
                break;
        case 4 :
                printf("\nYOU ARE SELECTED THE MONTHS SECTION\n");
                printf("\nEnter your total number of months to spend in our Restraunt:\n");
                scanf("%d",&months);
                m1=months*28000;
                printf("\nYOUR TOTAL AMOUNT FOR ROOM IS %d \n",m1);
                 return m1;
                break;
        default  :
                printf("\nPLEASE ENTER THE VALID INPUT (1-4)\n");
                goto label;

    }
}
int dining()
{
    int g,o;
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    printf("\n***WELCOME TO DINING SECTION***\n");
    printf("\nDo you want food services?\n1.YES\n2.NO\n");
    label3:
    scanf("%d",&o);
        switch(o)
        {
            case 1:
                    printf("\nYou have selected the food services\n");
                    printf("\n1.BREAKFAST\n2.LUNCH\n3.SNACKS\n4.DINNER\n5.COMBO PACK");
                    printf("\nPlease select the choice (UNLIMITED)\n");
                    label2:
                    scanf("%d",&g);
                    switch(g)
                        {
                            case 1:
                                printf("\nBREAKFAST is selected....\n");
                                p1=500;
                                printf("Breakfast price is %d\n",p1);
                                return p1=500;
                                break;
                            case 2:
                                printf("\nLUNCH is selected....\n");
                                p2=1000;
                                printf("Lunch price is %d\n",p2);
                                return p2=1000;
                                break;
                            case 3:
                                printf("\nSNACKS is selected....\n");
                                p3=300;
                                printf("Snacks price is %d\n",p3);
                                return p3=300;
                                break;
                            case 4:
                                printf("\nDINNER is selected....\n");
                                p4=900;
                                printf("Dinner price is %d\n",p4);
                                return p4=900;
                                break;
                            case 5:
                                printf("\nCOMBO is selected....\n");
                                p5=2500;
                                printf("Combo price is %d\n",p5);
                                return p5=2500;
                                break;
                            default:
                                printf("\nPlease enter the valid option\n");
                                goto label2;
                        }
                    break;
            case 2:
                    printf("\nYou haven't selected the food services\n");
                    break;
            default:
                    printf("\nYou have selected the incorrect option\n");
                    printf("\nPlease re-enter the correct option\n");
                    goto label3;
                }
}
int play()
{
    int m,a1;
    printf("\n***WELCOME TO GAMES SECTION***\n");
    printf("\nAre you interested in playing games\n1.YES\n2.NO\n");
    label4:
    scanf("%d",&m);
    switch (m)
    {
    case 1:
        printf("\nYou are interested\n");
        printf("\nThere are many games like\n a.Carrom Board\nb.Tennis\nc.Chess\nd.Casino\ne.VR games\n");
        printf("\nDo you confirm to play the games\n1.YES\n2.NO\n");
        label5:
        scanf("%d",&a1);
            switch(a1)
            {
                case 1:
                    printf("\nYou have confirmed\n");
                    int f1=250;
                    printf("\nThe price for games is %d",f1);
                    return f1=250;
                    break;
                case 2:
                    printf("\nYou have not confirmed\n");
                    break;
                default:
                    printf("\nPlease enter the valid input to process\n");
                    goto label5;
            }
        break;
    case 2:
        printf("\n You are not interested\n");
        break;
    default:
        printf("Please enter the valid choices");
        goto label4;
    }
}