#include<dos.h>
#include<iostream.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<bios.h>
#include<time.h>

void pattern(int a)
	{
	if(a==1)
		{

		textcolor(8);
		gotoxy(53,1);cprintf(" #########");
		gotoxy(53,2);cprintf("    ###");
		textcolor(8);
		gotoxy(53,3);cprintf("    * *");
		gotoxy(53,4);cprintf("   *    *");
		gotoxy(53,5);cprintf(" *       *");
		gotoxy(53,6);cprintf("*         *");
		gotoxy(53,7);cprintf("  *     *");
		gotoxy(53,8);cprintf("   *****");
		}
	else
	if(a==2)
		{
		textcolor(8);
		gotoxy(53,1);cprintf("  #########");
		gotoxy(53,2);cprintf("     ###");
		textcolor(14);
		gotoxy(53,3);cprintf("00____");textcolor(8);cprintf("*");textcolor(14);cprintf("___ 00");
		gotoxy(53,4);cprintf("l-l ## ## l-l");
		gotoxy(53,5);textcolor(8);cprintf(" *");textcolor(14);cprintf("l ^   ^ l");textcolor(8);cprintf("*");
		gotoxy(53,6);textcolor(8);cprintf("* ");textcolor(14);cprintf("l   l   l ");textcolor(8);cprintf("*");
		gotoxy(53,7);textcolor(8);cprintf(" *");textcolor(14);cprintf("l  ---  l");textcolor(8);cprintf("*");
		gotoxy(53,8);textcolor(8);cprintf("  *");textcolor(14);cprintf("_______");textcolor(8);cprintf("*");
		textcolor(8);
		gotoxy(53,9);cprintf("     ***");
		}
	else
	if(a==3)
		{
		textcolor(14);
		gotoxy(53,10);cprintf("    =====");
		gotoxy(53,11);cprintf("***         ***");
		gotoxy(52,12);cprintf("* *           * *");
		gotoxy(51,13);cprintf("* *             * *");
		gotoxy(51,14);cprintf("###             ###");
		gotoxy(51,15);cprintf("###             ###");
		gotoxy(51,16);cprintf("# #             # #");

		}
	else
	if(a==4)
		{
		gotoxy(53,11);cprintf("***#=======#***");
		gotoxy(52,12);cprintf("* * #       # * *");
		gotoxy(51,13);cprintf("* *  #       #  * *");
		gotoxy(51,14);cprintf("###  #       #  ###");
		gotoxy(51,15);cprintf("###  #       #  ###");
		gotoxy(51,16);cprintf("# #  =========  # #");

		}
	else
	if(a==5)
		{
		textcolor(8);
		gotoxy(53,1);cprintf("  #########");
		gotoxy(53,2);cprintf("     ###");
		textcolor(14);
		gotoxy(53,3);cprintf("00____");textcolor(8);cprintf("*");textcolor(14);cprintf("___ 00");
		gotoxy(53,4);cprintf("l-l ## ## l-l");
		gotoxy(53,5);textcolor(8);cprintf(" *");textcolor(14);cprintf("l X   X l");textcolor(8);cprintf("*");
		gotoxy(53,6);textcolor(8);cprintf("* ");textcolor(14);cprintf("l   l   l ");textcolor(8);cprintf("*");
		gotoxy(53,7);textcolor(8);cprintf(" *");textcolor(14);cprintf("l  _-_  l");textcolor(8);cprintf("*");
		gotoxy(53,8);textcolor(8);cprintf("  *");textcolor(14);cprintf("_______");textcolor(8);cprintf("*");
		textcolor(8);
		gotoxy(53,9);cprintf("     ***");
		textcolor(14);
		gotoxy(53,10);cprintf("    =====");
		gotoxy(53,11);cprintf("***#=======#***");
		gotoxy(52,12);cprintf("* * #       # * *");
		gotoxy(51,13);cprintf("* *  #       #  * *");
		gotoxy(51,14);cprintf("###  #       #  ###");
		gotoxy(51,15);cprintf("###  #       #  ###");
		gotoxy(51,16);cprintf("# #  =l=l=l=l=  # #");
		gotoxy(51,17);cprintf("      l l l l ");
		gotoxy(51,18);cprintf("      l l l l");
		gotoxy(51,19);cprintf("      l l l l");
		gotoxy(51,20);cprintf("     l~~l l~~l");
		gotoxy(51,21);cprintf("     l__l l__l");

		}
	}
void game()
	{
	clrscr();
	randomize();
	int yw=0,k=0,i1,i2,j,i,c,flag=1,c1=0,r,z=0;
	char q[30]="\0";
	char s;
	char a[10][23]={"cat","dog","owl","deer","elephant","monkey","tiger","lion","rabbit","giraffe"};


	int n=rand()%10;
	gotoxy(1,1);
	textcolor(14);
	cprintf("Enter random characters and see if it matches");
	textcolor(1);
	gotoxy(3,3);
	for(i=1;i<=strlen(a[n]);i++)
		cout<<"_ ";

	while(z<30)
	{
	s=getch();
	int y=0;

	for(i=0;i<strlen(a[n]);i++)
		{
		if(s==a[n][i])
			{
			flag=i;
			break;
			}
		else
			flag=-1;
		}

	if(flag==i)
		{
		for(j=0;j<strlen(a[n]);j++)
			{
			for(i1=0;i1<k;i1++)
				if(s==q[i1])
					i2=1;

			if(i2!=1)
			{
			if(s==a[n][j])
				{
				gotoxy((3+(j*2)),3);
				cout<<s;
				yw++;
				y++;
				}
			}
			}
		}
	else
		{
		++c1;
		z--;
		pattern(c1);

		if(c1==5)
			{
			gotoxy(3,3);
			cout<<"    "<<a[n]<<"    ";
			gotoxy(15,15);
			cout<<"GAME OVER";
			getch();
			exit(0);
			}
		}
	i2=0;
	if(y==2)
		{
		z=z+2;
		q[k]=s;
		k++;
		q[k]=s;
		k++;
		}
	else
		{
		z++;
		q[k]=s;
		k++;
		}
	if(yw==strlen(a[n]) && c1<5)
		{
		clrscr();
		textcolor(13);
		gotoxy(10,3);cout<<"#   #  #####  #   #    #   #   #  ###  ##   #  #";
		gotoxy(10,4);cout<<"#   #  #   #  #   #    #  # #  #   #   # #  #  #";
		gotoxy(10,5);cout<<"#####  #   #  #   #    #  # #  #   #   #  # #  #";
		gotoxy(10,6);cout<<"  #    #   #  #   #    # #   # #   #   #   ##";
		gotoxy(10,7);cout<<"  #    #####  #####    ##     ##  ###  #    #  #";
		getch();
		exit(0);
		}
	}


	getch();
	}


void mainmenu()
	{
	clrscr();
	int n,c=30,r=10;
	textcolor(8);
	gotoxy(c,r);cprintf("PLAY");
	gotoxy(c,r+1);cprintf("HELP");
	gotoxy(c,r+2);cprintf("EXIT");
	c=28;
	gotoxy(c,r);
	cout<<"->";

	while(n!=7181)
		{
		n=bioskey(0);

		if(n==20480 && r<12)
			{
			gotoxy(c,r);
			cout<<"  ";
			gotoxy(c,r+=1);
			cout<<"->";
			}
		else if(n==18432 && r>10)
			{
			gotoxy(c,r);
			cout<<"  ";
			gotoxy(c,r-=1);
			cout<<"->";
			}
		else if(n==7181)
			{
			if(r==10)
				{
				game();
				}
			if(r==11)
				{
				clrscr();
				textcolor(14);
				gotoxy(3,5);
				cprintf("The player has to randomly type the alphabets");
				gotoxy(3,6);
				cprintf("If correct it will be shown on the screen or else");
				gotoxy(3,7);
				cprintf("after a maximum of 5 WRONG attempts the man will die");
				gotoxy(1,10);
				cout<<"_____________________________________________________________________"<<endl;
				gotoxy(10,12);
				cout<<"PRESS B to go BACK";
				gotoxy(10,13);
				cout<<"OR any other key to QUIT ";
				char c=getch();
				if(c=='b')
					{
					mainmenu();
					}
				else
					exit(0);

				}
			if(r==12)
				{
				exit(0);
				}
			}
		}
	}
void main()
{
	clrscr();
	int c=20,r=10,n;
	char s;
	textcolor(RED);
	gotoxy(c,r);cprintf("Û  Û  ÛÛÛÛ  Û   Û  ÛÛÛÛÛ  Û       Û  ÛÛÛÛ  Û   Û");r++;
	gotoxy(c,r);cprintf("Û  Û  Û  Û  ÛÛ  Û  Û      ÛÛ     ÛÛ  Û  Û  ÛÛ  Û");r++;
	gotoxy(c,r);cprintf("ÛÛÛÛ  ÛÛÛÛ  Û Û Û  Û  ÛÛ  Û Û   Û Û  ÛÛÛÛ  Û Û Û");r++;
	gotoxy(c,r);cprintf("Û  Û  Û  Û  Û  ÛÛ  Û   Û  Û  Û Û  Û  Û  Û  Û  ÛÛ");r++;
	gotoxy(c,r);cprintf("Û  Û  Û  Û  Û   Û  ÛÛÛÛÛ  Û   Û   Û  Û  Û  Û   Û");r=r+5;
	for(c=1;c<=78;c++)
	{
		textcolor(WHITE);
		gotoxy(c,r);
		cprintf("_");
	}
	delay(1001);
	textcolor(WHITE + BLINK);
	gotoxy(25,21);cprintf("Press any button to continue");
	gotoxy(32,23);cprintf("Press E to exit");
	gotoxy(c,r);cout<<"-";
	gotoxy(1,19);
	s=getch();
	if(s=='e')
	{
		exit(0);
	}
	else if(s!='e')
	{
		mainmenu();
	}
	getch();
	}
