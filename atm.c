#include <stdio.h>
#include<conio.h>

int i=0;
int j=0;
int c;
int p=1234;
int pass=0;
int ob=1000;
int d=0;
int wh=0;

char transaction;

void withdraw();
void depostied();
void balance();

int main()
{
        
        while(j<=3)
		{
			
            while(i<=3)
            {
             
                printf("Password.\n");
                scanf("%d",&pass);

                if(pass==p)
                {
                	j++;
                    goto transaction;
                }

                else if(pass!=p)
                {
                    printf("\nincorrect password\n");
                    i++;
                }
                
				if(i>=3)
            	{
                	printf("\nyour account is blocked\n");
                	return 0;
            	}
            
            }
            
        }
        
        {
		
	        transaction:
	        	{
	        		printf("\nSelect your transaction\n");
	        		printf("\n1.Check Balance\n2.Withdraw Cash\n3.Depostied Cash\n");
	        		scanf("%d",&c);
	        		
	        		switch(c)
	        		{
	        			case 1:
							{
								balance();
								break;
							}
							
						case 2:
							{
								withdraw();
								break;
							}
							
						case 3:
							{
								depostied();
								break;
							}
							
						default:
							{
								printf("Invalid");
								
							}
					}
					
					{
						choose:
						{
							printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): \n");
			
							scanf("%s", &transaction);
							if (transaction == 'n'|| transaction == 'N')
					                {
					                	printf("\n\n\tTHANKS FOR USING OUR SERVICE");
										return 0;
									}
							
							else if(transaction == 'y'|| transaction == 'Y')
							{
								j++;
								if(j<=3)
								{
									goto transaction;	
								}
								
								else
					            {
					            	printf("\nLimited transation.\nPlease vist tommrow.\nThank You for using atm service.\n");
					            	getch();
									return 0;
								}
								
							}
							
							else
							{
								printf("invaild");
								goto choose;
							}
						 }
					}
	        		
				}
			} 
        
    }
    
    void withdraw(){
	
	printf ("\nAmount of money you want to withdraw.\n");
	scanf("%d",&wh);
	
	if(wh<ob)
	{
		ob=ob-wh;
		printf("\nYour withdraw amount: %d",wh);
		printf("\nYour New Balance : %d",ob);
	}
	else
	{
		printf("You dont have sufficient amout in your account.");
	}
	
}

void depostied(){
	printf("\nAmount of money you want to Depostie.\n");
	scanf("%d",&d);
	printf("\nYour Depostied Amount: %d",d);
	ob=d+ob;
	printf("\nYour New Balance: %d",ob);
}

void balance(){
	printf("\nYour Balance Amount : %d",ob);	
}
