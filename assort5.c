#include<stdio.h>
main(){
	
	int i,j;
	int a,b;
	
	printf("Enter size : ");
	scanf("%d",&a);
	
	printf("Enter size : ");
	scanf("%d",&b);
	
	int x[a][b];
	
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
		printf("Value of[%d][%d] : ",i,j);
	    scanf("%d",&x[i][j]);
	}
	 printf("\n"); 
	}
	
	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			
		printf(" %d",x[i][j]); 
		
	 }
	 printf("\n"); 
		
}

	for(i=0; i<a; i++){
		
		for(j=0; j<b; j++){
			if(x[i][j]%2==0){
				
				printf("The even elements from the matrix are %d",x[i][j]); 

			}		
	 }
	 printf("\n"); 
		
}

}
