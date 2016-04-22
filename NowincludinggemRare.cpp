#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string makeCardType()
{
	int cardType = rand() % 100 + 1;
    
    string cardTypeStr;
    
    if (cardType >=1 && cardType <= 25)
            cardTypeStr = "Minion";
    else if (cardType >=25 && cardType <= 50)
            cardTypeStr = "Spell";
    else if (cardType >= 50 && cardType <= 75)
            cardTypeStr = "Weapon";
    else if (cardType >= 75 && cardType <= 100)
            cardTypeStr = "Field Spell";
    //cout << cardType << ": " << cardTypeStr << endl;
    return cardTypeStr;
}

string makeCardClass()
{
	int cardClss = rand() & 12 + 1;

	string cardClssStr;
	
	if (cardClss == 1)
			cardClssStr = "Barbarian";
	else if (cardClss == 2)
			cardClssStr = "Bard";
	else if (cardClss == 3)
			cardClssStr = "Cleric";
	else if (cardClss == 4)
			cardClssStr = "Druid";
	else if (cardClss == 5)
			cardClssStr = "Fighter";
	else if (cardClss == 6)
			cardClssStr = "Monk";
	else if (cardClss == 7)
			cardClssStr = "Paladin";
	else if (cardClss == 8)
			cardClssStr = "Ranger";
	else if (cardClss == 9)
			cardClssStr = "Rogue";
	else if (cardClss == 10)
			cardClssStr = "Sorcerer";
	else if (cardClss == 11)
			cardClssStr = "Warlock";
	else if (cardClss == 12)
			cardClssStr = "Wizard";
	//cout << cardClss << ": " << cardClssStr << endl;
	return cardClssStr;
}

string makeGemRare()
{
	int gemRare = rand() % 1000 + 1;
	
	string gemRareStr;
	
	if (gemRare >=1 && gemRare <= 500)
			gemRareStr = "Common";
	else if (gemRare >= 501 && gemRare <= 750)
			gemRareStr = "Rare";
	else if (gemRare >= 751 && gemRare <= 875)
			gemRareStr = "Epic";
	else if (gemRare >= 876 && gemRare <= 985)
			gemRareStr = "Legendary";
	else if (gemRare >= 986 && gemRare <= 1000)
			gemRareStr = "Mythic";
	//cout << gemRare << ": " << gemRareStr << endl;
	return gemRareStr;
}

int main()

{
    srand(static_cast <unsigned int > (time(0)));
    string cardType = makeCardType(); 
	//string cardClass = makeCardClass();
	//string gemRare = makeGemRare();
	cout << "Card type: " << cardType << endl;
	//cout << "Card Class: " << cardClass << endl;
	//cout << "Card gem rarity: " << gemRare << endl;
    return 0;
}
