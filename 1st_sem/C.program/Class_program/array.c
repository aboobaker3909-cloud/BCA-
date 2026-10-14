#include <stdio.h>

int read_array_size(){
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
    
int main(){
    int arraysize = read_array_size();
    int isvalid = validate_array_size(arraysize);
    while(isvalid==0){
        printf("ARRAY SIZE SHOULE BE >4\n");
         arraysize = read_array_size();
         isvalid = validate_array_size(arraysize);
    }
                                                                                                                                                                                                                                                                                                                                                                           
}




