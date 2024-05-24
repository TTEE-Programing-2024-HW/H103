  #include <stdio.h>
  #include <stdlib.h>
  
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
  	getch();
  	
  	int password=2024,count=0;
  	
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
}
