#include <windows.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
int height=20,width=20;
int x,y,food_x,food_y,game_over,flag;
int tail_x[100],tail_y[100];
int count=0;
int score=0;
int sp=0;
int main()
{
    
    display();
}
void start()
{
    system("cls");
     run();
     x=0,y=0,food_x=0,food_y=0,game_over=0,flag=0;
     count=0;
     system("cls");
     printf("\n Your score:%d\n",score); 
     score=0;
     Sleep(1500);
     system("cls");
     printf("\nStart Again:  press(X)\n");
     printf("\nGo Home    :  press(D)\n");
     printf("\nExit       :  press(E)\n");
}
void run()
{
     setup();
    while (1)
    {
         if(game_over==1) return;
         draw_border();
         input();
         moving_key();
         Sleep(speed());

    }
}
int ran_dom()
{

        srand(time(0));
        int num = (rand() % (19 - 2 + 1)) + 2;
        return num;

}

void setup()
{
    game_over=0;
     x=height/2;
     y=width/2;
   
     food_x=ran_dom();
     food_y=ran_dom();
}


void moving_key()
{
    int prex=tail_x[0];
    int prey=tail_y[0];
    tail_x[0]=x;
    tail_y[0]=y;
    int i; 
    int pre2x,pre2y;
    for ( i = 1; i <count ; i++)
    {
       pre2x=tail_x[i];
       pre2y=tail_y[i];
       tail_x[i]=prex;
       tail_y[i]=prey;
       prex=pre2x;
       prey=pre2y;
    }

    switch (flag)
          {
              case 1: y--;
              break;
              case 2: y++;
              break;
              case 3: x--;
              break;
              case 4: x++;
              break;
              case 5: game_over=1;
              
          }
      
      if(x==food_x && y==food_y)
      {
           
     
     food_x=ran_dom();
     food_y=ran_dom();
      score+=10;
      count++;

              
      }
        if (x==1||x==height||y==1||y==width)
                {
                    game_over=1;
                }
      
}

void input()
{
      if(kbhit())
      {
          switch (getch())
          {
             case 'a': flag=1; //y--;
              break;
              case 's': flag=2; //y++;
              break;
              case 'w': flag=3; //x--;
              break;
              case 'z': flag=4; //x++;
              break;
              case 'o': flag=5; //game_over=1;
              
          }
      }
}


void draw_border()
{
    int i,j;
    system("cls");
   
   for ( i = 1; i <= height; i++)
    {
        for ( j = 1; j <= width; j++)
        {
            if(i==1||i==height||(i>1&&i<height&&j==1)||(i>1&&i<height&&j==width))
            {
                
                     printf("#");
        
            }
            else
            {
                
               if(i==x&&j==y)
                {
                   
                    printf("O");
                  
                    
                }
                else if(i==food_x && j==food_y)
                {
                     printf("F"); 
                }
                else
                {
                    int k,pin=1;
                    for ( k = 0; k < count; k++)
                    {
                        if(i==tail_x[k]&&j==tail_y[k])
                        {
                            printf("o");
                            pin=0;
                        }
                    }
                    
                   if(pin==1) printf(" ");
                }
               

            }

        }
        printf("\n");
}
 printf("score:%.2d\n",score);

}
void display()
{

    char s[200]=":O-- Snake Game--o-";
    char s1[200]="Created by Foyez";
    int i;
     printf("-----------------------------\n");
      Sleep(100);
     printf("| -------------------------  |\n");
      Sleep(100);
     printf("| |                        | |\n");
      Sleep(100);
     printf("| |                        | |\n");
      Sleep(100);
     printf("     ");
        for ( i = 0; i <strlen(s); i++)
          {
          printf("%c",s[i]);
          Sleep(300);
          }
       printf("\n");
        printf("     ");
        for ( i = 0; i <strlen(s1); i++)
          {
          printf("%c",s1[i]);
          Sleep(300);
          }
           printf("\n");
     Sleep(100);
     printf("| |                        | |\n");
      Sleep(100);
     printf("| |                        | |\n");
      Sleep(100);
     printf("| -------------------------- |\n");
      Sleep(100);
     printf("------------------------------\n");
      Sleep(2000);
      system("cls");


       Home();
       funtionality();

}
void Home()
{
      system("cls");
       printf("---------------HOME----------------\n");
      printf("   Start----------------------(X)\n");
      printf("   Controls-------------------(C)\n");
      printf("   Levels---------------------(L)\n");
      printf("   Exit-----------------------(E)\n");
}
void funtionality()
{

    while(1)
   {

      Sleep(1000);
      //system("cls");
   char c;
    scanf("%c",&c);

          switch (c)
          {
             case 'x': start();
              break;
              case 'c': control();
              break;
              case 'l': setting();
               break;
              case 'd': Home();
              break;
                      
          }
            if(c=='e') 
            {
                system("cls");
                break;
            }
   }
}
int speed(int num)
{
      if(sp==1) return 500;
      else if(sp==2) return 300;
      else if(sp==3) return 100;
      else return 500;
}

void setting()
{
   system("cls");
   
    printf("--------------LEVELS-------------\n");
 
   Sleep(500);
   printf("       -Easy ----- press(1)\n");
     Sleep(500);
   printf("       -Medium-----press(2)\n");
     Sleep(500);
   printf("       -Hard--------press(3)\n");
   int don;
   while(1)
   {
         if(kbhit())
         {
             scanf("%d",&don);
             system("cls");
             if(don==1) 
             {
                  sp=1; 
                  break;
             }
              else if(don==2)
              {
                 sp=2; 
                 break;
              } 
               else if(don==3) 
               {
                   sp=3;
                   break;
               }
               else
               {
                   sp=1;
                   break;
               } 

         }
   }
   
    printf("\n Back Home :  Press (D) \n");
    printf("\n Game start:  press (X) \n");


}
void control()
{
     system("cls");
     printf("-----------CONTROLS-----------\n");
     printf("   | |  Up------------(W)  | |\n");
     printf("   | |  Down----------(Z)  | |\n");
     printf("   | |  Right---------(S)  | |\n");
     printf("   | |  Left----------(A)  | |\n");
     printf("\n Back Home :  Press (D) \n");
     printf("\n Game start:  press (X) \n");
}



