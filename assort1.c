#include<stdio.h>
main(){
	
	int i;
	int a;
	
	printf("Enter size : ");
	scanf("%d",&a);
	
	int n[a];
	
	for(i=0; i<a; i++){

		printf("Value of[%d] : ",i);
	    scanf("%d",&n[i]);
	}
	 printf("\n"); 
	
	
	
    for(i=0; i<a; i++){
		
			if(n[i]<0){
				printf(" %d",n[i]); 
		
			}
	 }
	 printf("\n"); 
}

