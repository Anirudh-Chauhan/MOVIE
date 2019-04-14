#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<fstream.h>
class Movie
{public:
 int a,b,c,d,j,i,h,f,g,e,k, age;
 int Totalseats;
 char ch1;
 char Name[50];
 char Phoneno[11];
 char Phoneno1[11];
 char* RetNo() { return Phoneno; }
 void MainMenu();
 void MovieMenu();
 void Bill();
 void Food();
 void MovieDiscription();
 void Info();
 double calcost1();
 double  calcost6(), calcost3(),calcost4(),calcost5(),calcost7();
 double cost,cost1,cost3,cost2,cost4,cost5,cost6;
 void calcost2();
 void MovieTimings();
 void MovieDescription();
 Movie()
 { Totalseats=200;
   ch1='y';
   cost=0;
   cost1=0;
   cost2=0;
   cost3=0;
   cost4=0;
 }
 void MovieName();
 char Moviename[80];
 void FindTicket();
}M;
void intro()
{
 textcolor(WHITE);
 textbackground(LIGHTGREEN);
 gotoxy(25,1);
cprintf("   Computer Science Project   ");
 textcolor(YELLOW);
 cout<<"\n\n\n\n";
cprintf("********************************************************************************");
gotoxy(33,12);
cprintf("Movie Ticket System");
}
void Movie::MainMenu()
{ intro();
  delay(5000);
  clrscr();
do
  { cout<<"\n\n\n\n\n";
cprintf("                         Movie Ticket Booking System                            ");
cprintf("                                                                                ");
delay(1000);
cprintf("                       <1> Book A Movie                                         ");
cprintf("                                                                                ");
delay(1000);
cprintf("                       <2> View Discription of Streaming Movies                 ");
cprintf("                                                                                ");
delay(1000);
cprintf("                       <3> View Timings for Movies	                             ");
cprintf("                                                                                ");
delay(1000);
cprintf("                       <4> Find Ticket                                                 ");
cprintf("                                                                                ");
delay(1000);
cprintf("                       <5> Exit                                                 ");
     cprintf("Enter Your Choice : "); cin>>a;
    switch(a)
    { case 1:MovieMenu(); break;
      case 2:MovieDescription(); break;
      case 3: clrscr();
	      gotoxy(20,4);
	      cprintf("Your choice:3.MOVIE TIMINGS");cout<<"\n\n\n";
	      MovieTimings(); getch();
	      break;
      case 4:FindTicket(); break;
      case 5:exit(0); break;
      default:cout<<"\nInvalid Choice "; break;
    } clrscr();
  }while(a!=1);
}
void Movie::MovieMenu()
{  textcolor(BLUE);
   textbackground(WHITE);
   clrscr();
   cprintf("Your Choice: 1.BOOK A MOVIE ");
   cout<<"\n\n\n\n"; textcolor(BLUE+BLINK);
   delay(800);
   cprintf("                         Welcome To Fun cinemas                                 ");
   delay(1000);	     textcolor(BLUE);
   cprintf("                      Latest Movies Streaming :                                 ");
cprintf("                                                                                ");
cprintf("                        <1>The Shawshank Redemption                             ");
cprintf("                                                                                ");
cprintf("                        <2> Forrest Gump                                        ");
cprintf("                                                                                ");
cprintf("                        <3> Walk The Line                                       ");
cprintf("                                                                                ");
cprintf("                        <4> The Fault In Our Stars                              ");
cprintf("                                                                                ");
cprintf("                        <5> Mr.Church                                           ");
	cout<<"\n";
cprintf("Enter Your Choice : ");
	cin>>b;clrscr();
cprintf("                              MOVIE TIMINGS                                     ");
	MovieTimings();
	 cout<<"\n";
cprintf("Enter Your Choice : ");
	   cin>>e;
      clrscr();

	cout<<"\n";cprintf("Which Type of Ticket You Want To Book :");
	cout<<"\n";
cprintf("                                                                                ");
  gotoxy(25,6);
cprintf("<1>VIP SEAT ( RS 1000 PER HEAD )");
  gotoxy(25,8);
cprintf("<2>GOLD SEAT( RS 800 PER HEAD )");
  gotoxy(25,10);
cprintf("<3>SILVER SEAT( RS 500 PER HEAD)");
       cout<<"\n";cprintf("Enter your Choice : ");
       cin>>c;
       cout<<"\n";cprintf("Enter The Number of The Tickets You Want To Book : ");
       cin>>d;
       cout<<"\n";cprintf("Do You Want Some Food Or Beverages ? : (Y/N) ");
       cin>>ch1;
    if(ch1=='y' || ch1=='Y')
      {  clrscr();
	Food();
      }
     clrscr();
  Info();
  calcost7();
     cout<<"\n";cprintf("Your Bill :");cout<<" \n";
  Bill();
     cout<<"\n\n";
cprintf(" THANKS FOR CHOOSING US , ENJOY YOUR MOVIE AND HAVE A NICE DAY!!!               ");

    }
void Movie::MovieDescription()
{ int z;
  clrscr();
  textcolor(LIGHTGREEN);
gotoxy(1,8);
cprintf("                        <1>The Shawshank Redemption                             ");
gotoxy(1,10);
cprintf("                        <2> Forrest Gump                                        ");
gotoxy(1,12);
cprintf("                        <3> Walk The Line                                       ");
gotoxy(1,14);
cprintf("                        <4> The Fault In Our Stars                              ");
gotoxy(1,16);
cprintf("                        <5> Mr.Church                                           ");
cprintf("Enter Your Choice : "); cin>>z;
clrscr();
textcolor(YELLOW);
if(z==1)
{ gotoxy(35,2);
cprintf("THE SHAWSHANK REDEMPTION");
cout<<"\n\n";
cprintf("The Shawshank Redemption is a 1994 American drama film written and directed by  ");
cprintf("Frank Darabont, and based on the Stephen Kingnovella Rita Hayworth and Shawshank");
cprintf("Redemption. The film tells the story of banker Andy Dufresne (Tim Robbins), who ");
cprintf("is sentenced to life in Shawshank State Penitentiary for the murder of his wife ");
cprintf("and her lover, despite his claims of innocence. While The Shawshank Redemption  ");
cprintf("received positive reviews at release, it was a box office disappointment, owing ");
cprintf("to competition from other films such as Pulp Fiction.[1] The film received      ");
cprintf("multiple award nominations (including seven Oscar nominations) and highly       ");
cprintf("positive reviews from critics for its acting, story, and realism.               ");
cprintf("In 1947 Portland, Maine, banker Andy Dufresne is convicted of murdering his wife");
cprintf("and her lover, and he is sentenced to two consecutive life sentences at the     ");
cprintf("Shawshank State Penitentiary. Andy is befriended by contraband smuggler, Ellis  ");
cprintf(" Red Redding, an inmate serving a life sentence. Red procures a rock hammer for ");
cprintf("Andy and later a large poster of Rita Hayworth for him. Working in the prison   ");
cprintf("laundry,Andy is regularly assaulted by the Sisters and their leader,Bog severely");
} else if(z==2)
{   gotoxy(35,2);
cprintf("FORREST GUMP");
cout<<"\n\n";
cprintf("Forrest Gump is a 1994 American drama film based on the novel Forrest Gump by  ");
cprintf("Winston Groom.The story shows several decades in the life of Forrest Gump , a  ");
cprintf(" slow witted but kind hearted & athletically genius from Alabam,who witnesses, ");
cprintf(" and in some cases influences, some of the defining events of the latter half  ");
cprintf("of the 20th century in the United States; more specifically, the period between");
cprintf(" Forrest's birth in 1944 and 1982. The film differs substantially from Winston ");
cprintf("Groom's novel, including Gump's personality and several events that were       ");
cprintf("depicted.                                                                      ");
cprintf("Principal photography took place in late 1993, mainly in Georgia,North Carolina");
cprintf("and South Carolina. Extensive visual effects were used to incorporate the      ");
cprintf("protagonist into archived footage and to develop other sc enes. A comprehensive");
cprintf("soundtrack was featured in the fi lm, using music intended to pinpoint specific");
cprintf("time peri ods portrayed on screen. Its commercial release made it a top-selling");
cprintf("soundtrack, selling over 12 million copi es worldwide.                         ");
}else if(z==3)
{   gotoxy(35,2);
cprintf("WALK THE LINE");
cout<<"\n\n";
cprintf("Walk the Line is a 2005 American biographical drama film directed by James      ");
cprintf("Mangold and based on the early life and career of singer Johnny Cash. The film  ");
cprintf("stars Joaquin Phoenix, Reese Witherspoon, Ginnifer Goodwin, and Robert Patrick. ");
cprintf("The film focuses on Cash's early life, his romance with June Carter, and his    ");
cprintf("ascent to the country music scene, as based on his autobiographies. The         ");
cprintf("screenplay was written by Mangold and Gill Dennis. The film's production budget ");
cprintf(" is estimated to have been US$28 million.                                       ");
cprintf("In 1968, as an audience of inmates at Folsom State Prison cheer for Johnny Cashs");
cprintf("band, he waits backstage near a table saw, reminding him of his early life.In   ");
cprintf("1944, Johnny, then known as J.R., is raised on a cotton farm in Dyess, Arkansas ");
cprintf("with his brother Jack, father Ray, and mother Carrie. J.R. is known for his     ");
cprintf("singing of hymns, while his brother Jack trains himself to become a pastor.     ");
}else if(z==4)
{   gotoxy(35,2);
cprintf("THE FAULT IN OUR STARS ");
cout<<"\n\n";
cprintf("The Fault in Our Stars is a 2014 American romantic drama film directed by Josh  ");
cprintf("Boone, based on the novel of the same name by John Green. The film stars Shailen");
cprintf("Woodley, Ansel Elgort, and Nat Wolff, with Laura Dern, Sam Trammell, and Willem ");
cprintf("Dafoeplaying supporting roles.Woodley plays Hazel Grace Lancaster,a sixteen-year");
cprintf("old cancer patient who is forced by her parents to attend a support group, where");
cprintf("she meets and subsequently falls in love with Augustus Waters, another cancer   ");
cprintf("patient, played by Elgort.                                                      ");
cprintf("Development of The Fault in Our Stars began in January 2012 when Fox 2000, a    ");
cprintf("division of 20th Century Fox, optioned the rights to adapt the novel into a     ");
cprintf("feature film. Principal photography began on August 26, 2013, in Pittsburgh,    ");
cprintf("Pennsylvania, with a few additional days in Amsterdam, The Netherlands, before  ");
cprintf("concluding on October 16, 2013. Pittsburgh doubled for all of the scenes set in ");
cprintf("Indianapolis, Indiana, the novel's setting, as well as for some interior scenes ");
cprintf("set in Amsterdam.                                                               ");
}else if(z==5)
{   gotoxy(35,2);
cprintf("Mr.CHURCH");
cout<<"\n\n";
cprintf(" Mr. Church is a 2016 American dramedy film directed by Bruce Beresford and     ");
cprintf(" written by Susan McMartin. The film stars Eddie Murphy as the title character  ");
cprintf(" with Britt Robertson, Xavier Samuel, Lucy Fry, Christian Madsen and Natascha   ");
cprintf(" McElhone also starring. The film debuted on April 22, 2016, at the Tribeca Film");
cprintf(" Festival[3] and was released on September 16, 2016, by Cinelou Releasing and   ");
cprintf(" Freestyle Releasing.Charlotte Charlie Brooks  lives with her single            ");
cprintf(" mother Marie Brooks (Natascha McElhone) in a small beat-up apartment. She is   ");
cprintf(" awakened by cooking that smells like heaven, to find a stranger named Mr. Henry");
cprintf(" Joseph Church . Charlie does not like this mysterious man in her house.        ");
cprintf(" Marie agrees with Charlie to get rid of him until she finds out he was hired by");
cprintf(" Marie's deceased ex-lover to take care of her for six months because she has   ");
cprintf(" breast cancer and only has six months to live.                                 ");
}
 getch();
}
void Movie::FindTicket()
{ ifstream fin;
  fin.open("Movie.dat",ios::binary);
  Movie M1;
  int f=0;
  textcolor(CYAN);
  char Phone[11];
  cprintf("\n\r Enter Your Phone Number : "); gets(Phone);
  while(fin.read((char*)&M1,sizeof(Movie)))
  { if(!strcmp(M1.Phoneno,Phone))
    { f=1;
      cprintf("\n\rYour Ticket : "); M1.Bill();
      break;
    }
  }
  if(!f) { cprintf("Ticket Not Found"); getch(); }
  fin.close();
}
void Movie::MovieTimings()
{     textbackground(WHITE);
       textcolor(YELLOW);
gotoxy(1,8);
cprintf("                        <1> 10:30 AM                                            ");
cprintf("                                                                                ");
cprintf("                        <2> 11:45 AM                                            ");
cprintf("                                                                                ");
cprintf("                        <3> 2:15  PM                                            ");
cprintf("                                                                                ");
cprintf("                        <4> 7:30  PM                                            ");
cprintf("                                                                                ");
cprintf("                        <5> 11:45 PM (LAST SHOW)                                ");
cprintf("                                                                                ");
}
void Movie::Food()
{      textbackground(WHITE);
	       textcolor(GREEN);
cprintf("                                                                                ");cprintf("                                                                                ");
cprintf("                                                                                ");
cprintf("                         Welcome To The Food Counter                            ");
cprintf("                                                                                ");
cprintf("                        <1> Snacks                                              ");
cprintf("                                                                                ");
cprintf("                        <2> Beverages                                           ");
cprintf("                                                                                ");
cprintf("                        <3> Best Combo's                                        ");
		cout<<"\n"; cprintf("Enter your choice : ");
	      cin>>f;
    if(f==1)
    {
cprintf("                        <1>Burger - RS 60                                       ");
cprintf("                                                                                ");
cprintf("                        <2>Pizza - RS 120                                       ");
cprintf("                                                                                ");
cprintf("                        <3>Hotdog- RS 70                                        ");
cprintf("                                                                                ");
cprintf("                        <4>Popcorn-Depend On Size                               ");
	cout<<"\n"; cprintf("Enter your choice : ");
      cin>>g;
     if(g==4)
       {
cprintf("Enter the size of Popcorn Pack You Need ? :                                     ");
cprintf("                                                                                ");
cprintf("                        <1> Small- RS 40                                        ");
cprintf("                                                                                ");
cprintf("                        <2> Medium- RS 70                                       ");
cprintf("                                                                                ");
cprintf("                        <3> Large-Rs 100                                        ");
	cout<<"\n"; cprintf("Enter your choice : ");
       cin>>h;
       }
      }
     if(f==2)
       {
cprintf("                        <1> Pepsi- RS 60                                        ");
cprintf("                                                                                ");
cprintf("                        <2> Cold Coffee- RS 120                                 ");
cprintf("                                                                                ");
cprintf("                        <3> Coffee - RS 70                                      ");
	cout<<"\n"; cprintf("Enter your choice : ");
	cin>>j;
       }
     if(f==3)
       {
cprintf("                        <1> Pepsi(300 ML) + Burger -: RS 120                    ");
cprintf("                                                                                ");
cprintf("                        <2> Cold Coffee + Pizza-: RS 220                        ");
cprintf("                                                                                ");
cprintf("                        <3> Coffee + Popcorn(Small)-:RS 100                     ");
       cprintf("Enter your choice : ");
       cin>>k;
       }
     cout<<"\n";cprintf("Enter How much Meal Pieces You Want : ");
     cin>>i;

}
    void Movie::Info()
      {    textbackground(WHITE);
	   textcolor(BLUE);
cprintf(" Enter Your Name :                                                              ");
	   gets(Name);
cprintf(" Enter Your Phone Number (10 Digit Max ) -:                                     ");
	   gets(Phoneno);
cprintf(" Enter Your Age -:                                                              ");
	   cin>>age;
     }
  double Movie:: calcost1()
  {
  if(c==1)
  {  cost1=d*1000;
  }
  else if(c==2)
	{
	cost1=d*800;
	}
   else
       cost1=d*500;
 cprintf("Ticket Cost: ");cprintf("%lf",cost1);cout<<endl;
 return cost1;

 }
 void Movie::calcost2()
 {
  switch(f)
  {
   case 1:calcost3();
	break;
   case 2:calcost4();
	break;
   case 3:calcost5();
	break;
   default:break;

  }
  }
 double Movie::calcost3()
 {
 if(g==1)
   {
	cost2=i*60;
   }
   else if(g==2)
	  {
		 cost2=i*120;
	  }
   else if(g==3)
	{
		cost2=i*70;
	}
   else if(g==4)
	 {
		cost2=calcost6();
	 }
       cprintf("Snacks Cost: ");cprintf("%lf",cost2);cout<<endl;
    return cost2;
 }

 double Movie::calcost6()
 {
 if(h==1)
 {
	cost6=i*40;
 }
 else if(h==2)
      {
	cost6=i*70;
       }
 else if(h==3)
      {
	 cost6=i*100;
      }

   cprintf("Snacks Pop: ");cprintf("%lf",cost6);cout<<endl;
   return cost6;
}
double Movie::calcost4()
{   if(j==1)
    {
	 cost3=i*60;
     }
    else if(j==2)
    {
	cost3=i*120;
     }
    else if(j==3)
     {
     cost3=i*70;
     }

    cprintf("    Drinks: ");cprintf("%lf",cost3);cout<<endl;
   return cost3;
 }

double Movie::calcost5()
{  if(k==1)
    {
	cost4=i*120;
    }else if(k==2)
    {
	cost4=i*220;
    }
    else if(k==3)
    {
	cost4=i*100;
    }

    cprintf("    Combo: ");cprintf("%lf",cost4);cout<<endl;
   return cost4;
}
void Movie::Bill()
{ clrscr();
  textcolor(BLUE);
  gotoxy(25,6);
  cprintf("*****      Funcinemas       *****  ");
  gotoxy(25,10);
  cprintf("Your Name:- %s",Name);
  gotoxy(25,12);
  cprintf("Your Phone Number:- %s",Phoneno);
  MovieName();
  gotoxy(25,14);
  cprintf("Movie Name:- %s",Moviename);
  gotoxy(25,16);
  cprintf(" Your Total Bill Is %lf\n\r",calcost7());
  getch();
}
double Movie::calcost7()
{
   calcost2();
     cost=calcost1()+calcost3()+calcost4()+calcost5();

cprintf("Total Cost: ");cprintf("%lf",cost);cout<<endl;
   return cost;
}
void Movie:: MovieName()
{   textcolor(CYAN);
    textbackground(WHITE);
      if(b==1)
      {
       strcpy(Moviename,"The Shawshank Redemption");

       }
       else if(b==2)
      {
	strcpy(Moviename,"Forrest Gump");
      }
      else if(b==3)
      {strcpy(Moviename,"Walk The Line");
      }
      else if(b==4)
      {strcpy(Moviename,"The Fault In Our Stars");
      }
     else if(b==5)
      {strcpy(Moviename,"Mr.Church");
      }
      else
      cout<<"Wrong choice ";

}

void main()
{ char ch2='Y';
  clrscr();

 cout<<"\n";
 textbackground(BLUE);
 while(ch2=='Y'||ch2=='y')
 { clrscr();
   M.MainMenu();
   textcolor(RED);
   cout<<"\n\n\n";
   cprintf("Do you want to book more tickets:");
   cin>>ch2;
 }
 ofstream  fout;
 fout.open("Movie.dat",ios::app|ios::binary);
 fout.write((char*)&M,sizeof(M));
 fout.close();
 /**/
 getch();
}