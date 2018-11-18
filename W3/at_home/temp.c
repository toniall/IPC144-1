#include <stdio.h>

#define NUMS 4

int main(void){

	int total_High =0, total_Low =0;
	int low[NUMS],high[NUMS];
	int i,highest=0,day_highest=0,lowest=0,day_lowest;
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
		for(i=0;i<NUMS;i++){                        
			 if(high[i] > highest){
			 highest = high[i];
			 day_highest = i+1;

			 }
		}
			
		for(i=0;i<NUMS;i++){                        
			 day_lowest = i+1;
			 lowest = low[i];
			 if(low[i] < lowest){
			 lowest = low[i];
			 day_lowest = i+1;
			
			 }
			  printf("lowest %d day_lowest %d\n",lowest,day_lowest);
		}
		 average = total / (NUMS*2);
		 printf("The average (mean) temperature was: %.2f\n",average);
		 printf("The highest temperature was %d, on day %d\n",highest,day_highest);
		 printf("The lowest temperature was %d, on day %d\n",lowest,day_lowest);
	
	 return 0;
}
