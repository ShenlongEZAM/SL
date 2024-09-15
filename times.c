#include <stdio.h>
 
 
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))
 
 
int main() {
    int array[]={1, 2, 3, 4, 5};
    
    unsigned char length = ARRAY_LENGTH(array);
 
 
    printf("Array length: %d\n", length);
 
 
    return 0;
}