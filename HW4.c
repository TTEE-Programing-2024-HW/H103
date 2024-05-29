  #include <stdio.h>
  #include <stdlib.h>
  void Menu(void);
  void a(int);
  void b(int);
  
  struct grades
  	{
  		char name[10], num[10], ID[7];
  		float math, physics, english;
	};
	  
	  struct grades student[100];
	  int p=0;
	  
  void Menu()
  {
   printf("----------[Grade System]-----------\n");
   printf("| a.    Enter student grades      |\n");
   printf("| b.    Display student grades    |\n");
   printf("| c.    Search for student grades |\n");
   printf("| d.    Grade ranking             |\n");
   printf("| e.    Exit system               |\n");
   printf("----------------------------------|\n");	
   system("CLS");
  }
  
  void a(int p)
  {
	int i;
	
	for(i=0;i<p;i++)
	{
		printf("Input students name, ID, physics, english, math grades(0~100): \n");
	    printf("\n");
		scanf("%s %s %f %f %f", student[i].name, student[i].ID, &student[i].physics, &student[i].english, &student[i].math);
		
		if(strlen(student[i].ID)!=6)
		{
		  printf("Error,please input again: \n");
			scanf("%s", student[i].ID);	
		}
		
		
		if(student[i].physics<0 || student[i].physics>100)
	{
		printf("Please input student physics grade again. \n");
		fflush(stdin);
		scanf("%f", student[i].physics);
	}
	
	if(student[i].math<0 || student[i].math>100)
	{
		printf("Please input student math grade again. \n");
		fflush(stdin);
		scanf("%f", student[i].math);
	  }  
	 
		if(student[i].english<0 || student[i].english>100)
	{
		printf("Please input student english grade again. \n");
		fflush(stdin);
		scanf("%f", student[i].english);
	  }   
	}
	system("CLS");
	system("pause");
  }
  
  void b(int p)
  {
  	int i;
	  for(i=0;i<p;i++)
	  {
	  	printf("student: %s, ID: %s, physics: %.2f,math: %.2f,english: %.2f\n", student[i].name, student[i].ID, student[i].physics, student[i].math, student[i].english);
	  }
  }
  
  
  int main(void)
  {
   printf("  __       __   __   __ _____ __   ___________\n");
  	printf("|--|     |--| |  | |--|_____|--| |           |\n");
  	printf("|--|     |--| |--| |--|     |--| |_________  |\n");
  	printf("|--|     |--| |--| |--|     |--|           | |\n");
  	printf("|--|     |--| |--| |--|     |--|  _________| |\n");
  	printf("|--|-----|--| |--| |--|     |--| |           |\n");
  	printf("|   -----   | |--| |--|     |--| |_________  |\n");
  	printf("|--|     |--| |--| |--|     |--|           | |\n");                                    
  	printf("|--|     |--| |--| |--|     |--|  _________| |\n");
  	printf("|--|     |--| |--| |--|_____|--| |           |\n");
  	printf("|__|     |__| |__| |__|_____|__| |___________|\n");
  	system("pause");
  	system("CLS");
  	getch();
  	
  	int password=2024,count=0;
  	char g;
  	
  	do
    {
  	if(count<3)
  	{
  		printf("Enter the password: \n");
  		scanf("%d", &password);
  		count++;
	}
  	
  	else
  	{
  		printf("Enter over three times! \n");
  		break;
	}
  }while(password!=2024);
  
  while(1)
  {
  	system("CLS");
  	Menu();
  	printf("Please choose 'a', 'b', 'c', 'd', 'e': \n");
  	fflush(stdin);
  	scanf("%c", &g);
  
  switch(g)
  {
  	case 'a':
  		system("CLS");
  		printf("Please input n(5~10) interger: \n");
  		fflush(stdin);
  		scanf("%d", &p);
  		while(p<=2 || p>=10)
  		{
  		  printf("Please input n(5~10) interger again: \n");
  		  fflush(stdin);
  		  scanf("%d", &p);	
		}
		a(p);
  		break;
		  
   	case 'b':
	  system("CLS");
	  b(p);
	  system("pause");
	  break;		
  }
 } 
} 
