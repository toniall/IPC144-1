#include <stdio.h>

#define NUMS 3

int main(void){

	int total_High =0, total_Low =0;
	int low[NUMS],high[NUMS];
	int i;
	float average,total;

	printf("---=== IPC Temperature Analyzer ===---\n");

	for(i=0;i<NUMS;i++){


		do{
			printf("Enter the high value for day %d\n",i+1);
			scanf("%d",&high[i]);
			printf("Enter the low value for day %d\n",i+1);
			scanf("%d",&low[i]);
				if((low[i] > high[i]) || (low[i]< -40 || low[i]>40) || (high[i]< -40 || high[i]> 40)){
					printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater thatn low.\n");
				       }
		     
		}while ((low[i]>high[i]) || (low[i]<-40 || low[i]>40)|| (high[i]<-40 || high[i]>40));
			total_High += high[i];
			total_Low += low[i];
			total = total_Low + total_High;
			
		    
	  }
		 average = total / (NUMS*2);
		 printf("The average (mean) temperature was: %.2f\n",average);
	 
	
	 return 0;
}
