/*write a program to make snake game*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int withd=25, heigth=25, gameover;
int x, y, fruitX, fruitY, score, flag;
int tailx[100], taily[100];
int counttail=0; 
void setup()
{
	gameover=0;
	x=withd/2;
	y=height/2;
	
	label1:
	fruitX=rand()%20;
	if(fruitX==0)
		goto label1;
	label2:
	fruitY=rand()%20;
	if(fruitY==0)
		goto label2;
	score=0;
}
void draw()
{
	int i, j, k;
	system("cls");
	for(i=0;i<withd;i++)
	{	
	    for(j=0;j<=height;j++)
		{
			if(i==0||i==height-1||j==0||j==withd-1)
			{
			printf("||");
			}
			else
			{
				if(i==x&&j==y)
					printf("U");
				else if(i==fruitX&&j==fruitY)
					printf("0");
				else
				{
					int ch=0;
					for(k=0;k<counttail;k++)
					{
						if(i==tailx[k] && j==taily[k])
						{
							printf("o");
							ch=1;
						}
					}
					if(ch==0)
					printf(" ");
				}
			}
		}
     	printf("\n");
	}
}void input()
{
	if(kbhit())
	{
		switch(getch())
		{
			case 'a':	//a s w z
				flag=1;
				break;
			case 's':
				flag=2;
				break;
			case 'w':
				flag=3;
				break;
			case 'z':
				flag=4;
				break;
			case 'x':
				gameover=1;
				break;					
		}	
	}
	
}
void makelogic()
{
	int i;
	int prevX=tailx[0];
	int prevy=taily[0];
	int prev2x, prev2y;
	tailx[0]=x;
	taily[0]=y;
	
	for(i=1;i<counttail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevX;
		taily[i]=prevy;
		prevX=prev2x;
		prevy=prev2y;
	}
	switch(flag)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
			break;
		case 4:
			x++;
			break;
		default:
			break;
	}
if(x<0||x>withd||y<0||y>height)
	gameover=1;
	for(i=0;i<counttail;i++)
	{
		if(x==tailx[i]&&y==taily[i])
			gameover=1;
	}
if(x==fruitX&&y==fruitY)
{
	label3:
	fruitX=rand()%20;
	if(fruitX==0)
		goto label3;
	label4:
	fruitY=rand()%20;
	if(fruitY==0)
		goto label4;
		score+=10;
		counttail++;
}
}
int main()
{
	system("COLOR 0A");
	
	int m, n;
	setup();
	while(!gameover)
	{
		draw();
		input();
		makelogic();
		for(m=0;m<1000;m++)
		{
			for(n=0;n<0;n++)
			{
				
		    }
		}
		for(m=0;m<1000;m++)
		{
			for(n=0;n<=1000;n++)
			{
			}
		}
	}
	system("COLOR 0A");
	printf("\nTo continue game please close and run the program again _______________________________________________________________");
	return 0;
}
