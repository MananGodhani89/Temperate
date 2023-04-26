#include<stdio.h> 

 
main()    


{    
	int n,r,s=0,te;    
	printf("enter the number=");    
	scanf("%d",&n);    
	te=n;
    
	while(n>0)    

	{    
	r=n%10;    
	s=(s*10)+r;    
	n=n/10;    
	}    

			if(te==s)    
			{	
			printf("is palindrome number");    
			}
			
			else
			{
			printf("is not palindrome");   
			}
				
}
