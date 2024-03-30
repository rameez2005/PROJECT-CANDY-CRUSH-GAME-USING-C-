#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<fstream>
#include<conio.h>
#include<cstring>
#include<string>
#include<ctime>




using namespace std;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77





// function for generating random candies easy mode starts here  

char candyeasy(char cand) {
	int c;
	c = rand() % 5 + 1;
	if (c == 1)
		cand = '@';
	else if (c == 2)
		cand = '#';
	else if (c == 3)
		cand = '$';
	else if (c == 4)
		cand = '%';
	else if (c == 5)
		cand = '&';
	return cand;
}
// function for generating random candies easy mode ends here 


// function for generating random candies Hard mode starts here
char candyhard(char cand) {
	int c;
	c = (rand() % 7) + 1;
	if (c == 1)
		cand = '@';
	else if (c == 2)
		cand = '#';
	else if (c == 3)
		cand = '$';
	else if (c == 4)
		cand = '%';
	else if (c == 5)
		cand = '&';
	else if (c == 6)
		cand = '!';
	else if (c == 7)
		cand = '*';
	return cand;
}
// function for generating random candies Hard mode ends here



//check if array element has space value and replace with random candy it is executed after swaping easy mode starts here 
void filleasy(char arr[8][8])
{
	char cand = ' ';
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8; y++)
		{
			if (arr[x][y] == ' ')
			{
				arr[x][y] = candyeasy(cand);
				if (arr[x][y] == arr[x][y + 1] && arr[x][y] == arr[x][y + 2] ||//column wise horizontal
					arr[x][y] == arr[x + 1][y] && arr[x][y] == arr[x + 2][y] || // row wise vertical
					arr[x][y] == arr[x - 1][y + 1] && arr[x][y] == arr[x + 1][y - 1] || //forward diagonal
					arr[x][y] == arr[x - 1][y - 1] && arr[x][y] == arr[x + 1][y + 1])  //backward diagonal
				{
					char c = ' ';
					arr[x][y] = candyeasy(c);
				}
			}
		}
	}
}
//check if array element has space value and replace with random candy it is executed after swaping easy mode ends here 


//check if array element has space value and replace with random candy it is executed after swaping HARD mode starts here 
void fillhard(char arr[10][10])
{
	char cand = ' ';
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (arr[x][y] == ' ')
			{
				arr[x][y] = candyhard(cand);
				if (arr[x][y] == arr[x][y + 1] && arr[x][y] == arr[x][y + 2] ||//column wise horizontal
					arr[x][y] == arr[x + 1][y] && arr[x][y] == arr[x + 2][y] || // row wise vertical
					arr[x][y] == arr[x - 1][y + 1] && arr[x][y] == arr[x + 1][y - 1] || //forward diagonal
					arr[x][y] == arr[x - 1][y - 1] && arr[x][y] == arr[x + 1][y + 1])  //backward diagonal
				{
					arr[x][y] = candyhard(cand);
				}
			}
		}
	}
}
//check if array element has space value and replace with random candy it is executed after swaping HARD mode ends here 





// fill random cadies in table for 1st time easy mode starts here 
void FILLcandeasy(char arr[8][8])
{
	char c = ' ';
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			arr[i][j] = candyeasy(c);
			for (int i = 0; i < 8; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
						arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
						arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
						arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
					{
						char ch = ' ';
						arr[i][j] = candyeasy(ch);
					}
				}
			}
		}
	}
}
// fill random cadies in table for 1st time easy mode ends here 





// fill random cadies in table for 1st time hard mode starts here 
void FILLcandhard(char arr[10][10])
{
	char c = ' ';
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{

			arr[i][j] = candyhard(c);
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] ||//column wise horizontal
						arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] || // row wise vertical
						arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1] || //forward diagonal
						arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])  //backward diagonal
					{
						char ch = ' ';
						arr[i][j] = candyhard(ch);
					}
				}
			}
		}
	}
}
// fill random cadies in table for 1st time hard mode ends here 






//swap spaces to top in easy mode starts here 
void swpspaceEASY(char arr[8][8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] == ' ')
			{
				int l = i, m = j;
				while (l > 0)
				{
					arr[l][m] = arr[l - 1][m];
					l--;
				}
			}
		}
	}
}
//swap spaces to top in easy mode ends here 






//swap spaces to top in hard mode starts here
void swpspaceHARD(char arr[10][10])
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (arr[i][j] == ' ')
			{
				int l = i, m = j;
				while (l > 0)
				{
					arr[l][m] = arr[l - 1][m];
					l--;
				}
			}
		}
	}
}
//swap spaces to top in hard mode ends here





int main()
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	char inGame = 'y'; // game controlling variable 
	while (inGame == 'y')
	{
		SetConsoleTextAttribute(h, 2); /// function for text color green
		int menu;
		cout << endl << endl << endl << endl << endl;

		cout << "\t\t\t\t\t\t  |=====================================|" << endl;
		cout << "\t\t\t\t\t\t  |     Welcome to Candy Crush Game     |" << endl;
		cout << "\t\t\t\t\t\t  |=====================================|" << endl;
		cout << "\t\t\t\t\t\t  |                                     |" << endl;
		cout << "\t\t\t\t\t\t  |___________*__Game Menu__*___________|" << endl;
		cout << "\t\t\t\t\t\t  |                                     |" << endl;
		cout << "\t\t\t\t\t\t  |             1. Play Game            |" << endl;
		cout << "\t\t\t\t\t\t  |             2. Credits              |" << endl;
		cout << "\t\t\t\t\t\t  |             3. Instructions         |" << endl;
		cout << "\t\t\t\t\t\t  |             4. Scores               |" << endl;
		cout << "\t\t\t\t\t\t  |             5. Quit                 |" << endl;
		cout << "\t\t\t\t\t\t  |        * Give your Choice *         |" << endl;
		cout << "\t\t\t\t\t\t  |_____________________________________|" << endl;
		cout << " \t\t\t\t\t\t";
		cin >> menu;
		SetConsoleTextAttribute(h, 15); //function for text color default
		srand(time(0));
		if (menu == 1)
		{
			string name;
			system("CLS");
			SetConsoleTextAttribute(h, 6);
			cout << endl << endl << endl;
			cout << "\t\t\t\t\t|              WHAT IS YOUR NAME ?           |" << endl;
			cout << "\t\t\t\t\t          ";
			cin.ignore();// without this control ignores user to input his name..
			getline(cin, name); // gets input in string with spaces..
			SetConsoleTextAttribute(h, 7);// white text color
			int mode;
			SetConsoleTextAttribute(h, 6);// yellow text color
			cout << "\n\t\t\t\t\t Select MODE:" << endl;
			SetConsoleTextAttribute(h, 2);//green text color
			cout << " \t\t\t\t\t 1. EASY MODE " << endl;
			SetConsoleTextAttribute(h, 4);// red text color
			cout << " \t\t\t\t\t 2. HARD MODE " << endl;
			cout << "\t\t\t\t\t ";
			SetConsoleTextAttribute(h, 6);
			cin >> mode;
			SetConsoleTextAttribute(h, 7);
			if (mode == 1)
			{
				system("CLS");

				int count = 0; // to control filling of random candies in table only for once
				int score = 0;
				int turn = 15;
				char arr[8][8];
				int timer = 60;
				if (count == 0)
					FILLcandeasy(arr);//fill table with candies
				count++;
				while (timer >= 0 && turn > 0)
				{
					SetConsoleTextAttribute(h, 2);
					cout << "\t\t\t\t\t " << name << " ENTERED EASY MODE." << endl << endl;
					SetConsoleTextAttribute(h, 7);
					cout << "\t\tTIMER : " << timer << endl;
					cout << "\t\tTurns :" << turn << endl;
					cout << "\t\tScore :" << score << endl;
					timer--;
					cout << endl << endl << endl << endl << endl;
					cout << setw(102) << "        |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |" << endl;
					cout << setw(100) << "      -------------------------------------------------" << endl;
					for (int i = 0; i < 8; i++)
					{
						cout << setw(50) << " " << i << " " << " | ";
						for (int j = 0; j < 8; j++)
						{
							if (arr[i][j] == '@')
								SetConsoleTextAttribute(h, 1);//colouring symbols
							else if (arr[i][j] == '#')
								SetConsoleTextAttribute(h, 2);
							else if (arr[i][j] == '$')
								SetConsoleTextAttribute(h, 3);
							else if (arr[i][j] == '%')
								SetConsoleTextAttribute(h, 4);
							else if (arr[i][j] == '&')
								SetConsoleTextAttribute(h, 5);
							cout << " " << arr[i][j] << " ";
							SetConsoleTextAttribute(h, 15);
							cout << " | ";
						}
						cout << endl;
						cout << setw(100) << "    -------------------------------------------------";
						cout << endl;
					}
					SetConsoleTextAttribute(h, 3);
					cout << "Press SPACE To select Candy..." << endl;
					SetConsoleTextAttribute(h, 7);
					if (GetAsyncKeyState(VK_SPACE))// this function checks when user enters SPACE 
					{
						int i, j;
						bool found = 1;
						bool valid = 1;// for check input validation
						while (valid == 1)
						{
							cout << "Which Element You want to swap?";
							cout << "\nInput i:";
							cin >> i;
							cout << "\nInput j:";
							cin >> j;
							if (i >= 0 && i < 8 && j >= 0 && j < 8)// input validation
								valid = 0;
							else
							{
								cout << "\nInvalid Input... Enter Between 0 and 7." << endl;
								valid = 1;
							}
						}
						cout << "Selected Sybmol: " << arr[i][j] << endl;
						cout << "Press Arrow Keys to swipe :";
						while (found == 1) {
							int c;
							switch (c = _getch())
							{
							case KEY_UP:
							{
								if (i == 0)
								{
									cout << "Invalid Move." << endl;
								}
								else
								{
									char swp = arr[i][j];
									arr[i][j] = arr[i - 1][j];
									arr[i - 1][j] = swp;
									turn--;
									found = 0;
									break;
								}
							}
							case KEY_DOWN:
							{
								if (i == 7)
								{
									cout << "Invalid Move." << endl;
								}
								else
								{
									char swp = arr[i][j];
									arr[i][j] = arr[i + 1][j];
									arr[i + 1][j] = swp;
									turn--;

								}
								found = 0;
								break;
							}
							case KEY_LEFT:
							{
								if (j == 0)
									cout << "Invalid Move." << endl;
								else
								{
									char swp = arr[i][j];
									arr[i][j] = arr[i][j - 1];
									arr[i][j - 1] = swp;
									turn--;
								}
								found = 0;
								break;
							}
							case KEY_RIGHT:
							{
								if (j == 7)
									cout << "Invalid Move." << endl;
								else
								{
									char swp = arr[i][j];
									arr[i][j] = arr[i][j + 1];
									arr[i][j + 1] = swp;
									turn--;
								}
								found = 0;
								break;
							}

							cout << endl;
							}

						}
						int BoooM = 10;
						while (BoooM >= 0)
						{
							for (int i = 0; i < 8; i++)
							{
								for (int j = 0; j < 8; j++)
								{
									if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2])//L shape Condition spaces
									{
										arr[i][j] = ' ';
										arr[i + 1][j] = ' ';
										arr[i + 2][j] = ' ';
										arr[i][j + 1] = ' ';
										arr[i][j + 2] = ' ';
										score += 25;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t=========================" << endl;
										cout << setw(50) << "\t|                       |" << endl;
										cout << setw(50) << "\t|         SWEET         |" << endl;
										cout << setw(50) << "\t| L-Shape cands Matched |" << endl;
										cout << setw(50) << "\t|                       |" << endl;
										cout << setw(50) << "\t=========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])// vertical condition check 
									{
										arr[i][j] = ' ';
										arr[i + 1][j] = ' ';
										arr[i + 2][j] = ' ';
										score += 10;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t| Vertical cands Matched |" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t==========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])  // horizontal condition
									{
										arr[i][j] = ' ';
										arr[i][j + 1] = ' ';
										arr[i][j + 2] = ' ';
										score += 10;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|Horizontal cands Matched|" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t==========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1]) // forward diaginal condition
									{
										arr[i][j] = ' ';
										arr[i - 1][j + 1] = ' ';
										arr[i + 1][j - 1] = ' ';
										score += 15;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|     Forward Diagnol    |" << endl;
										cout << setw(50) << "\t|      cands Matched     |" << endl;
										cout << setw(50) << "\t==========================" << endl;
										Sleep(500);
										system("CLS");


									}
									else if (arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])// backward diagonal condition
									{
										arr[i][j] = ' ';
										arr[i - 1][j - 1] = ' ';
										arr[i + 1][j + 1] = ' ';
										score += 15;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t=========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|    Backword Diagnol    |" << endl;
										cout << setw(50) << "\t|     cands Matched      |" << endl;
										cout << setw(50) << "\t=========================" << endl;
										Sleep(500);
										system("CLS");
									}


								}
							}
							swpspaceEASY(arr);
							filleasy(arr);
							BoooM--;
						}
					}
					Sleep(1000);
					system("CLS");

				}
				if (timer <= 0 || turn <= 0)
				{

					cout << name << " scored :" << score << endl;
					ofstream file("scores.txt", std::ios::app);

					file << endl;
					file << name;
					file << " : ";
					file << score;
					file << endl;
					file.close();
				}
			}
			else if (mode == 2)        // HARD MODE 
			{
				system("CLS");
				int count = 0;
				int score = 0;
				int turn = 15;
				char arr[10][10];
				int timer = 40;
				if (count == 0)
					FILLcandhard(arr);//fill table with candies
				count++;
				while (timer >= 0 && turn > 0)
				{
					SetConsoleTextAttribute(h, 4);
					cout << "\t\t\t\t " << name << " ENTERED HARD MODE ." << endl << endl;
					SetConsoleTextAttribute(h, 7);
					cout << "\t\tTIMER : " << timer << endl;
					cout << "\t\tTurns :" << turn << endl;
					cout << "\t\tScore :" << score << endl;
					timer--;
					cout << endl << endl << endl << endl << endl;
					cout << setw(100) << "   |  0  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |" << endl;
					cout << setw(100) << "   -------------------------------------------------------------" << endl;
					for (int i = 0; i < 10; i++)
					{
						cout << setw(36) << " " << i << " | ";
						for (int j = 0; j < 10; j++)
						{
							if (arr[i][j] == '@')
								SetConsoleTextAttribute(h, 1);//colouring symbols
							else if (arr[i][j] == '#')
								SetConsoleTextAttribute(h, 2);
							else if (arr[i][j] == '$')
								SetConsoleTextAttribute(h, 3);
							else if (arr[i][j] == '%')
								SetConsoleTextAttribute(h, 4);
							else if (arr[i][j] == '&')
								SetConsoleTextAttribute(h, 5);
							else if (arr[i][j] == '!')
								SetConsoleTextAttribute(h, 6);
							else if (arr[i][j] == '*')
								SetConsoleTextAttribute(h, 7);
							cout << " " << arr[i][j] << " ";
							SetConsoleTextAttribute(h, 15);
							cout << "  |";
						}
						cout << endl;
						cout << setw(100) << "   -------------------------------------------------------------";
						cout << endl;
					}
					SetConsoleTextAttribute(h, 3);
					cout << "Press SPACE To select Candy..." << endl;
					SetConsoleTextAttribute(h, 7);
					if (GetAsyncKeyState(VK_SPACE))
					{
						int i = 0, j = 0;
						bool found = 1;
						bool valid = 1;
						while (valid == 1)
						{
							cout << "Which Element You want to swap?";
							cout << "\nInput i:";
							cin >> i;
							cout << "\nInput j:";
							cin >> j;
							if (i >= 0 && i < 10 && j >= 0 && j < 10)
								valid = 0;
							else
							{
								cout << "\nInvalid Input... Enter Between 0 and 7." << endl;
								valid = 1;
							}
						}
						cout << "Selected Sybmol: " << arr[i][j] << endl;
						cout << "Press Arrow Keys to swipe :";
						while (found == 1) {
							int c;
							switch (c = _getch())
							{
							case KEY_UP:
							{
								if (i == 0)
								{
									cout << "Invalid Move." << endl;
								}
								else
								{
									char swp = ' ';
									swp = arr[i][j];
									arr[i][j] = arr[i - 1][j];
									arr[i - 1][j] = swp;
									turn--;
									found = 0;
									break;
								}
							case KEY_DOWN:
							{
								if (i == 9)
								{
									cout << "Invalid Move." << endl;
								}
								else
								{
									char swp = ' ';
									swp = arr[i][j];
									arr[i][j] = arr[i + 1][j];
									arr[i + 1][j] = swp;
									turn--;
								}
								found = 0;
								break;
							}
							case KEY_LEFT:
							{
								if (j == 0)
									cout << "Invalid Move." << endl;
								else
								{
									char swp = ' ';
									swp = arr[i][j];
									arr[i][j] = arr[i][j - 1];
									arr[i][j - 1] = swp;
									turn--;
								}
								found = 0;
								break;
							}
							case KEY_RIGHT:
							{
								if (j == 9)
									cout << "Invalid Move." << endl;
								else
								{
									char swp = arr[i][j];
									arr[i][j] = arr[i][j + 1];
									arr[i][j + 1] = swp;
									turn--;
								}
								found = 0;
								break;
							}
							}
							cout << endl;
							}
						}
						int BoooM = 10;
						while (BoooM > 0)
						{
							for (int i = 0; i < 10; i++)
							{
								for (int j = 0; j < 10; j++)
								{

									if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j] && arr[i][j] == arr[i + 2][j + 1] && arr[i][j] == arr[i + 2][j + 2])//L shape Condition spaces
									{
										arr[i][j] = ' ';
										arr[i + 1][j] = ' ';
										arr[i + 2][j] = ' ';
										arr[i][j + 1] = ' ';
										arr[i][j + 2] = ' ';
										score += 25;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t=========================" << endl;
										cout << setw(50) << "\t|                       |" << endl;
										cout << setw(50) << "\t|         SWEET         |" << endl;
										cout << setw(50) << "\t|L-Shape cands Matched  |" << endl;
										cout << setw(50) << "\t|                       |" << endl;
										cout << setw(50) << "\t=========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i + 1][j] && arr[i][j] == arr[i + 2][j])// vertical condition check 
									{
										arr[i][j] = ' ';
										arr[i + 1][j] = ' ';
										arr[i + 2][j] = ' ';
										score += 10;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|Vertical cands Matched  |" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t==========================" << endl;

										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2])  // horizontal condition
									{
										arr[i][j] = ' ';
										arr[i][j + 1] = ' ';
										arr[i][j + 2] = ' ';
										score += 10;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|Horizontal cands Matched|" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t==========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i - 1][j + 1] && arr[i][j] == arr[i + 1][j - 1]) // forward diaginal condition
									{
										arr[i][j] = ' ';
										arr[i - 1][j + 1] = ' ';
										arr[i + 1][j - 1] = ' ';
										score += 15;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t==========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|     Forward Diagnol    |" << endl;
										cout << setw(50) << "\t|      cands Matched     |" << endl;
										cout << setw(50) << "\t==========================" << endl;
										Sleep(500);
										system("CLS");
									}
									else if (arr[i][j] == arr[i - 1][j - 1] && arr[i][j] == arr[i + 1][j + 1])// backward diagonal condition
									{
										arr[i][j] = ' ';
										arr[i - 1][j - 1] = ' ';
										arr[i + 1][j + 1] = ' ';
										score += 15;
										system("CLS");
										cout << endl << endl << endl << endl << endl;
										cout << setw(50) << "\t=========================" << endl;
										cout << setw(50) << "\t|                        |" << endl;
										cout << setw(50) << "\t|         SWEET          |" << endl;
										cout << setw(50) << "\t|    Backword Diagnol    |" << endl;
										cout << setw(50) << "\t|     cands Matched      |" << endl;
										cout << setw(50) << "\t=========================" << endl;
										Sleep(500);
										system("CLS");
									}
								}
							}
							swpspaceHARD(arr);
							fillhard(arr);
							BoooM--;
						}

					}
					Sleep(1000);
					system("CLS");
				}
				if (timer <= 0 || turn <= 0)
				{
					cout << name << " scored :" << score << endl;
					ofstream file("scores.txt", std::ios::app);
					file << endl;
					file << name;
					file << " : ";
					file << score;
					file << endl;
					file.close();

				}
			}
		}
		else if (menu == 2)
		{
			system("CLS");
			char b = ' ';
			while (b == ' ')
			{
				if (GetAsyncKeyState(VK_ESCAPE))
				{
					b = 'a';
				}
				SetConsoleTextAttribute(h, 6);
				cout << endl << endl << endl;
				cout << "\t\t\t\t\t |------- C R E D I T S ------|" << endl;
				cout << "\t\t\t\t\t |                            |" << endl;
				cout << "\t\t\t\t\t |     MADE WITH LOVE BY :    |" << endl;
				cout << "\t\t\t\t\t |                            |" << endl;
				cout << "\t\t\t\t\t |     M.RAMEEZ   23F-0636    |" << endl;
				cout << "\t\t\t\t\t |                            |" << endl;
				cout << "\t\t\t\t\t |                            |" << endl;
				cout << "\t\t\t\t\t |   Press ESC to go back.    |" << endl;
				cout << "\t\t\t\t\t |----------------------------|" << endl;
				Sleep(1000);
				system("CLS");
				SetConsoleTextAttribute(h, 7);
			}
		}
		else if (menu == 3)
		{
			char b = ' ';
			system("CLS");
			while (b == ' ')
			{
				if (GetAsyncKeyState(VK_ESCAPE))
				{
					b = 'a';
				}
				SetConsoleTextAttribute(h, 6);
				cout << endl << endl << endl;
				cout << "\t\t\t\t |--------------- I n s t r u c t i o n s --------------|" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |              Welcome to Candy Crush Game             |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t | How to Play:                                         |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |   *  Select Play Mode By pressing 1 or 2             |" << endl;
				cout << "\t\t\t\t |   *  Press SPACE to Select Candy.                    |" << endl;
				cout << "\t\t\t\t |   *  Give Candy address.                             |" << endl;
				cout << "\t\t\t\t |   *  Press Arrow Key To Swap with.                   |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |  1. Easy mode                                        |" << endl;
				cout << "\t\t\t\t |    You will have 15 moves, 60 sec on 8x8 table .     |" << endl;
				cout << "\t\t\t\t |  1. HARD mode                                        |" << endl;
				cout << "\t\t\t\t |    You will have 15 moves, 40 sec on 10x10 table .   |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t | GAME WORKING:                                        |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |   1. When Player Swipe Candy and candy not crushes,  |" << endl;
				cout << "\t\t\t\t |  Turn will be lost and Candy will swipe.             |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |   2.If condition Matches Upper Candies Will move down|" << endl;
				cout << "\t\t\t\t |   and new Candies will be generated above.           |" << endl;
				cout << "\t\t\t\t |                                                      |" << endl;
				cout << "\t\t\t\t |    Press ESC for go back..                           |" << endl;
				cout << "\t\t\t\t |------------------------------------------------------|" << endl;
				Sleep(1000);
				system("CLS");
				SetConsoleTextAttribute(h, 7);
			}
		}
		else if (menu == 4)
		{
			SetConsoleTextAttribute(h, 6);
			system("CLS");
			char b = ' ';
			while (b == ' ')
			{
				cout << "Press ESC to go back." << endl;
				if (GetAsyncKeyState(VK_ESCAPE))
				{
					b = 'a';
				}
				int score;
				char ch = ' ';
				string record;
				ifstream disp;
				disp.open("scores.txt");
				while (!disp.eof())
				{
					getline(disp, record);
					cout << endl << record;
				}
				Sleep(1000);
				system("CLS");
			}
		}
		else if (menu == 5)
		{
			inGame = 'n';
		}
	}
	SetConsoleTextAttribute(h, 7);
	system("CLS");
	cout << endl << endl << endl;
	for (int z = 1; z < 10; z++)
	{
		SetConsoleTextAttribute(h, z);
		string X = " THANKS A LOT SIR MUIZ QADIR & SIR USMAN GHOUS FOR MAKING US ABLE TO DO IT....";
		cout << setw(100) << X << endl;
		Sleep(1000);
	}
	SetConsoleTextAttribute(h, 15);
	system("pause");
	return 0;
}