#include <stdio.h>

void swap_endian(int *x) {
    unsigned char *b = (unsigned char *)x;   
    unsigned char temp;                        
  
    temp = b[0];                             
    b[0] = b[3];                               
    b[3] = temp;                             
    
    temp = b[1];
    b[1] = b[2];                               
    b[2] = temp;
}

int main() {
    int x = 0x12345678;

    printf("x = %x\n", x);
    swap_endian(&x);
    printf("%x\n", x);
    return 0;
}