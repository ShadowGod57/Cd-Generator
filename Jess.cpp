/*From FB messages
 * card pack decider. Being able to select a random number between 1 and 100. say numbers 1-25 = Minion, 26-50 = Spell, 51-75 = Weapon and 76-100 = field spell.
 * and then being able to migrate the same selector for then determining the other factors: card class, rarity, and card rarity*/

#include <iostream>
#include <cstdlib>
#include <ctime>

//to avoid "std::" everywhere
using namespace std;

int main()
{
    srand(static_cast <unsigned int > (time(0)));
    int cardType = rand() % 100 + 1;
	//will store what sort of card is generated
    string cardTypeStr;
    //if between 1 and 25, minion. if 25-50, spell, etc. as per above
    if (cardType >=1 && cardType <= 25)
		cardTypeStr = "Minion";
	else if (cardType >=26 && cardType <= 50)
		cardTypeStr = "Spell";
	else if (cardType >=51 && cardType <= 75)
		cardTypeStr = "Weapon";
	else if (cardType >=76 && cardType <= 100)
		cardTypeStr = "Field Spell";
    cout << cardType << ": " << cardTypeStr << endl;
    return 0;
}
