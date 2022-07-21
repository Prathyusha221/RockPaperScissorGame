#include<time.h>
#include<stdio.h>
#include<assert.h>
#include<string.h>
int main()
{
	srand(time(NULL));
	char user_i[8];
    char r[4]="rock",p[5]="paper",s[8]="scissor",q[4]="quit";
	char arr[4]="prs";
	char none[2]="";
	char c;
	
	while(1)
	{
        printf("please choose rock,paper,scissor or quit: ");
	    scanf("%s", user_i);
	    if(strcmp(user_i,none)==0)
	    {
	    	continue;
		}
	    if(strcmp(user_i,q)==0)
	    {
	    	return 0;
	    }
	    
	    printf("\n\n");
	    printf("You chose: %s\n", user_i);
	    
		c=arr[rand()%3];
	    
	    switch(c)
	    {
	    	case 'p': 
	    	    printf("Computer chose: Paper\n");
	    	    if(strcmp(user_i,p)==0)
	    	    {
	    	    	printf("Result: none won\n");
	    	    	
				}
				 if(strcmp(user_i,r)==0)
				 {
				 	printf("Result: Computer won\n");
				 	
				 }
				 if(strcmp(user_i,s)==0)
				 {
				 	printf("Result: Player won\n");
				 	
				 }
				 break;
			case 'r':
			    printf("Computer chose: Rock\n");
				if(strcmp(user_i,p)==0)
	    	    {
	    	    	printf("Result: Player won\n");
	    	    	
				}
				 if(strcmp(user_i,r)==0)
				 {
				 	printf("Result: none won\n");
				 	
				 }
				 if(strcmp(user_i,s)==0)
				 {
				 	printf("Result: Computer won\n");
				 	
				 }
				 break;	 
			case 's':
			    printf("Computer chose: Scissor\n");
				if(strcmp(user_i,p)==0)
	    	    {
	    	    	printf("Result: Computer won\n");
	    	    	
				}
				 if(strcmp(user_i,r)==0)
				 {
				 	printf("Result: Player won\n");
				 	
				 }
				 if(strcmp(user_i,s)==0)
				 {
				 	printf("Result: none won\n");
				 	
				 }
				 break;	 	 
			default: 
			    printf("miracle\n");	 
		}
	    
		
    }
	return 0;
}