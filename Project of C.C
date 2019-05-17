#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void day()
{
  int chooseday;
  void floorsunday();
  void floormonday();
  void floortuesday();
  void floorwednesday();
  void floorthursday();
  void floorfriday();
  void floorsaturday();
  void main();
  clrscr();
  printf("            @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @ @         \n");
  printf("             Press 1: Sunday\n\n");
  printf("             Press 2: Monday\n\n");
  printf("             Press 3: Tuesday\n\n");
  printf("             Press 4: Wednesday\n\n");
  printf("             Press 5:Thursday\n\n");
  printf("             Press 6:Friday\n\n");
  printf("             Press 7:Saturday\n\n");
  printf("             Press 8:Back to Menu\n\n");

  printf("Please Enter your choice: ");
  scanf("%d",&chooseday);

  switch(chooseday)
  {
    case 1:
	     floorsunday();
	     break;
    case 2:
	     floormonday();
	     break;
    case 3:
	     floortuesday();
	     break;
    case 4:
	     floorwednesday();
	     break;
    case 5:
	     floorthursday();
	     break;
    case 6:
	     floorfriday();
	     break;
    case 7:
	     floorsaturday();
	     break;
    case 8:  main();
	     break;

    default:
	     printf("Invalid choice");

  }

	     getch();

}

void floorsunday()      //Start of function for showing room and floor
{
 int choosefloor;
 void roomchsun1();
 void roomdissun1();
 void roomchsun2();
 void roomdissun2();
 void roomchsun3();
 void roomdissun3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked Rooms:\n");
	  roomdissun1();
	  roomchsun1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdissun2();
	  roomchsun2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdissun3();
	  roomchsun3();

	  break;
  default:
	  printf("Invalid Choice");

 }


}


void floormonday()
{
 int choosefloor;
 void roomchmon1();
 void roomdismon1();
 void roomchmon2();
 void roomdismon2();
 void roomchmon3();
 void roomdismon3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdismon1();
	  roomchmon1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdismon2();
	  roomchmon2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdismon3();
	  roomchmon3();

	  break;
  default:
	  printf("Invalid Choice");

 }

}

void floortuesday()
{
 int choosefloor;
 void roomchtue1();
 void roomdistue1();
 void roomchtue2();
 void roomdistue2();
 void roomchtue3();
 void roomdistue3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdistue1();
	  roomchtue1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdistue2();
	  roomchtue2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdistue3();
	  roomchtue3();

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorwednesday()
{
 int choosefloor;
 void roomchwed1();
 void roomdiswed1();
 void roomchwed2();
 void roomdiswed2();
 void roomchwed3();
 void roomdiswed3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdiswed1();
	  roomchwed1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdiswed2();
	  roomchwed2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdiswed3();
	  roomchwed3();

	  break;
  default:
	  printf("Invalid Choice");

 }

}

void floorthursday()
{
 int choosefloor;
 void roomchthu1();
 void roomdisthu1();
 void roomchthu2();
 void roomdisthu2();
 void roomchthu3();
 void roomdisthu3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisthu1();
	  roomchthu1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisthu2();
	  roomchthu2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisthu3();
	  roomchthu3();

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorfriday()
{
 int choosefloor;
 void roomchfri1();
 void roomdisfri1();
 void roomchfri2();
 void roomdisfri2();
 void roomchfri3();
 void roomdisfri3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisfri1();
	  roomchfri1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisfri2();
	  roomchfri2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdisfri3();
	  roomchfri3();

	  break;
  default:
	  printf("Invalid Choice");

 }

}


void floorsaturday()
{
 int choosefloor;
 void roomchsat1();
 void roomdissat1();
 void roomchsat2();
 void roomdissat2();
 void roomchsat3();
 void roomdissat3();

 clrscr();

 printf("\n\n\t\t\t\t1.Floor 1\n\n");
 printf("\t\t\t\t2.Floor 2\n\n");
 printf("\t\t\t\t3.Floor 3\n\n");

 printf("Choose Floor:");
 scanf("%d",&choosefloor);

 switch(choosefloor)
 {
  case 1:
	  clrscr();
	  printf("\t\t\t\t=====FLOOR 1=====\n\n");
	  printf("1.F1R01\t\t 2.F1R02\t 3.F1R03\t 4.F1R04\t 5.F1R05\n 6.F1R06\t 7.F1R07\t 8.F1R08\t 9.F1R09\t 10.F1R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdissat1();
	  roomchsat1();

	  break;
  case 2:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 2=====\n\n");
	  printf("1.F2R01\t\t 2.F2R02\t 3.F2R03\t 4.F2R04\t 5.F2R05\n 6.F2R06\t 7.F2R07\t 8.F2R08\t 9.F2R09\t 10.F2R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdissat2();
	  roomchsat2();

	  break;
  case 3:
	  clrscr();

	  printf("\t\t\t\t=====FLOOR 3=====\n\n");
	  printf("1.F3R01\t\t 2.F3R02\t 3.F3R03\t 4.F3R04\t 5.F3R05\n 6.F3R06\t 7.F3R07\t 8.F3R08\t 9.F3R09\t 10.F3R10\t");
	  printf("\n\nBooked rooms are:\n");
	  roomdissat3();
	  roomchsat3();

	  break;
  default:
	  printf("Invalid Choice");

 }


}                           //End fo function of showing floor and rooms




			   //Srart of Function for choosing room
void roomchsun1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("sunf1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchsun2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("sunf2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchsun3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("sunf3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchmon1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("monf1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchmon2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("monf2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchmon3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("monf3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchtue1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("tuef1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchtue2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("tuef2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchtue3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("tuef3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchwed1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("wedf1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchwed2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("wedf2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchwed3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("wedf3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchthu1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("thuf1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchthu2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("thuf2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchthu3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("thuf3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchfri1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("frif1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchfri2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("frif2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchfri3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("frif3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}


void roomchsat1()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("satf1.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F1R01")!=0)&&(strcmp(roomnum,"F1R02")!=0)&&(strcmp(roomnum,"F1R03")!=0)&&(strcmp(roomnum,"F1R04")!=0)&&(strcmp(roomnum,"F1R05")!=0)&&(strcmp(roomnum,"F1R06")!=0)&&(strcmp(roomnum,"F1R07")!=0)&&(strcmp(roomnum,"F1R08")!=0)&&(strcmp(roomnum,"F1R09")!=0)&&(strcmp(roomnum,"F1R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F1R01")==0)||(strcmp(roomnum,"F1R02")==0)||(strcmp(roomnum,"F1R03")==0)||(strcmp(roomnum,"F1R04")==0)||(strcmp(roomnum,"F1R05")==0)||(strcmp(roomnum,"F1R06")==0)||(strcmp(roomnum,"F1R07")==0)||(strcmp(roomnum,"F1R08")==0)||(strcmp(roomnum,"F1R09")==0)||(strcmp(roomnum,"F1R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchsat2()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("satf2.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F2R01")!=0)&&(strcmp(roomnum,"F2R02")!=0)&&(strcmp(roomnum,"F2R03")!=0)&&(strcmp(roomnum,"F2R04")!=0)&&(strcmp(roomnum,"F2R05")!=0)&&(strcmp(roomnum,"F2R06")!=0)&&(strcmp(roomnum,"F2R07")!=0)&&(strcmp(roomnum,"F2R08")!=0)&&(strcmp(roomnum,"F2R09")!=0)&&(strcmp(roomnum,"F2R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F2R01")==0)||(strcmp(roomnum,"F2R02")==0)||(strcmp(roomnum,"F2R03")==0)||(strcmp(roomnum,"F2R04")==0)||(strcmp(roomnum,"F2R05")==0)||(strcmp(roomnum,"F2R06")==0)||(strcmp(roomnum,"F2R07")==0)||(strcmp(roomnum,"F2R08")==0)||(strcmp(roomnum,"F2R09")==0)||(strcmp(roomnum,"F2R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}

void roomchsat3()
{

 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("satf3.txt","a");

 if(fp==NULL)
  {
   printf("Cannot open a file");
   exit(0);
  }

  printf("\n\nEnter number of room you want to book: ");
  scanf("%d",&numofroom);

  if(numofroom<=10)
  {

   printf("\n\nEnter room numbers");
   for(i=1;i<=numofroom;i++)
   {
    if(i==1)
     {
      printf("\n\tEnter %dst room number: ",i);
     }
    if(i==2)
     {
     printf("\n\tEnter %dnd room number: ",i);
     }
    if(i==3)
     {
      printf("\n\tEnter %drd room number: ",i);
     }
    if(i>3)
     {
      printf("\n\tEnter %dth room number: ",i);
     }

     scanf("%s",roomnum);

    if((strcmp(roomnum,"F3R01")!=0)&&(strcmp(roomnum,"F3R02")!=0)&&(strcmp(roomnum,"F3R03")!=0)&&(strcmp(roomnum,"F3R04")!=0)&&(strcmp(roomnum,"F3R05")!=0)&&(strcmp(roomnum,"F3R06")!=0)&&(strcmp(roomnum,"F3R07")!=0)&&(strcmp(roomnum,"F3R08")!=0)&&(strcmp(roomnum,"F3R09")!=0)&&(strcmp(roomnum,"F3R10")!=0))
     {
       printf("\n\n\t\t\t\tInvalid room number");
       i=i-1;

     }

    if((strcmp(roomnum,"F3R01")==0)||(strcmp(roomnum,"F3R02")==0)||(strcmp(roomnum,"F3R03")==0)||(strcmp(roomnum,"F3R04")==0)||(strcmp(roomnum,"F3R05")==0)||(strcmp(roomnum,"F3R06")==0)||(strcmp(roomnum,"F3R07")==0)||(strcmp(roomnum,"F3R08")==0)||(strcmp(roomnum,"F3R09")==0)||(strcmp(roomnum,"F3R10")==0))
     {
       fprintf(fp,"%s\t",roomnum);
     }

     roomnum[0]='\0';

    }


  }
    else
    {
      printf("\nSorry we have only 10 rooms in each floor");
    }

     fclose(fp);
}
		       //End of function for choosing room


void roomdissun1()     //Function for displaying Booked room
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;


 fp=fopen("sunf1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);

}

void roomdissun2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("sunf2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);
}


void roomdissun3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("sunf3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);

}


void roomdismon1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("monf1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);

}

void roomdismon2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("monf2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);

}

void roomdismon3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("monf3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);

}

void roomdistue1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("tuef1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);

}

void roomdistue2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("tuef2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);

}

void roomdistue3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("tuef3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);

}

void roomdiswed1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("wedf1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);

}

void roomdiswed2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("wedf2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);
}

void roomdiswed3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("wedf3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);
}

void roomdisthu1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("thuf1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);
}

void roomdisthu2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("thuf2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);
}

void roomdisthu3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("thuf3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);
}

void roomdisfri1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("frif1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);
}

void roomdisfri2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("frif2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);
}

void roomdisfri3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("frif3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);
}


void roomdissat1()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("satf1.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
    printf("%s\t",roomnum,numofroom);
  }

    fclose(fp);
}

void roomdissat2()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("satf2.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
  {
   printf("%s\t",roomnum,numofroom);
  }

   fclose(fp);
}

void roomdissat3()
{
 FILE *fp;
 char roomnum[30];
 int numofroom;
 int i;

 fp=fopen("satf3.txt","a+");

 if(fp==NULL)
  {
   puts("file cannot found");
   exit(0);
  }

  while(fscanf(fp,"%s%d",roomnum,&numofroom)!=EOF)
   {
    printf("%s\t",roomnum,numofroom);
   }

    fclose(fp);
}                          //End of function for displaying booked room


void record()
{
  FILE *fp;

 char name[30];
 char address[30];
 char contact[30];
 char day[30];
 int floornum;
 int numofroom;
 char roomnum[30];

 fp=fopen("Record.txt","a");

 if(fp==NULL)
 {
  puts("file not found");
  exit(0);
 }

 printf("\nEnter your Name: ");
 scanf("%s",&name);
 printf("\nEnter your Address: ");
 scanf("%s",address);
 printf("\nEnter your Contact Number: ");
 scanf("%s",contact);
 printf("\nEnter Day: ");
 scanf("%s",day);
 printf("\nEnter Floornumber: ");
 scanf("%d",&floornum);
 printf("\nEnter number of room you want to book: ");
 scanf("%d",&numofroom);
 printf("\nEnter your Roomnumber: ");
 scanf("%s",roomnum);
 getch();
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\t\t\t\tProcessing...");
 delay(2000);
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\t\t\t Registration Succeed \n");

 fprintf(fp,"%s\n%s\n%s\n%s\n%d\n%d\n%s",name,address,contact,day,floornum,numofroom,roomnum);
 fprintf(fp,"\n");

 fclose(fp);
 getch();

}

void viewrecord()
{

 FILE *fp;

 char name[30];
 char address[30];
 char contact[30];
 char day[30];
 int floornum;
 int numofroom;
 char roomnum[30];
 char dayname[30];
 int rent;


 clrscr();

 fp=fopen("Record.txt","a+");

 if(fp==NULL)
 {
  puts("file not found");
  exit(0);
 }
 printf("\n\t\t\t===== ENTER NAME OF DAY =====\n\n\n\t\t\t\t");
 scanf("%s",dayname);
 clrscr();
 printf("\n\n\n\n\n\n\n\n\n\t\t\tPlease wait...");
 delay(1000);
 clrscr();

 while(fscanf(fp,"%s%s%s%s%d%d%s",name,address,contact,day,&floornum,&numofroom,roomnum)!=EOF)
 {

  rent=numofroom*40;

  if(strcmp(dayname,day)==0)
  {
    printf("\nName= %s\nAddress= %s\nContact= %s\nDay= %s\nFloornum= %d\nNumofroom= %d\nRoomnum= %s",name,address,contact,day,floornum,numofroom,roomnum);

    printf("\nTotal charge=%d * 40 = %d $\n\n",numofroom,rent);

  }

 }

 fclose(fp);
 getch();
}

void main()  //main function
{
   char choose;

   clrscr();

 do
  {

   printf("................... Room Management System ...................\n\n");
   printf("**************************************************************\n\n");
   printf("             ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("\t           Press 1: Get avability and Select\n\n");
   printf("\t           Press 2: Room Booking \n\n");
   printf("\t           Press 3: Show customer Details\n\n");
   printf("\t           Press 4:  Exit \n\n");
   printf("**************************************************************\n\n");


   printf("\t\t\tplease enter your choice\t");
   choose=getchar();

   switch(choose)
   {
     case '1':
	      clrscr();

	      day();
	      clrscr();

	      break;

     case '2':
	      clrscr();
	      printf("\n\t\t\t=====REGISTRATION=====\n");

	      record();

	      clrscr();

	      break;

     case '3':
	      clrscr();
	      viewrecord();

	      break;

     case '4':
	      exit(0);
	      break;

     default:
	     clrscr();

   }


  } while(choose!=NULL);

  getch();
}