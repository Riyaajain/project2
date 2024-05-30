#include<stdio.h>
int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int pt1, pt2, pt3, pt4, pt5, pt6, pt7, pt8, pt9, p10;
    int pt01, pt02, pt03, pt04, pt05, pt06, pt07, pt08, pt09, p010;
    int total1, total2, total3;
    printf("Welcome to the game\n\n");
    printf("> Press 7 to start the game\n");
    printf("> Press 0 to quit the game\n");
    scanf("%d",&i);
    if(i==7)
    {
        printf("The game has started\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid");
    }
    if(i==7)
    {
        printf("1) Who is the CEO of Google?\n\n");
        printf("a) Satya Nadella\n");
        printf("b) Sundar Pichai\n");
        printf("c) Neal Mohan\n");
        printf("d) Srini Pallia\n");
        printf("\n");
        printf("Enter your answer:");
        scanf("%d",&ans1);
        printf("\n");
        if(ans1==2)
        {
            printf("Correct answer\n");
            printf("\n");
            pt1 = 5;
            printf("You have scored %d point\n", pt1);
	    printf("\n");
        }
        else
        {
            printf("Wrong answer\n");
            printf("\n");
            pt01 = 0;
            printf("You have scored %d point\n", pt01);
	    printf("\n");
            printf("The correct ans is Sundar Pichai (option 2)");
	    printf("\n");
        }
	printf("\n");
        printf("2) Which is the first programming language invented ?\n\n");
        printf("a) C \n");
        printf("b) C++ \n");
        printf("c) Java \n");
        printf("d) Fortran \n");
        printf("\n");
        printf("Enter your answer:");
        scanf("%d",&ans2);
        printf("\n");
        if(ans2==4)
        {
            printf("Correct answer\n");
            printf("\n");
            pt2 = 5;
            printf("You have scored %d point\n", pt2);
	    printf("\n");
        }
        else
        {
            printf("Wrong answer\n");
            printf("\n");
            pt02 = 0;
            printf("You have scored %d point\n", pt02);
	    printf("\n");
            printf("The correct ans is Fortran (option 4)");
	    printf("\n");
        }
	printf("\n");
        printf("3) First computer virus is known as?\n\n");
        printf("a) Rabbit\n");
        printf("b) Creeper virus\n");
        printf("c) Elk cloner\n");
        printf("d) SCA virus\n");
        printf("\n");
        printf("Enter your answer:");
        scanf("%d",&ans3);
        printf("\n");
        if(ans3==2)
        {
            printf("Correct answer\n");
            printf("\n");
            pt3 = 5;
            printf("You have scored %d point\n", pt3);
	    printf("\n");
        }
        else
        {
            printf("Wrong answer\n");
            printf("\n");
            pt03 = 0;
            printf("You have scored %d point\n", pt03);
	    printf("\n");
            printf("The correct ans is Creeper virus (option 2)");
	    printf("\n");
        }
	printf("\n");
        printf("4) Which of the following is not a web browser?\n\n");
        printf("a) Mosaic\n");
        printf("b) WWW\n");
        printf("c) Facebook\n");
        printf("d) Netscape navigator\n");
        printf("\n");
        printf("Enter your answer:");
        scanf("%d",&ans4);
        printf("\n");
        if(ans4==3)
        {
            printf("Correct answer\n");
            printf("\n");
            pt4 = 5;
            printf("You have scored %d point\n", pt4);
	    printf("\n");
        }
        else
        {
            printf("Wrong answer\n");
            printf("\n");
            pt04 = 0;
            printf("You have scored %d point\n", pt04);
	    printf("\n");
            printf("The correct ans is Facebook (option3)");
	    printf("\n");
        }
	printf("\n");
        printf("5) Which of the following is not a database management software?\n\n");
        printf("a) Mysql\n");
        printf("b) Oracle\n");
        printf("c) Cobal\n");
        printf("d) Sybase\n");
        printf("\n");
        printf("Enter your answer:");
        scanf("%d",&ans5);
        printf("\n");
        if(ans5==3)
        {
            printf("Correct answer\n");
            printf("\n");
            pt5 = 5;
            printf("You have scored %d point\n", pt5);
        }
        else
        {
            printf("Wrong answer\n");
            printf("\n");
            pt05 = 0;
            printf("You have scored %d point\n", pt05);
	    printf("\n");
            printf("The correct ans is Cobal(option 3)");
        }
    }
}