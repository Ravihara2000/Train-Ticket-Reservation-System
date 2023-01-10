#include <stdio.h>

int main()
{
	
	//declare variables
	int Afull, Ahalf, Akids, input, total = 0, i,x,  tot1 =0, tot2, seatAA = 30, seatBB = 60, seatCC = 90, tot = 0,Bfull, Bhalf, Bkids, Cfull, Chalf, Ckids;
	
	for(i = 1; i <= 10000000; i++)
	{
		//show the menu
		printf("\n");
		printf(" 1 - Class A\n");
		printf(" 2- Class B\n");
		printf(" 3- Class C\n");
		printf(" 4- Current Availability\n");
		printf(" 5- Exit\n");
			
			//ask from user to enter the class
		printf("enter your option  :");
		scanf("%d", &input);
		
		printf("\n");
		switch (input)
		{
			
		//asking and getting inputs from user
		case 1 :
		printf("How many full tickets....\n  :"); 
		scanf("%d", &Afull); 
		
		printf("How many concession tickets - Senior & children under 12 & above 3...\n  :");
		scanf("%d", &Ahalf); ;
		
		printf("How many kids under 3 years....\n  :");
		scanf("%d", &Akids);
		
		//calculate the tickets prices
		tot1 = Afull * 25;
		tot2 = Ahalf * 15;
		
		total = tot1 + tot2;
		
		//calculate the amount of tickets
		tot =Afull + Ahalf + Akids;
		
		//chechking the amount of tickets less than 30
		if(tot <= 30)
		{
			//store the amount of tickets in a variable 
			seatAA -= (Afull + Ahalf + Akids);
			//show the tickets price
			printf("your total tickets price =%d \n", total);break;
			printf("\n");
		}
		printf("\n");
		//show the available seats
		printf("less seats availabbe than required....\n");
		printf("Total available in class A is  %d\n", seatAA);
		printf("Class B is  %d\n", seatBB);
		printf("Class C is  %d\n", seatCC);break;
	
		printf("\n");
	
	//asking and getting inputs from user
		case 2 :
		printf("How many full tickets....\n  :"); 
		scanf("%d", &Bfull); 
		
		printf("How many concession tickets - Senior & children under 12 & above 3...\n  :");
		scanf("%d", &Bhalf); ;
		
		printf("How many kids under 3 years....\n  :");
		scanf("%d", &Bkids);
		
		//calculate the tickets prices
		tot1 = Bfull * 15;
		tot2 = Bhalf * 10;
		
		total = tot1 + tot2;
		
		//calculate the amount of tickets
		tot =Bfull + Bhalf + Bkids;
		
		if(tot <= 60)
		{
			//store the amount of tickets in a variable 
			seatBB -=(Bfull + Bhalf + Bkids);
			//show the tickets price
			printf("your total tickets price =%d \n", total);break;
		}
		printf("\n");
		//show the available seats
		printf("less seats availabbe than required....\n");
		printf("Total available in class B is  %d\n", seatBB);
		printf("Class A is  %d\n", seatAA);
		printf("Class C is  %d\n", seatCC);break;
	
		printf("\n");
	
	//asking and getting inputs from user
		case 3 :
		printf("How many full tickets....\n  :"); 
		scanf("%d", &Cfull); 
		
		printf("How many concession tickets - Senior & children under 12 & above 3...\n  :");
		scanf("%d", &Chalf); ;
		
		printf("How many kids under 3 years....\n  :");
		scanf("%d", &Ckids);
		
		//calculate the tickets prices
		tot1 = Cfull * 9;
		tot2 = Chalf * 5;
		
		total = tot1 + tot2;
		
		//calculate the amount of tickets
		tot =Cfull + Chalf + Ckids;
		
		if(tot <= 90)
		{
			//store the amount of tickets in a variable 
			seatCC -=(Cfull + Chalf + Ckids);
			//show the tickets price
			printf("your total tickets price =%d \n", total);break;
		}
		printf("\n");
		//show the available seats
		printf("less seats availabbe than required....\n");
		printf("Total available in class C is  %d\n", seatCC);
		printf("Class A is  %d\n", seatAA);
		printf("Class B is  %d\n", seatBB);break;

		printf("\n");
	
		case 4 :
		//show the available seats
		
		printf("Class A is %d\n", seatAA );
		printf("Class B is %d\n", seatBB);
		printf("Class C is %d\n", seatCC);break;

		printf("\n");


		case 5 :
				
		//show the available seats and exit
		i = 1000000000;
		printf("Total available  \n");
		printf("Class A is %d\n", seatAA );
		printf("Class B is %d\n", seatBB);
		printf("Class C is %d\n", seatCC);
	
		printf("\n");
	
		}
	
	}
	
		return 0;
}