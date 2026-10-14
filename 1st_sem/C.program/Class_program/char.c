#include <stdio.h>
#include <string.h>
int main(){

char name[10] = " ";
char sentence[100] = " ";
printf("enter your name ");
scanf(" %11s", &name);
printf("your name is: %s \n ",name);


//printf("enter a sentence :\n");
//fgets(sentence , sizeof(sentence) , stdin);
//printf("your sentence is : %s", sentence);

char word[] = "program";
for (int i = 0; word[i] != '\0'; i++){
    printf("word[%d] = %c\n",  i , word[i]);
}


}