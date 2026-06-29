#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 15
char maze[MAX][MAX];
int n,x,y,scr,mve;
clock_t startTime;
void instructions() {
    printf("\n=== Instructions ===\n");
    printf("W A S D : Move\n");
    printf("C is for coin:(+10)\n");
    printf("T is fortrap:(-5)\n");
    printf("G is fr goal:(+50)\n");
    printf("# is for wll\n\n");
}//genertaimg maze
void generateMaze() {
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            maze[i][j]=(i==0||j==0||i==n-1||j==n-1)?'#':' ';
    srand((unsigned)time(NULL));
    for(int i=0;i<n*n/3;i++){
        int x=1+rand()%(n-2),y=1+rand()%(n-2);
        if((x==1&&y==1)||(x==n-2&&y==n-2)) continue;
        maze[x][y]='#';
    }
    maze[1][1]='P'; x=1; y=1;
    maze[n-2][n-2]='G';
    for(int i=0;i<n/2;i++){
        int x=1+rand()%(n-2),y=1+rand()%(n-2);
        if(maze[x][y]==' ') maze[x][y]='C';
    }
    for(int i=0;i<n/3;i++){
        int x=1+rand()%(n-2),y=1+rand()%(n-2);
        if(maze[x][y]==' ') maze[x][y]='T';
    }}void printMaze(){
    system("cls||clear");
    printf("Score:%d  Moves:%d  Time:%ld sec\n\n",scr,mve,(long)((clock()-startTime)/CLOCKS_PER_SEC));
    for(int i=0;i<n;i++){for(int j=0;j<n;j++) printf("%c ",maze[i][j]); printf("\n");}
    printf("\nMove (WASD) or Q to quit: ");
}int main(){
    int ch;
    printf("=== MAZE E S C A P E   game ==");
    printf("\n 1. Easy Mode :)");
    printf("\n 2. Medium Mode :|");
    printf("\n 3. Hard Mode :0 ");
    printf("\n4. instruction :> ");
    printf("Enter you're choice: ");
    scanf("%d",&ch);
    if(ch==4){instructions();return 0;}
    n  =(ch==1)?7:(ch==2)?10:15;
    scr=0;mve=0;
    generateMaze();
    startTime=clock();
    while(1){
        printMaze();
        char c; scanf(" %c",&c);
        if(c=='q'||c=='Q') break;
        int nx=x,ny=y;
        if(c=='w'||c=='W') nx--;
        else if(c=='s'||c=='S') nx++;
        else if(c=='a'||c=='A') ny--;
        else if(c=='d'||c=='D') ny++;
        else continue;
        if(nx<0||ny<0||nx>=n||ny>=n||maze[nx][ny]=='#') continue;
        if(maze[nx][ny]=='C') scr+=10;
        if(maze[nx][ny]=='T') scr-=5;
        if(maze[nx][ny]=='G'){
            scr+=50;
            printf("\nYou  finally win :). You're final score is =%d\n",scr);
            break;
        }
        maze[x][y]=' ';
        x=nx; y=ny;
        maze[x][y]='P';
        mve++;
    }
    return 0;
}