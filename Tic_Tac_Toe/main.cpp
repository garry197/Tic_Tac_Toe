#include <iostream>
#include<cstdlib>


using namespace std;
char mat[3][3]={'1','2','3','4','5','6','7','8','9'};

void draw()
{
    system("cls");
     cout<<"Tic-Tac-Toe"<<endl;
     cout<<"Player1(X)------Player2(O)"<<endl;
    for(int i=0;i<3;i++)
 {
     cout<<"|";
       for(int j=0;j<3;j++)
    {
        cout<<mat[i][j]<<"|";
    }
    cout<<endl;


}
}


int win()
{
    if(mat[0][0]=='X'&&mat[0][1]=='X' && mat[0][2]=='X')
        return 1;
    if(mat[1][0]=='X'&&mat[1][1]=='X' && mat[1][2]=='X')
        return 1;
    if(mat[2][0]=='X'&&mat[2][1]=='X' && mat[2][2]=='X')
        return 1;
    if(mat[0][0]=='X'&&mat[1][0]=='X' && mat[2][0]=='X')
        return 1;
        if(mat[0][1]=='X'&&mat[1][1]=='X' && mat[2][1]=='X')
        return 1;
        if(mat[0][2]=='X'&&mat[1][2]=='X' && mat[2][2]=='X')
        return 1;
        if(mat[0][0]=='X'&&mat[1][1]=='X' && mat[2][2]=='X')
        return 1;
        if(mat[0][2]=='X'&&mat[1][1]=='X' && mat[2][0]=='X')
        return 1;


    if(mat[0][0]=='O'&&mat[0][1]=='O' && mat[0][2]=='O')
        return 2;
    if(mat[1][0]=='O'&&mat[1][1]=='O' && mat[1][2]=='O')
        return 2;
    if(mat[2][0]=='O'&&mat[2][1]=='O' && mat[2][2]=='O')
        return 2;
    if(mat[0][0]=='O'&&mat[1][0]=='O' && mat[2][0]=='O')
        return 2;
        if(mat[0][1]=='O'&&mat[1][1]=='O' && mat[2][1]=='O')
        return 2;
        if(mat[0][2]=='O'&&mat[1][2]=='O' && mat[2][2]=='O')
        return 2;
        if(mat[0][0]=='O'&&mat[1][1]=='O' && mat[2][2]=='O')
        return 2;
        if(mat[0][2]=='O'&&mat[1][1]=='O' && mat[2][0]=='O')
        return 2;


return 0;
}
int input()
{
    int a;
    cout<<endl;
    cout<<"Enter number, Player no.1-:";
    cin>>a;
    if(a==1)
        mat[0][0]='X';
    if(a==2)
        mat[0][1]='X';

    if(a==3)
        mat[0][2]='X';
    if(a==4)
        mat[1][0]='X';
    if(a==5)
        mat[1][1]='X';
    if(a==6)
        mat[1][2]='X';
    if(a==7)
        mat[2][0]='X';
    if(a==8)
        mat[2][1]='X';
    if(a==9)
        mat[2][2]='X';


    draw();


int z=win();
    if(z==1)
    {
        cout<<endl;
        cout<<"Player 1 wins..";
        return 1;
    }
    int b;


    cout<<endl;
    cout<<"Enter number, Player no.2-:";
    cin>>b;


   if(b==1)
        mat[0][0]='O';
    if(b==2)
        mat[0][1]='O';

    if(b==3)
        mat[0][2]='O';
    if(b==4)
        mat[1][0]='O';
    if(b==5)
        mat[1][1]='O';
    if(b==6)
        mat[1][2]='O';
    if(b==7)
        mat[2][0]='O';
    if(b==8)
        mat[2][1]='O';
    if(b==9)
        mat[2][2]='O';

        draw();


z=win();
if(z==2)
    {
        cout<<endl;
        cout<<"Player 2 wins..";
        return 1;
    }


return 0;
}






int main()
{

     draw();

     while(true)
     {

         if(input()==1)
            break;
            if(input()==0)
            {
                cout<<"Draw"<<endl;

                break;

            }



     }
cout<<endl;
cout<<"-Game Over-"<<endl;

    return 0;
}
