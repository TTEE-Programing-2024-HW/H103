  #include <stdio.h>
  #include <stdlib.h>
  void Menu(void);
  void a(int);
  void b(int);
  void c(int);
  void d(int);
  void e();
  
  struct grades //define struct grades
  	{
  		char name[10], num[10], ID[7]; //variables for storing name, number, ID
  		float math, physics, english, average, temp; //variables for storing grades and average
	};
	  
	  struct grades student[100];  //array to store number up to 100 students
	  int p=0;
	  
  void Menu()  //menu
  {
   printf("----------[Grade System]-----------\n");
   printf("| a.    Enter student grades      |\n");
   printf("| b.    Display student grades    |\n");
   printf("| c.    Search for student grades |\n");
   printf("| d.    Grade ranking             |\n");
   printf("| e.    Exit system               |\n");
   printf("----------------------------------|\n");	
   system("CLS");  ///clean the screen 
  }
  
  void a(int p)  //declare the function a without the value
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
	  
	  student[i].average= (student[i].physics + student[i].math + student[i].english) / 3.0;  //average
	}
	system("CLS");  //clean the screen 
	system("pause");  
  }
  
  void b(int p)  //declare the function b without the value
  {
  	int i;
	  for(i=0;i<p;i++)
	  {
	  	printf("student: %s, ID: %s, physics: %.2f,math: %.2f,english: %.2f, average: %.2f\n", student[i].name, student[i].ID, student[i].physics, student[i].math, student[i].english, student[i].average);
	  }
  }
  
  void c(int p)  //declare the function c without the value
  {
  	char s[10];  //array to store number up to 10
  	int f=0;
  	int i;
  	system("CLS");
  	
  	printf("Enter student name: ");
  	scanf("%s", s);
  	
  	for(i=0;i<p;i++)
  	{
  		if(strcmp(student[i].name, s)==0)
  		{
  			printf("Student files: ");
  			printf("name: %s\n", student[i].name);
  			printf("ID: %s\n", student[i].ID);
  			printf("physics: %.2f\n", student[i].physics);
  			printf("math: %.2f\n", student[i].math);
  			printf("english: %.2f\n", student[i].english);
  			printf("average: %.2f\n", student[i].average);
  			f=1;
  			break;
		  }
	  }
	  
	  if(!f)
	  {
	  	printf("Files isn't exist! \n");
	  }
  }
  
  void d(int p)  //declare the function d without the value
  {
  	int i,j, place;
  	printf("Grades ranking: \n");
  	
  	for(i=0;i<p-1;i++)  
  	{
  		for(j=0;j<p-i-1;j++)
  		{                     // Comparing the averages of adjacent students
  			if(student[j].average < student[j+1].average)
  			{                // Swapping the positions of students if their averages are in descending order
  				struct grades tempstudent=student[j];
  				student[j]=student[j+1];
  				student[j+1]=tempstudent;
			  }
		  }
    }
    
	  for(i=0;i<p;i++)  //rank the grades 
	  {
	  	printf("%d place: name: %s ID: %s average: %.2f\t\n", i+1, student[i].name, student[i].ID, student[i].average);
	  }
	  getch();
  }
  
  void e()  //declare function e without the value
  {
  	char option;
  	
  	while(1)
  	{
  		printf("Continue?(y/n): \n");  //choose 'y' or 'n'
  		fflush(stdin);  //clean input buffer  
  		scanf("%c", &option);
  		
  		if(option=='y')
  		{
  			printf("Exit. \n");
  			return;
		}
		else if(option=='n')
		{
			return;
		}
		else
		{
			printf("Please enter 'y' or 'n'again. \n");
		}
	  }
  }
  
  
  int main(void)  //personal picture
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
  	system("CLS");  //clean the screen 
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
  }while(password!=2024);  //while password not equal to 2024 and enter over three times program will interrupt 
  
  while(1)
  {
  	system("CLS");
  	Menu();
  	printf("Please choose 'a', 'b', 'c', 'd', 'e': \n");
  	fflush(stdin);  //clean input buffer
  	scanf("%c", &g);
  
  switch(g)  //choose the letter to excecute the function 
  {
  	case 'a':
  		system("CLS");
  		printf("Please input n(5~10) interger: \n");
  		fflush(stdin);
  		scanf("%d", &p);
  		while(p<=2 || p>=10)  //while p less than two or more than ten will excecute function a 
  		{
  		  printf("Please input n(5~10) interger again: \n");
  		  fflush(stdin);
  		  scanf("%d", &p);	
		}
		a(p);
  		break;
		  
   	case 'b':
	  system("CLS");
	  b(p);  //fuction b
	  system("pause");
	  break;
	  
	case 'c':
	system("CLS");
	c(p);  //function c
	system("pause");
	break;
	
	case 'd':
	system("CLS");
	d(p);  //function d
	system("pause");
	break;		
	
	case 'e':
	system("CLS");
	e();  //function e 
	system("pause");
	break;
	
	default:  //while enter orther character will be excecute 
	printf("Error, please enter again. \n");
	system("pause");
	break;
  }
 } 
} 
