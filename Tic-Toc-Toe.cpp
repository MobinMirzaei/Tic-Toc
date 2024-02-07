#include<iostream>
#include<conio.h>

using namespace std;


void menu();
void board();

int square[10]={0,1,2,3,4,5,6,7,8,9};

struct player{
	string name;
	int score;
};
	
	
int main()
{
	
    int a,b;
	menu();
	


	//cout<<char(a);

    return 0;
}

///
void menu()
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
		board();
	}
	else if(a==2){
		
	}
	else if(a==3){
		cout << "Have A Good Day!";
    	exit(0);	
	}
	else{
		menu();
	}
}
/////

void board()
{
	system("cls");
	cout << "\n\n\n";
	cout << "\t\t| " << square[1] << " | " << square[2] << " | " << square[3] << " | " << endl;
	cout << "\t\t| " << square[4] << " | " << square[5] << " | " << square[6] << " | " << endl;
	cout << "\t\t| " << square[7] << " | " << square[8] << " | " << square[9] << " | " << endl;
	cout << "\n\n\n";
}
/////
void Scoreboard()
{
	
}