#include<iostream>
#include<conio.h>
#include<fstream>
//mobin mirzaei//

using namespace std;


void menu();
int checkwin();
void board();

struct player{
	string name;
	int win=0;
	int tas=0;

};

char arra[10]= {'o','1','2','3','4','5','6','7','8','9'};
int u=-2;
player pp[100];




	

int main ()
{
	
    int i=1,a;
    cout << i <<") Start Game \n";
    i++;
    cout << i <<") Scoreboard \n";
    i++;
    cout << i <<") Exit \n";
    
	cout<<"please enter 1,2,3 :";
	cin >> a;
	if(a==1){
		system("cls");
		u+=2;
		
		
		
        cout << "Player 1 name : ";
        cin >>  pp[u].name;
        cout << "Player 2 name : ";
        cin >>  pp[u+1].name;
		
    	int player = 1,i,choice;
		char mark;
		
		do
		{
			board();
			
			if(player%2==1)
			{
				cout << pp[u].name<< ", enter a number:  ";
				mark='O';
				player=1;
			}
			else
			{
				cout << pp[u+1].name<< ", enter a number:  ";
				mark='X'; 
				player=2;
			}
			
			cin >> choice;

			if (choice == 1 && arra[1] == '1')
				arra[1] = mark;
			else if (choice == 2 && arra[2] == '2')
				arra[2] = mark;
			else if (choice == 3 && arra[3] == '3')
				arra[3] = mark;
			else if (choice == 4 && arra[4] == '4')
				arra[4] = mark;
			else if (choice == 5 && arra[5] == '5')
				arra[5] = mark;
			else if (choice == 6 && arra[6] == '6')
				arra[6] = mark;
			else if (choice == 7 && arra[7] == '7')
				arra[7] = mark;
			else if (choice == 8 && arra[8] == '8')
				arra[8] = mark;
			else if (choice == 9 && arra[9] == '9')
				arra[9] = mark;
			else	{
				cout<<"error!\nenter num ";
				player--;
				getch();
			}
			i=checkwin();
			player++;
			}while(i==-1);
		board();
		if(i==1){
			--player;
			if(player%2==1){
				cout << pp[u].name<< " win ";
				pp[u].win+=1;
			}
				
			else{
				cout << pp[u+1].name<< " win ";
				pp[u+1].win+=1;
			}
		}
		
		else{
			cout<<"==>\aGame draw";
			pp[u].tas+=1;
			pp[u+1].tas+=1;
		}
			
		getch();
		system("cls");
		
		main();
			}
			
	else if(a==2){
		for(int i=0 ;i<u+2;i++)
		{
			cout << endl<<pp[i].name<<"\nbord :"<<pp[i].win<<"\ntasavi :"<<pp[i].tas<<endl<<"--------"<<endl;
		}
		getch();
		main();
	}
	
	else if(a==3){
		cout << "Have A Good Day!";
    	exit(0);	
	}
	
}

void board()
{
	system("cls");
	cout << pp[u].name<<"\t(O) \n" << pp[u+1].name<<"\t(X) ";
	cout << "\n\n\n";
	cout << "\t\t| " << arra[1] << " | " << arra[2] << " | " << arra[3] << " | " << endl;
	cout << "\t\t| " << arra[4] << " | " << arra[5] << " | " << arra[6] << " | " << endl;
	cout << "\t\t| " << arra[7] << " | " << arra[8] << " | " << arra[9] << " | " << endl;
	cout << "\n\n\n";
}
/////



int checkwin()
{
	if (arra[1] == arra[2] && arra[2] == arra[3])
		return 1;
	else if (arra[4] == arra[5] && arra[5] == arra[6])
		return 1;
	else if (arra[7] == arra[8] && arra[8] == arra[9])
		return 1;
	else if (arra[1] == arra[4] && arra[4] == arra[7])
		return 1;
	else if (arra[2] == arra[5] && arra[5] == arra[8])
		return 1;
	else if (arra[3] == arra[6] && arra[6] == arra[9])
		return 1;
	else if (arra[1] == arra[5] && arra[5] == arra[9])
		return 1;
	else if (arra[3] == arra[5] && arra[5] == arra[7])
		return 1;
	else if (arra[1] != '1' && arra[2] != '2' && arra[3] != '3' && arra[4] != '4' && arra[5] != '5' && arra[6] != '6' && arra[7] != '7' && arra[8] != '8' && arra[9] != '9')
		return 0;
	else
		return -1;
}

