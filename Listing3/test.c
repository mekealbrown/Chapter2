#include <stdlib.h>
#include <stdio.h>

//weird example. doesn't do anything, even when memory issues are addressed(lol)
 
int main(int argc, char *argv[]){
  int ipos, ival; 
	ipos = 0;
  int *iarray = (int *) malloc(10*sizeof(int));
	if (iarray == NULL){  
    printf("Memory allocation failed!\n");
    return 1;
  }

  if (argc == 2){
		ival = atoi(argv[1]);
	} else{
		printf("usage: ./test <value>");
		exit(1);
	}

  for (int i = 0; i<10; i++){
		iarray[i] = ipos; 
	}

  for(int i = 0; i<10; i++){ 
    if(ival == iarray[i]){
			ipos = i;
		}
  }  

	free(iarray);
}  
