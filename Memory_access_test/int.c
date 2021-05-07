#include <stdio.h>
#include <stdlib.h>

int main()
{
	// allocating 1KB memory using malloc()
    int *ptr = (int *)malloc(256 * sizeof(int));  
    int i = 0; 
	// 4 bytes data
    unsigned int data[4]  = {0xA5A5A5A5, 0x5A5A5A5A , 0x00000000 , 0xFFFFFFFF}; 
	// 2 bytes data
	short n = -5000; 
	// 1 byte data
	int h = 97;
    unsigned char ch = h;
	
	//checking for 4 bytes data type
	
    //Create for loop for sending data elements in data[4]
    for(i=0; i<256; i++)
    {
        ptr[i] = data[0]; 
        //
        if (ptr[i] == data[0])
            printf("MEMORY PASS :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
        else
            printf("MEMORY FAIL :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
       
    }
      for(i=0; i<256; i++)
    {
        ptr[i] = data[1]; 
        if (ptr[i] == data[1])
            printf("MEMORY PASS :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
        else
            printf("MEMORY FAIL :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
       
    }
     for(i=0; i<256; i++)
    {
        ptr[i] = data[2]; 
        if (ptr[i] == data[2])
            printf("MEMORY PASS :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
        else
            printf("MEMORY FAIL :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
       
    }
      for(i=0; i<256; i++)
    {
        ptr[i] = data[3]; 
        if (ptr[i] == data[3])
            printf("MEMORY PASS :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
        else
            printf("MEMORY FAIL :  for addr = 0x%x and val = 0x%x\n", &ptr[i], ptr[i]);
    }
	return 0;
}
