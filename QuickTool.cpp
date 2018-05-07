//==Roleplay Gateway Stat Test System 1.0== 

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	double SPD, AP, WND, SAN, DEF, TOU, MAG, LUK, ACC, move, initiative, actions, damage, WP, IP, evade, immune, invocation, spells, exit;

	// Speed
	cout << "What is your Speed? ";
	cin >> SPD;

	// Movement
	move = SPD / 4;

	// Display Movement
	cout << "Your Movement is " << move << endl;

	// Initiative
	initiative = SPD;

	// Display Initiative
	cout << "Your Initiative is " << initiative << endl;

	// Actions
	actions = SPD / 5;

	// Display Actions
	cout << "Your Action is " << actions << endl;

	// Attack Power
	cout << "What is your Attack Power? ";
	cin >> AP;

	// Damage
	damage = AP + 2;

	// Display Damage
	cout << "Your Damage is " << damage << endl;

	// Wound
	cout << "What is your Wound? ";
	cin >> WND;

	// Wound Points
	WP = (WND * 2) + 2;

	// Display Wound Points
	cout << "Your Wound Points are " << WP << endl;

	// Sanity
	cout << "What is your Sanity? ";
	cin >> SAN;

	// Insanity Points
	IP = (SAN * 2) + 4;

	// Display Insanity Points
	cout << "Your Insanity Points are " << IP << endl;

	// Defense
	cout << "What is your Defense? ";
	cin >> DEF;

	// Evade
	evade = DEF * 4;

	// Display Evade
	cout << "Your Evade is " << evade << endl;

	// Toughness
	cout << "What is your Toughness? ";
	cin >> TOU;

	// Immune System
	immune = TOU;

	// Display Immune System
	cout << "Your Immune System is " << immune << endl;

	// Magic
	cout << "What is your Magic? ";
	cin >> MAG;

	// Invocation
	invocation = MAG + 2;

	// Display Invocation
	cout << "Your Invocation is " << invocation << endl;

	// Spell List
	spells = MAG + 1;

	// Display Spell List
	cout << "Your Spell List is " << spells << endl;

	// Luck
	cout << "What is your Luck? ";
	cin >> LUK;

	//Final Stats
	cout << "Your stats have been printed to YourStats.txt in the same directory as this file.";
	
	// Testing output
	ofstream out_data("YourStats.txt");
	out_data << "==YOUR STATS==" << endl;
	out_data << "SPEED: " << SPD << endl;
	out_data << "move: " << move << endl;
	out_data << "initiative: " << initiative << endl;
	out_data << "actions: " << actions << endl;
	out_data << "--------------" << endl;
	out_data << "ATTACK POWER: " << AP << endl;
	out_data << "damage: " << damage << endl;
	out_data << "--------------" << endl;
	out_data << "WOUNDS: " << WND << endl;
	out_data << "wound points: " << WP << endl;
	out_data << "--------------" << endl;
	out_data << "SANITY: " << SAN << endl;
	out_data << "insanity points: " << IP << endl;
	out_data << "--------------" << endl;
	out_data << "DEFENSE: " << DEF << endl;
	out_data << "evade: " << evade << endl;
	out_data << "--------------" << endl;
	out_data << "TOUGHNESS: " << TOU << endl;
	out_data << "immune system: " << immune << endl;
	out_data << "--------------" << endl;
	out_data << "MAGIC: " << MAG << endl;
	out_data << "invocation: " << invocation << endl;
	out_data << "spell list: " << spells << endl;
	out_data << "--------------" << endl;
	out_data << "LUCK: " << LUK << endl;

	// Exit
	cout << "Type in anything to exit the program. ";
	cin >> exit;

	return 0;
}
