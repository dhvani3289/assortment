#include<stdio.h>
main(){
	
	int i,j,sum=0;
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
				
		if(i == j){
			
			sum=sum+x[i][j];
	    }
	 }
	 printf("\n");	
    }
   		 printf("The sum of the diagonal is : %d",sum);

}
