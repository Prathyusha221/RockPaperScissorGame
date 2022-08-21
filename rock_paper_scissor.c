#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
int main()
{
	srand(time(NULL));
	char user_i[9];
    char r[9]="rock",p[9]="paper",s[9]="scissor",q[9]="quit";
	char arr[3][9]={"rock","paper","scissor"};
	
	while(1)
	{
		printf("please choose rock,paper,scissor or quit: ");
	    scanf("%s", user_i);

		if(strcmp(user_i,q)==0)
	    {
	    	return 0;
	    }

	    if(!((strcmp(user_i,"rock")==0) || (strcmp(user_i,"paper")==0) || (strcmp(user_i,"scissor")==0)))
	    {
			printf("Invalid input\n");
	    	continue;
		}
	    
	    printf("\n\n");
	    printf("You chose: %s\n", user_i);
	    
		char c[8];
		strcpy(c,arr[rand()%3]);
	    
		if(c[0]=='p'){
			printf("Computer chose: paper\n");
	        if(strcmp(user_i,p)==0)
	    	{
	    	    printf("Result: none won\n");    	    	
			}
			else if(strcmp(user_i,r)==0)
			{
				printf("Result: Computer won\n");	 	
			}
			else if(strcmp(user_i,s)==0)
			{
			 	printf("Result: Player won\n");
			}
			else{
				continue;
			}
		}
		else if(c[0]=='r'){
			printf("Computer chose: rock\n");
			if(strcmp(user_i,p)==0)
    	    {
	  	    	printf("Result: Player won\n");    	
			}
			else if(strcmp(user_i,r)==0)
			{
			 	printf("Result: none won\n");
			}
			else if(strcmp(user_i,s)==0)
			{
			 	printf("Result: Computer won\n"); 	
			}
			else{
				continue;
			}
		}
		else if(c[0]=='s'){
			printf("Computer chose: scissor\n");
			if(strcmp(user_i,p)==0)
		    {
	        	printf("Result: Computer won\n");
			}
			else if(strcmp(user_i,r)==0)
			{
			 	printf("Result: Player won\n");	
			}
			else if(strcmp(user_i,s)==0)
			{
			 	printf("Result: none won\n"); 	
			}
			else{
				continue;
			}
		}
	    else{
			printf("miracle\n"); 
		}
    }
	return 0;
}
