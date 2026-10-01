#include <stdio.h>
int main(){


 int math;
 int python;
 int DBMS;
 int i;

    for(i=1; i<=3; i++){
        printf("enter the data of %d student\n", i);
        printf("enter the mark of math :");
        scanf("%d", &math);

        printf("enter the mark of python :");
        scanf("%d", &python);

        printf("enter the mark of DBMS :");
        scanf("%d" , &DBMS);
        
        printf("the mark of %d student is :\n", i);
        printf("math : %d\n" , math);
        printf("python : %d\n" , python);
        printf("DBMS : %d\n" , DBMS);

    }

    

}

   
 

        