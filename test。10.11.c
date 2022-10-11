#include <stdio.h>
#define row  3
#define  col  3





int main()
{
yyyy:    
printf("**********************\n");
printf("**1 bigan****2 next***\n");
printf("**********************\n");
printf("** other  agein   ****\n");
printf("**** input 1 or 2 ****\n");
bbbb:
int a = 0;
scanf("%d",&a);
switch (a)
{
case 1 :
    ;
    break;
case 2 :
break;
default:
printf("请再");
goto bbbb;
break;
}
char arr[row] [col] = {0} ;
int i ,j;
for (i=0;i<=row-1;i++)
{
    for(j=0;j<=col-1;j++)
    {
    arr[i] [j] = ' ';
    }
}


tttt:
void board ( row, col,char arr[row][col])

void printboard( row, col,char arr[row][col])

void play  ( row, col,char arr[row] [col])


void comppplay  ( row,col,char arr[row] [col])

 char rtrtrtr = char win ( row, col,char arr[row] [col])
switch (rtrtrtr)
{
case *:
    printf("you win")
    goto yyyy;
    break;
case /:
    printf("<----no----->")
    goto yyyy;
    break;
case c:
    goto tttt;
    break;
case u:
    printf("all win")
     goto yyyy;
     break;
}


    return 0;
}


void board ( row, col,char arr[row] [col])
{
int i = 0;
int j = 0; 
for( ;i<row;i++)
{
   for( ;j<col;j++)
   {
    printf("%c",arr[i][j]);
    if(j<col-1)
    {
        printf("|");
    }
   }
   if(i<row-1)
   {
    printf("--|--|--");
   }
}
}


void play  ( row, col,char arr[row] [col])
{
int x =0;
int y =0;
dddd:
scanf("%d %d",&x,&y)
if(x<row && y<col&&arr[x][y])
{
arr[x][y]= '*'
}
else
{
    print("re input");
    goto dddd;
}
}

void comppplay  ( row, col,char arr[row] [col])
{
int x =rand()%row;
int y =rand()%col;
if(x<row && y<col &&  arr[x][y] =' ')
{
arr[x][y]= '/'
}
}

char win ( row, col,char arr[row] [col])
{
int i = 0;
int j = 0;
char m = ' ';
for (size_t i = 0; i < row; i++)
{
if(arr[i][j] = arr[i][j+1] = arr[i][j+2] !=' ')
{
    char m =  arr[i][j];
}
if(arr[i][j]=arr[i+1][j+1]=arr[i+2][j+2] != ' ')
{
     char m =  arr[i][j];
}
}
 int i = 0;
for (size_t j = 0; j< count; j++)
{
    if(arr[i][j]=arr[i+1][j]=arr[i+2][j] != ' ')
    {
    char m = arr[i][j];
    }
}
    
    int i = 0;
    int j = 0;
for (i=0;i<=row-1;i++)
{
    for(j=0;j<=col-1;j++)
    {
       if(arr[i] [j] = ' ')
       {
       char m = 'c';
       }
    }
 
}

if (char m = ' ')
{
    char m = 'u';
}
return char m;
}



