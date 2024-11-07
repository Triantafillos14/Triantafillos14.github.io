#include <stdio.h>

int main(){
    float left,right;
    int error_no;
    int exit_code;
    
    while(1) {
		
		printf("Please enter the cost of going left:");
		error_no = scanf("%f", &left);
		if (error_no == EOF) {		// End Of File was given as input
			exit_code = 0;
			break;
		}
		else if (error_no == 1){	// ok scan
		
		}
		else {						// something wrong
			exit_code = 1;
			break;			
		}
		
		printf("Please enter the cost of going right:");
		error_no = scanf("%f", &right);
		
		if (error_no != 1) {
			exit_code = 1;
			break;
		}
    
		if(left<=right)
			printf("Go left.\n");
		else
        printf("Go right.\n");
	
		
	}
    
    return exit_code;
     
 }
