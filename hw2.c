  #include <stdio.h>
  #include <conio.h>
  #include <stdlib.h>
 
  void menu(void)  //設定一個函數來呼叫主選單 
  {
  	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("+ a. 畫出直角三角形                +\n");
	 printf("+ b. 顯示乘法表                    +\n");
	 printf("+ c. 結束                          +\n");
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  }
  
  void triangle(char ch)  //設定一個函數來呼叫畫出直角三角形 
  {
  	 if(ch < 'a' || ch > 'n')
  	 {
  	 	do
  	 	{
  	 		fflush(stdin);
  	 		printf("輸入有效字元: ");
  	 		scanf("%c", &ch);
		   }while(ch < 'a' || ch> 'n');  //判斷條件是否符合範圍內,並輸入字元,如果不符合,就要輸入到符合條件為止 
	   }
  }
  
  char temp;
  for( temp = 'a';temp<=ch; temp++)   
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
  
  void table(int n)  //呼叫畫出直角三角形函數 
  {
  	if(n<1 || n>9)
  	{
  		do
  		{
  		  fflush(stdin);
		  printf("輸入有效整數: ");
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
	 
	printf("輸入密碼: ");
	scanf("%d", &password);
	
  {
  	while(count!=3)
  	{
  		
	if(password==2024)
	{
	 system("CLS");//清除螢幕 
	 
	 printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	 printf("+ a. 畫出直角三角形                +\n");
	 printf("+ b. 顯示乘法表                    +\n");
	 printf("+ c. 結束                          +\n");
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
      printf("上次密碼為%d,請重新輸入密碼: \n", password);
	  scanf("%d", &password);
	}
	
	if(count==3)
	{
    printf("輸入錯誤達三次,程式即將結束\n");
    return 0;
    }
  }
}
    
    do
    {
    system("CLS");
    menu();
    
    printf("輸入一字元: \n");
    fflush(stdin);
    scanf("%c", &choice);
    
	switch(choice)
	{
    case 'a':
	case 'A': 
	{
	  system("CLS");
	  {
	  printf("輸入'a'到'n'的字元: ");
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
		printf("輸入一個1至9的整數n: ");
		fflush(stdin);
		scanf("%d", &n);
		table(n);
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
			
			printf("輸入字元: ");
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
				printf("輸入符合要求字元: ");
				scanf("%c", &choice);
			}while(choice=='Y' || choice=='y' || choice=='N' || choice=='n');
		}
	}
	  
	  if(choice=='N' || choice=='n')
	  {
	  	printf("程式結束\n");
	  	return 0;
	  }
	  
	  else if(choice=='Y' || choice=='y')
	  {
	  	printf("輸入有效字元: ");
	  }
       break;
   }
  }
  default:
  	{
  		printf("輸入有效字元! \n");
	}
  }while(choice=='C' || choice=='c');

	system("pause");
	return 0;
  }   
  
  //心得
/*
這次的作業，遇到了許多困難，
像是一開始想用迴圈畫出直角三角形，
後來發現這樣一次要增加很多行，
進而提高除錯的難度，所以改用函數來做，
增加效率許多，其他的小題也是如此，過程也除錯多次，
像是括號太多，可讀性變得困難，導致編譯不過去，
也因為如此，讓我的除錯能力有所提升。
*/
