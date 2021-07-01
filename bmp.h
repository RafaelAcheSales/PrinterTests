#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
char *file_path = "pic.bin";

void read_bmp() {
	FILE *fptr;

   if ((fptr = fopen(file_path,"rb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }
   struct stat file_info;
   stat(file_path, &file_info);
   long int size = file_info.st_size;
   printf("just read file: %s of size: %ld\n", file_path, size);
   // Moves the cursor to the end of the file
//    fseek(fptr, -sizeof(struct threeNum), SEEK_END);
   char* file_contents = malloc(size);
   fread(file_contents, size, 1, fptr);
   for (long int i = 0; i < size; i++)
   {
      if(i % 118 == 0) {
         //printf("\n");
      }
      printf("%x", file_contents[i]);
      
   }
   
	
//    for(n = 1; n < 5; ++n)
//    {
//       fread(&num, sizeof(struct threeNum), 1, fptr); 
//       printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
//       fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
//    }
   fclose(fptr); 
   free(file_contents);
}