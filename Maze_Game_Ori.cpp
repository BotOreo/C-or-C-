#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{	
	int move;
	
	cout << "You have found yourself in a room.\n"  
		 << "Inside the room in front of you, you see square platforms in a grid of 5 columns and 6 rows\nand one extra platform directly in front.\n"
		 << "The platforms are covering a dark abyss.\n"
		 << "To the far end of the abyss, across the platforms you can see a door.\n\n";
	cout << setw(9) << "__\n" ;
	cout << setw(21) << "|__| <-- Door \n\n" ;
	cout << "[ ][ ][ ][ ][ ]" << endl;
	cout << "[ ][ ][ ][ ][ ]" << endl;
	cout << "[ ][ ][ ][ ][ ]" << endl; 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << setw(9) << "[ ]" << endl << endl;
	cout << "Next to you is a signboard.\n"
		 << "Press Enter to read the signboard.\n";
	cin.get();
	cout << "To get to the next stage you must walk on the correct platforms.\n" 
		 << "Be careful, one false step would spell your imminent death.\n"
		 << "Solve this riddle to get there safely:\n"
		 << "The answer is the mark of a question?\n\n"
		 << "Press Enter to continue." << endl;
	cin.get();
	system("cls");
	
	cout << "[ ][ ][ ][ ][ ]" << endl;
	cout << "[ ][ ][ ][ ][ ]" << endl;
	cout << "[ ][ ][ ][ ][ ]" << endl; 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << "[ ][ ][ ][ ][ ]" << endl;	 
	cout << setw(9) << "[X]" << endl << endl;
	cout << "As you step on the first platform, it depresses down like a switch.\n\n";
	
	cout << "Choose where to go next" << endl;
	cout << "(Instructions: To move use the numbers on the numpad and then press Enter.\n"
		 << "\t  8 is up, 2 is down, 6 is right, 4 is left\n"
		 << "\t  9 is up-right, 7 is up-left, 3 is down-right, 1 is down-left)" << endl;
	cin >> move;
	do 
	{
		/*if (move==8)
		{
			cout << "[ ][ ][ ][ ][ ]" << endl;
			cout << "[ ][ ][ ][ ][ ]" << endl;
			cout << "[ ][ ][ ][ ][ ]" << endl; 
			cout << "[ ][ ][ ][ ][ ]" << endl;	 
			cout << "[ ][ ][ ][ ][ ]" << endl;	 
			cout << "[ ][ ][X][ ][ ]" << endl;	 
			cout << setw(9) << "[X]" << endl << endl;
			cout << "The platform your standing on depresses and you choose where to go next";
	}
		else if ((move==4) || (move ==6))
			cout << "You fall into the abyss. YOU HAVE DIED.";
		
		else if ((move ==7) || (move ==9))
			cout << "The platform fall into the abyss along with you. YOU HAVE DIED.";
		
		else
		{
			cout << "[ ][ ][ ][ ][ ]" << endl;
			cout << "[ ][ ][ ][ ][ ]" << endl;
			cout << "[ ][ ][ ][ ][ ]" << endl; 
			cout << "[ ][ ][ ][ ][ ]" << endl;	 
			cout << "[ ][ ][ ][ ][ ]" << endl;	 
			cout << "[ ][ ][ ][ ][ ]" << endl;	 
			cout << setw(9) << "[X]" << endl << endl;
			cout << "You cannot do that. Pick a different move.";
			cin >> move;
			system("cls");
		}*/
		system("cls");
		cout << "[ ][ ][ ][ ][ ]" << endl;
		cout << "[ ][ ][ ][ ][ ]" << endl;
		cout << "[ ][ ][ ][ ][ ]" << endl; 
		cout << "[ ][ ][ ][ ][ ]" << endl;	 
		cout << "[ ][ ][ ][ ][ ]" << endl;	 
		cout << "[ ][ ][ ][ ][ ]" << endl;	 
		cout << setw(9) << "[X]" << endl << endl;
		switch(move)
		{
			case 1 :
			case 2 :
			case 3 :
			case 5 :
				cout << "You cannot do that. Pick a different move.";
				cin >> move;
			case 4 :
			case 6 : 
				system("cls");
				cout << "You fall into the abyss. YOU HAVE DIED.";
				break;
			case 8 :
				system("cls")
				cout << "[ ][ ][ ][ ][ ]" << endl;
				cout << "[ ][ ][ ][ ][ ]" << endl;
				cout << "[ ][ ][ ][ ][ ]" << endl; 
				cout << "[ ][ ][ ][ ][ ]" << endl;	 
				cout << "[ ][ ][ ][ ][ ]" << endl;	 
				cout << "[ ][ ][X][ ][ ]" << endl;	 
				cout << setw(9) << "[X]" << endl << endl;
				cout << "The platform your standing on depresses and you choose where to go next";
				break;
			case 7 :
			case 9 : 
				system("cls");
				cout << "The platform fall into the abyss along with you. YOU HAVE DIED.";
				break;
			default : 
				system("cls");
				cout << "[ ][ ][ ][ ][ ]" << endl;
				cout << "[ ][ ][ ][ ][ ]" << endl;
				cout << "[ ][ ][ ][ ][ ]" << endl; 
				cout << "[ ][ ][ ][ ][ ]" << endl;	 
				cout << "[ ][ ][ ][ ][ ]" << endl;	 
				cout << "[ ][ ][ ][ ][ ]" << endl;	 
				cout << setw(9) << "[X]" << endl << endl;
				cout << "Invalid input. Pick a different move.";
				cin >> move;
		}
	}while (move != 4 && move!= 6 && move!= 7 && move!= 9 && move!= 8);
	return 0; 
		 
}
