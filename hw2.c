  #include <stdio.h>
  #include <conio.h>
  #include <stdlib.h>
  void menu(void)
  {
  	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("+ a. �e�X�����T����                +\n");
	 printf("+ b. ��ܭ��k��                    +\n");
	 printf("+ c. ����                          +\n");
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  }
  
  void drawTriangle(char ch)
  {
  	 if(ch < 'a' || ch > 'n')
  	 {
  	 	do
  	 	{
  	 		fflush(stdin);
  	 		printf("��J���Ħr��: ");
  	 		scanf("%c", &ch);
		   }while(ch < 'a' || ch> 'n');
	   }
  }
  
  for(char temp = 'a';temp<=ch; temp++)
  {
  	for(space= ch;space>temp;space--)
  	{
  		printf(" ");
	}
	
	for(i = ch-(temp-'a');i<=ch;i++)
	{
		printf("%c", i);
	}
	printf("\n");
  }
  
  void drawMultiplicationTable(int n)
  {
  	if(n<1 || n>9)
  	{
  		do
  		{
  		  fflush(stdin);
		  printf("��J���ľ��: ");
		  scanf("%d", &n);	
		}while(n<1 || n>9);
		
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d*%d=%2d\n", i, j, i*j);
			}
			printf("\n");
		}
		getch();
	}
  }
  int main(void)
  {
  	int password=2024,count=0, i, j, rows=3, n, choice;
  	char ch, space, temp, i;
  	getchar();
    printf("Hello C.\n"); 
    printf("Hello C.\n");
    printf("Hello C.\n"); 
    printf("Hello C.\n"); 
    printf("Hello C.\n");
	printf("Hello C.\n"); 
    printf("Hello C.\n"); 
    printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n"); 
	printf("Hello C.\n");
	 
	printf("��J�K�X: ");
	scanf("%d", &password);
	
  {
  	while(count!=3)
  	{
  		
	if(password==2024)
	{
	 system("CLS");
	 
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("+ a. �e�X�����T����                +\n");
	 printf("+ b. ��ܭ��k��                    +\n");
	 printf("+ c. ����                          +\n");
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 break;
	} 
	
	else
	{
		count++;
	}
	
	
	while(count!=3)
	{
	  count++;
      printf("�W���K�X��%d,�Э��s��J�K�X: \n", password);
	  scanf("%d", &password);
	}
	
	if(count==3)
	{
    printf("��J���~�F�T��,�{���Y�N����\n");
    return 0;
    }
  }
}
    
    do
    {
    system("CLS");
    menu();
    
    printf("��J�@�r��: \n");
    fflush(stdin);
    scanf("%c", &choice);
    
	switch(choice)
	{
    case 'a':
	case 'A': 
	{
	  system("CLS");
	  {
	  printf("��J'a'��'n'���r��: ");
	  fflush(stdin);
	  scanf("%c", &ch);
	  drawTriangle(ch);
	  break;
      }
    }
	  
	case 'b':
	case 'B':
  {	
	{
		system("CLS");
		printf("��J�@��1��9�����n: ");
		fflush(stdin);
		scanf("%d", &n);
		drawMultiplicationTable(n);
		break;
	}	    
  }
  
    case 'c':
    case 'C':
   {
    {
    	system("CLS");
    	printf("'Continue? (y/n): \n");
    	fflush(stdin);
    	scanf("%c", &choice);
	}
	
	while(choice=='Y' || choice=='y' || choice=='N' || choice=='n')
	{
		if(choice=='Y' || choice=='y')
		{
			fflush(stdin);
			menu();
			
			printf("��J�r��: ");
			scanf("%c", &choice);
			break;
		}
		else
		{
			return 0;
		}
		
		else
		{
			do
			{
				fflush(stdin);
				printf("��J�ŦX�n�D�r��: ");
				scanf("%c", &choice);
			}while(choice=='Y' || choice=='y' || choice=='N' || choice=='n');
		}
	}
	  
	  if(choice=='N' || choice=='n')
	  {
	  	printf("�{������\n");
	  	return 0;
	  }
	  
	  else if(choice=='Y' || choice=='y')
	  {
	  	printf("��J���Ħr��: ");
	  }
       break;
   }
  }
  default:
  	{
  		printf("��J���Ħr��! \n");
	}
  }while(choice=='C' || choice=='c');

	system("pause");
	return 0;
  }   
