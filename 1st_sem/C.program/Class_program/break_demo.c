#include <stdio.h>
int main() {
for(int j=0; j<5; j=j+1){
    printf("loop started\n");
    for(int i=0; i<5; i=i+1){
        printf("inner loop started\n");
        break;
        printf("from inner loop\n");


    }
    break;
    printf("from outer loop\n");


}
printf("program terminated");




}