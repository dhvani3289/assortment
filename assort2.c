#include<stdio.h>
main(){
	
	int i,n;
	
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	
	int x[n];
	
    printf("Enter the elements of an array : \n");
	 
	
	for(i=0; i<n; i++){
	 	printf("[%d]",i);
		scanf("%d",&x[i]); // 10 ,45 ,78 ,8 ,3
						  //  0   1   2   3  4		
	}	
	
		int largest	= x[0];  // 9
		int second_largest=x[1];  // 8
		
		for(i=1 i<n; i++){
			
			if(x[1]>largest){  // 3 > 9  
				
				second_largest = largest;
				largest=x[i];
			}
			
			else if(x[i]>second_largest && x[i] != largest){ // 3 > 8  &&  3 != 9
				
				second_largest = x[i]; // second = 8
			}
		}
	
	printf("%d",second_largest);
	
	 
	 
	 
}
