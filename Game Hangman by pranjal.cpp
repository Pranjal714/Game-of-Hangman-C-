       // GAME OF HANGMAN - THE MOVIE GUESSING GAME// //DEVELOPED BY PRANJAL//
#include<bits/stdc++.h>
#include<conio.h>
void start_game();
int main()
{
   int choice;
   char name[30]; 
	printf("[L] LOVELY\n");
	printf("[P] PROFESSIONAL");                                  printf("\t\t\t\t Game Developed by Pranjal");
	printf("\n[U] UNIVERSITY");
	printf("\n\n\n");
		
	       printf("\n\t\t======================================================");
	       printf("\n\t\t\tWelcome To The Game Of Hangman\n");
	       printf("\t\t========================================================");
	    
        printf("\nEnter Gamer's Name :");
		scanf("%s",&name);
		printf("\n\t~~~HELLO %s , Welcome to the Game of intelligence~~~\n\n", name);
		printf("################################################################################\n");
		printf("\nPress any key to Continue");
		getchar();
	    printf("\n\n\n  ***[Before You Begin , It Is Adviced To Read Instruction Properly.]***\n");
		printf("\n Press any Key To Enter ");
		getchar();
	Page_main:
	      printf("\n MAIN MENU\n-------------\n 1.Start Game\n 2.Instruction\n 3.Exit\n");
	      scanf("%d",&choice);
	      
	      switch(choice)
	      {
	      	case 1 : 
	      	 start_game();
	      	 break;
	      	
	      	case 2 :
	      	  printf("\n ~~Read The Instructions Carefully.~~\n");
		      printf("\n\n The Game Consists Of Bollywood/Hollywood Movies.\nThe Gamer is Provided The Movie Name With Only Vowels Given and There is a Blank Space in Place of Consonants.\nThe Gamer will Have To Enter The Correct Movie Name.\nThe gamer Will be Given A Chance For Each Wrong Attempt \n\n\n");
		      goto Page_main;
			 
			case 3 :
			 exit(0);
			 
			default : 
			printf("\nPlease Enter A Right Choice\n");
			 goto Page_main;  	
		  }
		  
		  
		 }
    void start_game()
    
	 {
	          int a,choice;
	         
	        char first_choice,second_choice,third_choice,fourth_choice;
		    printf("\n\n Let's Begin...  \n");
		 printf("Guess The Movie Name : _O_");     printf("\t Hint : (Bollywood),Year of release (2015) ");
		 printf("\n Enter 1");
		 scanf("%d",&a);
		f : printf("\nEnter a Character For First Blank :");
		first_choice=getche();
		 if(first_choice == 'R' || first_choice == 'r')
		 {
		 	printf("\nYeah! You Are Right.");
		 	printf("\nNow Move To Second Character.");
		 h : printf("\nEnter a Character For Second Blank :");
		 	second_choice=getche();
		 	
		 	if(second_choice == 'Y' || second_choice == 'y')
		 	{
		 		printf("\nYeah! Again Right !");
		 		printf("\n\nNow Move To Second Question ");
		 		
			 }
		    else if (second_choice != 'Y' || second_choice != 'y')
		    {
		    	printf("Oh!! You are Wrong! Please Enter Again");
		    	goto h;
		    }
	    }
		    else
		    {
		    	printf("\nOhh! Your First Choice Is Wrong ! Try Again!");
		    	goto f;
		    	
			}
			
        printf("\n====================================================\n");
        
        
         printf("Guess The Movie Name : __AO_I_");     printf("\t Hint : (Hollywood),Year of release (2011) ");
		 printf("\n Enter 2");
		 scanf("%d",&a);
		e : printf("\nEnter a Character For First Blank :");
		 first_choice=getche();
		 if(first_choice == 'S' || first_choice == 's')
		 {
		 	printf("\nYeah! You Are Right.");
		 	printf("\nNow Move To Second Character.");
		 	printf("\nEnter a Character For Second Blank :");
		 	second_choice=getche();
		 	
		 	if(second_choice == 'H' || second_choice == 'h')
		 	{
		 		printf("\nYeah! Again Right !");
		 		printf("\n\nNow Move To Third Blank ");
		 	  third_choice=getche();
		 		if(third_choice == 'L' || third_choice == 'l')
		 		{
		 			printf("\nYeah! You are Right");
		 			printf("\n Now Move to Fourth Blank");
	            }
	           d : printf("\nEnter a Character For Fourth Blank :");
	        		fourth_choice=getche();
		 			
		 			if(fourth_choice =='N' || fourth_choice =='n')
		 			{
		 				printf("\n\n\n Yeah! You Are Right.\n\n\n");
		 				printf("\n\n ~~~***Congratulations!!!***~~~\n\n");
		 				printf("\n\n ~~~~~~~~~~~~You Are The Winner~~~~~~~~~~~~~\n\n");
		 		    }
		 	else 
		    {
		    	printf("Oh!! You are Wrong! Please Enter Again");
		    	goto d;
		    }
				 
	     }
		    
	}
		    else
		    {
		    	printf("\nOhh! Your First Choice Is Wrong ! Try Again!");
		    	goto e;
			}
	    
		

	}
 		

