#include <stdio.h>

int main(){
   int arraysize = read_array_size();
   validate_array_size(arraysize);
   
}

int read_array_size(size){
    int size;
    printf("enter the array size[>4]");
    scanf("%d",& size);
    return size;
}

int validate_array_size(int array_size ){
    if(array_size>=4){
        return 1;
    }
    else{
        return 0;
    }
}



