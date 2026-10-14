#include <stdio.h>

/* ---------- Arrays to store the data (global, so every function can use them) ---------- */
int   roll[5];          /* roll number of 5 students            */
char  name[5][20];      /* name of 5 students                   */
int   marks[5][5];      /* marks[student][subject]              */
int   total[5];         /* total of each student                */
float average[5];       /* average of each student              */
float percentage[5];    /* percentage of each student           */
int   result[5];        /* 1 = PASS, 0 = FAIL for each student  */


/* Function 1: take input from the user */
void readData()
{
    int i, j;

    for (i = 0; i < 5; i++)                 /* loop for 5 students */
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        for (j = 0; j < 5; j++)             /* loop for 5 subjects */
        {
            printf("Marks in subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}


/* Function 2: find total marks */
void findTotal()
{
    int i, j;

    for (i = 0; i < 5; i++)
    {
        total[i] = 0;                       /* start from 0 for each student */

        for (j = 0; j < 5; j++)
        {
            total[i] = total[i] + marks[i][j];
        }
    }
}


/* Function 3: find average */
void findAverage()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        average[i] = total[i] / 5.0;
    }
}


/* Function 4: find percentage */
void findPercentage()
{
    int i;

    for (i = 0; i < 5; i++)
    {
        percentage[i] = total[i] / 500.0 * 100;
    }
}


/* Function 5: find result (PASS / FAIL) */
void findResult()
{
    int i, j;
    int flag;       /* flag = 0 means pass, flag = 1 means fail */

    for (i = 0; i < 5; i++)
    {
        flag = 0;

        for (j = 0; j < 5; j++)
        {
            if (marks[i][j] < 35)           /* any subject below 35 -> fail */
            {
                flag = 1;
            }
        }

        if (flag == 0)
            result[i] = 1;                  /* 1 means PASS */
        else
            result[i] = 0;                  /* 0 means FAIL */
    }
}


/* Function 6: print the result table */
void printTable()
{
    int i, j;

    printf("\n\nRESULT SHEET\n");
    printf("Roll\tName\tS1\tS2\tS3\tS4\tS5\tTotal\tAvg\tPercent\tResult\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d\t", roll[i]);
        printf("%s\t", name[i]);

        for (j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
        }

        printf("%d\t", total[i]);
        printf("%.2f\t", average[i]);
        printf("%.2f\t", percentage[i]);

        if (result[i] == 1)
            printf("PASS");
        else
            printf("FAIL");

        printf("\n");
    }
}


/* Main function: just calls the other functions one by one */
int main()
{
    readData();
    findTotal();
    findAverage();
    findPercentage();
    findResult();
    printTable();

    return 0;
}
