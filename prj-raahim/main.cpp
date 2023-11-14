#include<iomanip>
#include<iostream>
#include<unistd.h>
#include<fstream>
#include<string>
using namespace std;

//funtion prototype
void rules(int s);
void input(int p1[],int p2[],int g[][3],int index, int row, int start);
int checkPos(int r,int c,int grid[][3]);
int dispalyGrid(int grid[][3],int n);
int  wincheck(int sa[][3],int n);
void history(int m);
void playercominput(int ss);
void cominput(int ss);
fstream myfile;
int mat=1;
//main
int main()
{
    //variable
    int s=0 , e=0;
    int p1[2]={0};
    int p2[2]={0};
    int row=0,col=0;
    int g[3][3]={0};
    //file header
    myfile.open("history.txt",ios::out);
    myfile<<setw(5)<<">>MATCH #<<"<<setw(34)<<">>WINNER<<";
    myfile.close();
    system("cls");
    //menu
    cout<<setw(30)<<">>TIC-TAC-TOE<<\n";
    rules(s);
    //selector menu
    while(e!=4)
    {
        cout<<"SELECT GAME MODE\n";
        cout<<" 1. PLAY GAME \n 2. COMPUTER MATCH \n 3. VIEW PREVIOUS HISTORY \n 4. EXIT\n =";
        cin>>e;
        if (e==1)
        {
            //PVP
            system("cls");
            cout<<" 1.PVP(TWO PLAYER) \n 2.PVE(PLAYER VS COMPUTER)\n >>SELECT GAMEMODE = ";
            cin>>e;
            system("cls");
            if (e==1)
            {
                mat++;
                cout<<">>PVP<<\n\n";
                dispalyGrid(g,3);
                input(p1,p2,g,3,2,s);
            }
            else
            {
                mat++;
                cout<<">>PVE<<\n\n";
                playercominput(s);
            }
        }
        else if (e==2)
        {
            system("cls");
            cout<<">>COMPUTER V COMPUTER<<\n\n";
            //experimental if it loops kill process and run again!!
            cominput(s);
            mat++;

        }
        else if (e==3)
        {
            system("cls");
            cout<<">>HISTORY<<\n\n";
            //previous record
            history(s);
        }
        else if (e==4)
        {
            system("cls");
            cout<<">>END<<\n\n";
            myfile.close();
            return 0;
        }
        e=0;
    }

    return 0;

}
//funtion drive
void rules(int s)
{
    cout<<"\n";
    cout<<setw(15)<<"GAME RULES\n";
    cout<<"$$ Game requires 2 player $$\n";
    cout<<"$$ enter the position(two coordinates like row=1,col=1) you need your marks on $$\n";
    cout<<"$$ The first player to get 3 marks in a row (up, down, across, or diagonally) is the winner $$\n";
    cout<<"\n";
}
//PVP inputs
void input(int p1[],int p2[],int g[][3],int index, int r,int ss)
{
    srand(time(NULL));
    //int p1[2]={0};
    //int p2[2]={0};
    int row=0,col=0;
    //int g[3][3]={0};
    int pcheck=1,winstatus=0;
    int cr=0;
    int randNum = (rand() % 3) + 1;
    //player 1 inputs
    for (int i = 1; winstatus!=1 ; i++)
    {
        while(pcheck!=0 && winstatus==0)
        {
            cout<<"INPUT PLAYER 1 POSITION\n";
            cout<<"row ="; cin>>row;
            cout<<"col ="; cin>>col;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=1;
            }
        }
        pcheck=1;


        row=0;
        col=0;
        //player 2 input
        while(pcheck!=0 && i!=5)
        {
            cout<<"INPUT PLAYER  POSITION\n";
            cout<<"row ="; cin>>row;
            cout<<"col ="; cin>>col;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=2;
            }
        }
        row=0;
        col=0;
        sleep(1);
        system("cls");
        pcheck=1;
        winstatus=dispalyGrid(g,i);
        cout<<endl;
    }
}
//PVE function
void playercominput(int ss)
{
    srand(time(NULL));
    int p1[2]={0};
    int p2[2]={0};
    int row=0,col=0;
    int g[3][3]={0};
    int pcheck=1,winstatus=0;
    int cr=0;
    int randNum = (rand() % 3) + 1;
    //player 1 inputs
    for (int i = 1; winstatus!=1 ; i++)
    {
        while(pcheck!=0 && winstatus==0)
        {
            cout<<"INPUT PLAYER 1 POSITION\n";
            cout<<"row ="; cin>>row;
            cout<<"col ="; cin>>col;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=1;
            }
        }
        pcheck=1;


        row=0;
        col=0;
        //player 2 input
        while(pcheck!=0 && i!=5)
        {
            cout<<"COMPUTER PLAYER 2 POSITION\n";
            row=(rand() % 3) + 1;
            cout<<"row ="<<row<<endl;
            col=(rand() % 3) + 1;
            cout<<"col ="<<col<<endl;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=2;
            }
        }
        row=0;
        col=0;
        sleep(1);
        system("cls");
        pcheck=1;
        winstatus=dispalyGrid(g,i);
        cout<<endl;
    }
}
//computer inputs
void cominput(int ss)
{
    srand(time(NULL));
    int p1[2]={0};
    int p2[2]={0};
    int row=0,col=0;
    int g[3][3]={0};
    int pcheck=1,winstatus=0;
    int cr=0;
    int randNum = (rand() % 3) + 1;
    //player 1 inputs
    for (int i = 1; winstatus!=1 ; i++)
    {
        while(pcheck!=0 && winstatus==0)
        {
            cout<<"COMPUTER PLAYER 1 POSITION\n";
            row=(rand() % 3) + 1;
            cout<<"row ="<<row<<endl;
            col=(rand() % 3) + 1;
            cout<<"col ="<<col<<endl;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=1;
            }
        }
        pcheck=1;


        row=0;
        col=0;
        //player 2 input
        while(pcheck!=0 && i!=5)
        {
            cout<<"COMPUTER PLAYER 2 POSITION\n";
            row=(rand() % 3) + 1;
            cout<<"row ="<<row<<endl;
            col=(rand() % 3) + 1;
            cout<<"col ="<<col<<endl;
            pcheck=checkPos(row,col,g);
            if (pcheck==0)
            {
                g[row-1][col-1]=2;
            }
        }
        row=0;
        col=0;
        sleep(1);
        system("cls");
        pcheck=1;
        winstatus=dispalyGrid(g,i);
        cout<<endl;
    }
}
//checks if position already taken or not
int checkPos(int r,int c,int grid[][3])
{
    if(grid[r-1][c-1]==1 || grid[r-1][c-1]==2)
    {
        cout<<"??WRONG INPUT POSITION ALREADY TAKEN?? \n";
        return 1;
    }
    else
    {
        return 0;
    }
}
//display grid
int dispalyGrid(int grid[][3], int n)
{
    int c=0;
    cout<<endl;
    while (c!=3)
    {
        cout<<setw(15)<<grid[c][0]<<"|"<<grid[c][1]<<"|"<<grid[c][2]<<endl;
        c++;
    }

    return wincheck( grid,n );
}
// pattern checks to determine winner/tie
int wincheck(int sa[][3],int n)
{
    int W=0,c=0,ww=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(sa[i][j] == 1 && sa[i][j] == 2)
            {
                cout<<"TIE\n";
                return 1;
            }
        }
    }
    //check grid for player 1
    for (int i = 0; i < 3; i++)
    {
        if (sa[i][0]==1 && sa[i][1]==1 && sa[i][2]==1)
        {
            cout<<"PLAYER 1 WON \n";
            W=1;
            ww=1;
        }
        else if (sa[0][i]==1 && sa[1][i]==1 && sa[2][i]==1)
        {
            cout<<"PLAYER 1 WON \n";
            W=1;
            ww=1;
        }
        else if (sa[0][0]==1 && sa[1][1]==1 && sa[2][2]==1)
        {
            ww=1;
            cout<<"PLAYER 1 WON \n";
            W=1;
        }
        else if (sa[0][2]==1 && sa[1][1]==1 && sa[2][0]==1)
        {
            ww=1;
            cout<<"PLAYER 1 WON \n";
            W=1;
        }
    }
    //grid check for player 2
    if (W==0)
    {
        for (int i = 0; i < 3; i++)
        {
            if (sa[i][0]==2 && sa[i][1]==2 && sa[i][2]==2)
            {
                cout<<"PLAYER 2. WON \n";
                W=1;
                ww=2;
            }
            else if (sa[0][i]==2 && sa[1][i]==2 && sa[2][i]==2)
            {
                cout<<"PLAYER 2.. WON \n";
                W=1;
                ww=2;
            }
            else if (sa[0][0]==2 && sa[1][1]==2 && sa[2][2]==2)
            {
                cout<<"PLAYER 2... WON \n";
                W=1;
                ww=2;
            }
            else if (sa[0][2]==2 && sa[1][1]==2 && sa[2][0]==2)
            {
                cout<<"PLAYER 2.... WON \n";
                W=1;
                ww=2;
            }
        }
    }
    c++;
    if (ww==1)
    {
        myfile.open("history.txt",ios::app);
        myfile<<endl<<setw(5)<<mat<<setw(40)<<"player 1\n";
        myfile.close();
    }
    else if (ww==2)
    {
        myfile.open("history.txt",ios::app);
        myfile<<endl<<setw(5)<<mat<<setw(40)<<"player 2\n";
        myfile.close();
    }

    // tie check
    if (W==0 && n==5)
    {
        myfile.open("history.txt",ios::app);
        myfile<<endl<<setw(5)<<mat<<setw(40)<<"TIE\n";
        myfile.close();
        cout<<"TIE\n";
        W=1;
    }

    return W;
}
//file output in terminal select option #3
void history(int m)
{
    string line;
    myfile.open("history.txt",ios::in);
//terminal output
    while (getline(myfile,line))
    {

        cout<<endl<< line <<endl;
    }
    myfile.close();
}