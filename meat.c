// Online C compiler to run C program online

#include <stdio.h>

#include <string.h>


int main() {
    
// define arrays of meat types
   
 const char *meats[] ={"beef", "mutton", "chicken", "pork"};
   
 const char *meatstoavoid = "pork";
   
 int i;
    //loop through the array
  
  for (int i=0; i<4; i++){
        // print the current meat type
 
       printf("the meat is %s\n", meats[i]);
  
      // break loop if we reach the meat to avoid
  
      if (strcmp(meats[i], meatstoavoid)==0){
        
    printf("i can never eat:%s\n",meats[i]);
    
        break;
        }
    }
     

    return 0;
}