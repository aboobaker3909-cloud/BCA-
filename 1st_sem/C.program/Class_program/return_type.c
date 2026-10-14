#include <stdio.h>
int rollNumber;
float marks1, marks2, marks3, marks4, marks5;
float total, average, cgpa;
void getstudentdata(){
// Input roll number and marks
printf("Enter Roll Number: ");
scanf("%d", &rollNumber);
printf("Enter marks in 5 subjects:\n");
printf("Subject 1: ");
scanf("%f", &marks1);
printf("Subject 2: ");
scanf("%f", &marks2);
printf("Subject 3: ");
scanf("%f", &marks3);
printf("Subject 4: ");
scanf("%f", &marks4);
printf("Subject 5: ");
scanf("%f", &marks5);}


float getTotal(float m1 , float m2, float m3, float m4 , float m5){
// Calculate total and average
total = m1 + m2 + m3 + m4 + m5;
return total;
}


void getAverage(){
average = total / 5;
}


void getCGPA(){
// Convert average to CGPA
cgpa = average / 9.5;
}


void displayStudentDetails(){
// Display results
printf("\n--- Student CGPA Report ---\n");
printf("Roll Number : %d\n", rollNumber);
printf("Total Marks : %.2f\n", total);
printf("Average : %.2f\n", average);
printf("CGPA : %.2f\n", cgpa);
}


int main() {

    getstudentdata();
    float total=getTotal(80 , 75 , 90 , 60 , 85);
    getAverage();
    getCGPA();
    displayStudentDetails();

}