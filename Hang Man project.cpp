#include<iostream>
#include<cstdlib> 
#include<ctime> 
using namespace::std;

void hangman(int num) // function that takes in the number of wrong tires and outputs hangman according to it
{
	if(num == 0)
	{
		cout << "------------------------" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
	}
	else if(num ==1)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
	}
	else if(num ==2)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
}
	else if(num ==3)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
}
else if(num ==4)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |\\ " << endl;
		cout << "-                      | \\ " << endl;
		cout << "-                      |  \\ " << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
}
else if(num ==5)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-                      |" << endl;
		cout << "-                     /|\\ " << endl;
		cout << "-                    / | \\ " << endl;
		cout << "-                   /  |  \\ " << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
		cout << "-" << endl;
}
else if(num ==6)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-                      |" << endl;
		cout << "-                     /|\\ " << endl;
		cout << "-                    / | \\ " << endl;
		cout << "-                   /  |  \\ " << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                       \\ " << endl;
		cout << "-                        \\ " << endl;
		cout << "-                         \\ " << endl;
		cout << "-" << endl;
}
else if(num ==7)
	{
		cout << "------------------------" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     ***" << endl;
		cout << "-                   *     *" << endl;
		cout << "-                  *       *" << endl;
		cout << "-                   *      *" << endl;
		cout << "-                     ***" << endl;
		cout << "-                      |" << endl;
		cout << "-                     /|\\ " << endl;
		cout << "-                    / | \\ " << endl;
		cout << "-                   /  |  \\ " << endl;
		cout << "-                      |" << endl;
		cout << "-                      |" << endl;
		cout << "-                     / \\ " << endl;
		cout << "-                    /   \\ " << endl;
		cout << "-                   /     \\ " << endl;
		cout << "-" << endl;
}
}

void chance(int num) // function the displays the tries left 
{
cout<< endl  <<"                                 "<<  "tries left" << " | " << num  << " | ";
}

int countspace(string name, int &count) // function that counts the number of characters in a string , call by reference & used to update and use count further in main section of code
{
	int i=0;
	while(name[i] != '\0') // when elements in string do not reach an end or a space
	{
		i++;
		count ++;
	}
	return count;
}
 

int main()
{
	int count, correct;
	int chances = 8;
	string temp;
	const char* country[] = {"china", "america", "pakistan","egypt", "vietnam", "turkey", "iran", "germany", "england", "france", "italy", "korea", "oman", "saudia" }; // by usning constant char* array country[] to store the countries
	srand(time(NULL)); // Random function with time(NULL) seed
	int counterc = rand() % 14; // strore a random number in counterc from 0 to 14 which is the number of countires
	temp = country[counterc]; // stores the name of country in temp, which an element of array country[] is stored on behalf of it's index position.
    countspace(temp, count); // calling countspace function to count the number of characters in string
    cout << "                                     | Hang man |                                                " << endl << endl;
    cout << "                                                                          Made by Daanish Ahmad mufti" << endl << endl;
    cout << " Guess The Country"<< endl << endl;
    for(int i = 0 ; i < count; i++) //initially display - spaces , same number as name of country 
    {
    	cout << " - ";
	}
	char input;
	cout << endl << "Enter alphabet = "; // prompt to enter any charcter by user
	cin >> input;
	cout << endl;
	string chang(count, '-'); // initialise an new string with the same number of cahacters as the country stored in temp
    while(chances > 1) // counter that checks the number of chances to be greater the 1 but exits loop if 1 or less
    {
    	int wrong; // initialise variable that stores wrong tries counter
    for(int i = 0 ; i < count ; i++) // loop that prevents user from inputing chracters
	{
		if(chang[i] == input)
		{
			cout << "You cannot enter same alphabet !" << endl;
			count++; // increments counter to componsate for try
		}
	}
   	bool state = true; // boolean varaible initialsed to true 
	for(int i = 0 ; i < count ; i++) // in this loop it checks and for any charcters that are same as user input and that of whats in the string
	{
		if(input == temp[i]) 
		{
		correct++;
		chang[i] = input;
		cout <<" " << input<< " ";
		state = false; // boolean set to false
	}
	else
	{
	cout <<" " << chang[i] << " " ;
    }
	}  
	if(correct == count) 
	{
		cout << endl << endl << "You Won, the country was : " << country[counterc];
		break;
	}
	if(state) // if boolean is true it would call counter function to display decreamented try aand display the hangman state
	{
	   chances--;
	   wrong++;
	   cout << endl;
	   hangman(wrong);
	   cout << endl;
	   chance(chances);
	}
	cout << endl << "Enter alphabet = ";
	cin >> input;
	cout << endl;
}
    if(chances == 1) // condition if the cahnces run out prompt lost
    {
	cout << endl << "You lost, the country was : " << country[counterc];
    } 
	return 0;
}
