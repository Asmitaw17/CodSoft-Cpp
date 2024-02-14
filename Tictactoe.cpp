#include <iostream>
using namespace std;
char index[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int col;
char token = 'x';
bool tie = false;
string n1="";
string n2="";
int game()
{
    
    cout<<"      |      |  \n";
    cout<<"  "<<index[0][0]<<"   |  "<<index[0][1]<<"   |  "<<index[0][2]<<"  \n";
    cout<<"______|______|______\n";
    cout<<"      |      |  \n";
    cout<<"  "<<index[1][0]<<"   |  "<<index[1][1]<<"   |  "<<index[1][2]<<"  \n";
    cout<<"______|______|______\n";
    cout<<"      |      |  \n";
    cout<<"  "<<index[2][0]<<"   |  "<<index[2][1]<<"   |  "<<index[2][2]<<"  \n";
    cout<<"      |      |  \n";

}

int function()
{
    int digit;
    if (token=='x')
    {
        cout<<n1<<" Player 1 please enter"<<endl;
        cin>>digit;
    }
    if (token=='o')
    {
        cout<<n2<< " Player 2 please enter"<<endl;
        cin>>digit;
    }
    if (digit==1)
    {
        row =0;
        col =0;
    }    
     if (digit==2)
    {
        row =0;
        col =1;
    }    
     if (digit==3)
    {
        row =0;
        col =2;
    }    
     if (digit==4)
    {
        row =1;
        col =0;
    }    
     if (digit==5)
    {
        row =1;
        col =1;
    }    
     if (digit==6)
    {
        row =1;
        col =2;
    }    
     if (digit==7)
    {
        row =2;
        col =0;
    }    
     if (digit==8)
    {
        row =2;
        col =1;
    } 
     if (digit==9)
    {
        row =2;
        col =2;
    } 
    else if (digit<1 || digit>9)
    {
        cout << "Invalid !!!" << endl;
    } 

    if(token=='x' && index[row][col]!='x'&& index[row][col]!='o')
    {
        index[row][col] = 'x';
        token = 'o';

    }

    else if(token=='o' && index[row][col]!='x'&& index[row][col]!='o')
    {
       index[row][col] ='o';
        token = 'x';  
    }

    else
    {
        cout <<"There is no empty space"<<endl;
        function();
    }
   game(); 
}

bool functionOne()
{
    for (int i = 0; i < 3; i++)
    {
        if(index[i][0]==index[i][1] && index[i][0]==index[i][2]|| index[0][i]==index[1][i] && index[0][i]==index[2][i]) 
            return true;    
    }

    if (index[0][0]==index[1][1] && index[1][1]==index[2][2] || index[0][2]==index[1][1] && index[1][1]==index[2][0])
         return true;

    for(int i=0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (index[i][j]!='x' && index[i][j]!='o')  
            {
                return false;   
            }
            
        }
        
    }
    tie = true;
    return false;
}

int main()
{   
    cout <<"Enter the name of the first player:\n";
    getline(cin,n1);
    cout <<"Enter the name of the second player:\n";
    getline(cin,n2);
    cout<<n1<<" is player1 \n";
    cout<<n2<<" is player2 \n";
    while (!functionOne())
    {
        game();
        function();
        functionOne();     
    }
    
if (token == 'x' && tie == false) 
 {
    cout << n2<< "Wins!!"<< endl;
 }
 else if (token == 'o' && tie == false)
 {
    cout<< n1<< "Wins!!"<< endl;
 }
else
 {
    cout<<"It's a tie!"<< endl;
 }
}