  #include <stdio.h>
  #include <stdlib.h>
  #include <conio.h>
  #include <string.h>
  #include <time.h>
  #define ROWS 9
  #define COLS 9
  #define size 9
  char seats[size][size];
  
   void Menu(void)
  {
  printf("---------[Booking System]---------\n");
  printf("| a. Avaliable seats             |\n");
  printf("| b. Arrange for you             |\n");
  printf("| c. Choose by yourself          |\n");
  printf("| d. Exit                        |\n");
  printf("----------------------------------\n");
  }
  
  void initializeSeats()
  	{
  		int i, j;
  		for(i=0;i<=size;i++)
  		{
  			for(j=0;j<size;j++)
			{
  			seats[i][j]= '-';
  		    }
		  }
		  
		  for(i=0;i<10;i++)
		  {
		  	int row = rand() % size;
		  	int col = rand() % size;
		  	seats[row][col]= '*';
		  }
	  }
	  
	  void showSeats()
	  {
	  	int i, j;
	  	printf(" 123456789\n");
	  	for(i=0;i<size;i++)
  		{
  			printf("%d", i+1);
  			for(j=0;j<size;j++)
  			{
  				printf("%c", seats[i][j]);
			  }
			  printf("\n");
		  }
		  system("pause");
		  system("CLS");
	   } 
  
     void autoSeats(int num)
    {
     {
     	int i, num, row, col;
     	for(i=0;i<num;i++)
     	{
     		if(seats[row][col+i]= '-' || (col+i) >= size)
     		{
     			break;
			 }
		 }
		 printf("Your seat was already arranged. \n");
		 showSeats();
		 
		  while(1)
		 {
		 	int num, i;
		 	int row = rand() % size;
     		int col = rand() % size;
     		
     		if(num>=1 || num<=4)
     		{
     			for(i=0;i<num;i++)
     			{
     				if(seats[row][col+i] != '-' || (col+i) >= size)
     				{
     					break;
					 }
				 }
				 
				 if(i==num)
				 {
				 	for(i=0;i<num;i++)
				 	{
				 		seats[row][col+i]= '@';
					 }
					 printf("Your seats has been arranged. \n");
					 showSeats();
					 
					for(i=0;i<num;i++)
					{
					  seats[row][col+i]= '*';	
					 } 
					 break;
				 }
				 return;
			 }
			 
			if(num==4)
			{
				if(seats[row][col]== '-' || seats[row][col+1]== '-' || seats[row+1][col]== '-' || seats[row+1][col+1]== '-' || (col+1) < size)
				{
					seats[row][col]= '@';
					seats[row][col+1]= '@';
					seats[row+1][col]= '@';
					seats[row+1][col+1]= '@';
					printf("Your seats has been arranged. \n");
					showSeats();
					seats[row][col]= '*';
					seats[row][col+1]= '*';
					seats[row+1][col]= '*';
					seats[row+1][col+1]= '*';
					return;
				}
				
				while(1)
				{
					char q;
					fflush(stdin);
					scanf("%c", &q);
					
					if(q== 'y')
					{
						seats[row][col]= '*';
						seats[row][col+1]= '*';
						seats[row+1][col]= '*';
						seats[row+1][col+1]= '*';
						return;
					}
					
					else if(q== 'n')
					{
						seats[row][col]= '-';
						seats[row][col+1]= '-';
						seats[row+1][col]= '-';
						seats[row+1][col+1]= '-';
						break;
					}
					
					else
					{
						printf("Satisfied?(y/n) \n");
					}
				}
			 }
			 
			 if(num>=1 || num<=4)
			 {
			 	for(i=0;i<num;i++)
			 	{
			 		if(seats[row][col+i]= '-' || (col+i)>=size)
			 		break;
				 }
			  } 
			  showSeats();
			  char q;
			printf("Satisfied?(y/n) \n");
			
			while(1)
			{
				fflush(stdin);
				scanf("%c", &q);
				
				if(q== 'y')
				{
					for(i=0;i<num;i++)
					{
						seats[row][col+i]= '*';
					}
					system("CLS");
					Menu();
					return;
				}
				
				else if(q== 'n')
				{
					for(i=0;i<num;i++)
					{
					  seats[row][col+i]= '-';
					}
					Menu();
					break;
				}
				
				else
				{
				  printf("Satisfied?(y/n) \n");	
				}
			}
			 for(i=0;i<num;i++)
			 {
			   if(seats[row][col+i]= '-')
			   {
			   	 break;
			   }
			   return;	
			 }
			 
			 if(i==num)
			 {
			 	for(i=0;i<num;i++)
			 	{
			 		seats[row][col+i]='@';
				 }
				 printf("Your seat have already arranged. \n");
				 showSeats();
				 
				 for(i=0;i<num;i++)
				 {
				 	seats[row][col+i]= '*';
				 }
				 break;
			 }
		 }return;
	 }
	 printf("Not enough consecutive seats for you. \n ");
    }
    
    void selectSeats(char seats[ROWS][COLS])
    {
    	char input[10];
    	int selectedSeats[ROWS*COLS][2];
    	int numSeats=0;
    	
    	printf("Please choose the seats: ");
    	
    	while(1)
    	{
    		printf("Please input the number: ");
    		fgets(input, sizeof(input), stdin);
    		if(strncmp(input, "done", 4)==0)
    		{
    			break;
			}
			
			int row, col;
			if(scanf(input, "%d-%d", &row, &col) !=2 || row<1 || row>ROWS || col<1 || col>COLS)
			{
				printf("Error. \n");
				continue;
			}
			
			row=ROWS-row;
			col=COLS-1;
			
			if(seats[row][col]!= '-')
			{
				printf("Seat have been booked or invalid. \n");
				continue;
			}
			
			selectedSeats[numSeats][0]=row;
			selectedSeats[numSeats][1]=col;
			numSeats++;
			seats[row][col]= '@';
		}
		return;
	}
  
  int main(void)
  {
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  printf("Hello World.\n");
  getch();
  system("CLS");
  
  	int password=2024, attempts=0;
  	srand(time(0));
  	char ans;
  	
  	do
  	{
  		printf("Please enter the password: \n");
  		scanf("%d", &password);
  		attempts++;
  		
  		if(attempts>3)
  		{
  			printf("Enter more than three times! \n");
  			break;
		  }
	  }while(password!=2024);
	  printf("Welcome! ");
	  	initializeSeats();
	system("CLS");
    
    Menu();
    
    char choice;
   	printf("Please enter the letter: \n");
   	fflush(stdin);
  	scanf("%c", &choice);
  	system("pause");
  	system("CLS");
  
  	switch(choice)
  {
  		case 'a':
  		showSeats();
  		system("CLS");
  		Menu();
  		break;
  	    
  		case 'b':
  		for(;;)
  		{
  		int num=5;
  		printf("Please enter the number(1-4): ");
  		fflush(stdin);
  		scanf("%d", &num);
  		
  		if(num<=4 || num>=1)
  		{
  	    autoSeats(num);
  		break;
  	   }
      }
  	   break; 
  	   
  		case 'c':
  		break;
  		
  		case 'd':
  		printf("Continue ? (y/n): ");
  		
  		while(1)
  	{
  		fflush(stdin);
  		scanf("%c", &ans);
  		
  		if(ans== 'y')
  		{
  			Menu();
  			system("pause");
  			system("CLS");
		}
		
		else if(ans== 'n')
		{
			return 0;
		}
		
		else
		{
			printf("Error. \n");
		}
		break;
	}		   
  default:
  	system("pause");
	system("CLS");
}
 }
