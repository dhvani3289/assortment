#include<stdio.h>
main(){
	
	int i,j;
	int a,b,c,d;
	
	printf("Enter size : ");
	scanf("%d",&a);
	
	printf("Enter size : ");
	scanf("%d",&b);
	
	int x[a][b];
	int y[a][b];
	int sum[a][b];
	
	//input of first matrix
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
		printf("Value of[%d][%d] : ",i,j);
		
	    scanf("%d",&x[i][j]);
	}
	 printf("\n"); 
	}
	
   // input of second matrix
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
			printf("Value of[%d][%d] : ",i,j);
			
	    	scanf("%d",&x[i][j]);
		}
	 	printf("\n"); 
	}
	
	// printing the first matrix
		for(i=0; i<a; i++){
		
			for(j=0; j<b; j++){
			
				printf(" %d",x[i][j]); 
		
	 	}
	 		printf("\n"); 
	}
	printf("\n"); 

    // printing the second matrix
	 for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
		printf(" %d",y[i][j]); 	
	 }
	 printf("\n"); 
	}

    // calculating the sum of two matrix
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
			sum[i][j]=x[i][j]+y[i][j];
			
			printf("%d  ",sum[i][j]);
	 }
	 printf("\n"); 
	}
}

