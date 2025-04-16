//October 27, 2021
//Myat Ma De May Phuu Ngon

//Dungeon Fate
//This is a simple text-based game where the player has to navigate through a maze filled with traps and enemies.
//The player has to make choices to either fight or evade the enemies and decide whether to jump over or walk on the traps.
//The game ends when the player either rescues the princess or runs out of lives.
//The game is designed to be fun and engaging, with a focus on luck and decision-making.
//The game is written in C++ and uses classes to represent the enemies and traps.

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
class Enemy {
public:
	void friendly(){
	cout<<"It is not dangerous at all!";}
};
class Dwarf: public Enemy {
	public:
	void hungry(){
	cout<<"It is hungry!\n And it tried to pierce you with a sword!!";}
};
class Goblin: public Enemy {
	public:
	void hungry(){
	cout<<"It is hungry!\n And it tried to chop you with an axe!!";}
};
class Quicksand: public Enemy {
	public:
	void dangerous(){
	cout<<"It is a real one and tried to sink you down!!!";}
};

int main()
{   int x;
	string usrName;
	char choice1;
	int choice2;
	char choice3;
	char choice4;
	char restartChoice;
	Dwarf d;
	Goblin g;
	Quicksand q;

	cout<<"\t\t-------WELCOME TO DUNGEON FATE!-------"<<endl;
	cout<<"\tThis game tells your heroic story and depends solely on luck and guessing."<<endl;
	cout<<"FUN FACT: You can consider yourself a lucky person if you win the game. \n\n --WARNING-- \n --Please do not destroy the screen with rage.--"<<endl;
	cout<<"Enter your name:";
	cin>>usrName;
	cout<<"You are the HERO, " <<usrName<< ", of the country, Noswines.";
	cout<<"The people of Noswines needs your help! \nYour quest is to rescue the princess of Noswines whom has been taken away by evil spirits into the Esha Dungeon Maze where there are many paths to take."<<endl;
	cout<<"You have 3 LIVES!!!\n You will lose the game when you ran out of LIVES. You have to make correct decision to fight or evade monsters. \nYOU WILL LOSE ONE LIVE IF YOU CHOOSE WRONG."<<endl;
	cout<<"BE CAREFUL! \nNot only the maze is full of traps but also it is full of enemies! GOOD LUCK!"<<endl;
	cout<<"\nDo you want to sneak a peek on the information of trap and enemies provided by the Noswines scout?"<< endl;
	while (true){
	cout<<"Enter 'y' for yes and 'n' for no:";
	cin>>choice1;
	if (choice1=='y'){
    	cout<<"The maze has quicksand trap. You can either choose to 'walk on' if you think it is a fake or 'jump' if you think it is real."<<endl;
    	cout<<"There are dwarfs and elves for enemies. You can either choose to 'evade' if you think they are friendly or 'fight' if you think, they are dangerous."<<endl;
    	cout<<"Wrong choices will result in losing one live."<<endl;
    	break;
	}
	else if (choice1=='n'){
    	break;
	}
	else {
    	cout<<"Enter the correct input, hero"<<endl;
	}
	}
	int lives=3;
	srand(time(0));
	while (lives==3){
	for (x=0; x<=5; x++){
	//6 maze set will be repeated to reach to princess
	int randomNumber=rand()%7+1;
	//cout <<randomNumber<< endl;
	cout<<"You entered the maze. You see 7 paths in front of you. Which path will you choose?"<<endl;
	while (true){
	cout<<"Enter either 1,2,3,4,5,6,7:";
	cin>>choice2;
	if (choice2== 1){
    	break;
	}
	else if (choice2== 2){
    	break;
	}
	else if (choice2== 3){
    	break;
	}
	else if (choice2== 4){
    	break;
	}
	else if (choice2== 5){
    	break;
	}
	else if (choice2== 6){
    	break;
	}
	else if (choice2== 7){
    	break;
	}
    	else {
        	cout<<"Enter the correct input, hero"<<endl;
    	}

	}
	if (randomNumber==1 && lives>0){
        	//free of trap
    	cout<<"LUCKY! You encountered neither trap nor enemy and whistled!"<<endl;
    	}

    	else if (randomNumber==2 && lives>0){
    	//hungry goblin
    	cout<<"You encountered a goblin. Do you want to attack or evade?:";
    	while(true){
    	cout<<"Enter 'a' for attack or 'e' for evade:";
    	cin>>choice3;
    	if (choice3== 'a'){
        	cout<<"You attacked the goblin."<<endl;
        	g.hungry();
        	cout<<"Luckily you could defend it in time and WON the battle!"<<endl;
        	break;

    	}
    	else if (choice3=='e'){
        	cout<<"You tried to walk past to evade."<<endl;
        	g.hungry();
        	cout<<"You made a wrong decision and it killed you. You LOST one live."<<endl;
        	lives-=1;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}
    	}
    	else if(randomNumber==3 && lives>0){
    	//hungry dwarf
    	cout<<"You encountered a dwarf. Do you want to attack or evade?:";
    	while(true){
    	cout<<"Enter 'a' for attack or 'e' for evade:";
    	cin>>choice3;
    	if (choice3== 'a'){
        	cout<<"You attacked the dwarf."<<endl;
        	d.hungry();
        	cout<<"Luckily you could defend it in time and WON the battle!"<<endl;
        	break;

    	}
    	else if (choice3=='e'){
        	cout<<"You tried to walk past to evade."<<endl;
        	d.hungry();
        	cout<<"You made a wrong decision and it killed you. You LOST one live."<<endl;
        	lives-=1;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}
    	}

    	else if (randomNumber==4 && lives>0){
    	//friendly goblin
    	cout<<"You encountered a goblin. Do you want to attack or evade?:";
    	while(true){
    	cout<<"Enter 'a' for attack or 'e' for evade:";
    	cin>>choice3;
    	if (choice3== 'a'){
        	cout<<"You attacked the goblin."<<endl;
        	g.friendly();
        	cout<<"You made a wrong decision but it tried to fight you. It was stronger than you. You LOST one live."<<endl;
        	lives-=1;
        	break;

    	}
    	else if (choice3=='e'){
        	cout<<"You tried to walk past to evade."<<endl;
        	g.friendly();
        	cout<<"You made a CORRECT decision. You waved the friendly goblin good bye."<<endl;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}}

    	else if (randomNumber==5 && lives>0){
    	//friendly dwarf
    	cout<<"You encountered a dwarf. Do you want to attack or evade?:";
    	while(true){
    	cout<<"Enter 'a' for attack or 'e' for evade:";
    	cin>>choice3;
    	if (choice3== 'a'){
        	cout<<"You attacked the dwarf."<<endl;
        	d.friendly();
        	cout<<"You made a wrong decision but it tried to fight you. It was stronger than you. You LOST one live."<<endl;
        	lives-=1;
        	break;

    	}
    	else if (choice3=='e'){
        	cout<<"You tried to walk past to evade."<<endl;
        	d.friendly();
        	cout<<"You made a CORRECT decision. You waved the friendly dwarf good bye."<<endl;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}}

    	else if (randomNumber==6 && lives>0){
    	//real trap
    	cout<<"You see a sand floor. Do you want to jump over or walk on?:";
    	while(true){
    	cout<<"Enter 'j' for jumping over or 'w' for walking on it:";
    	cin>>choice4;
    	if (choice4== 'j'){
        	cout<<"You jumped over the sand floor. Haiyaa!"<<endl;
        	q.dangerous();
        	cout<<"You made a CORRECT decision since you jumped and broke free."<<endl;
        	break;

    	}
    	else if (choice4=='w'){
        	cout<<"You tried to walk on it."<<endl;
        	q.dangerous();
        	cout<<"You made a wrong decision. You could not break free in time and LOST one live."<<endl;
        	lives-=1;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}
    	}
    	else if (randomNumber==7 && lives>0){
    	//fake trap
    	cout<<"You see a sand floor. Do you want to jump over or walk on?:";
    	while(true){
    	cout<<"Enter 'j' for jumping over or 'w' for walking on it:";
    	cin>>choice4;
    	if (choice4== 'j'){
        	cout<<"You jumped over the sand floor. Haiyaa!"<<endl;
        	q.friendly();
        	cout<<"It wasn't a trap. You stumbled over a tree root on the other side and hit your head and DIED.\nYou LOST one live!"<<endl;
        	lives-=1;
        	break;

    	}
    	else if (choice4=='w'){
        	cout<<"You tried to walk on it."<<endl;
        	q.friendly();
        	cout<<"You made a CORRECT decision and whistled."<<endl;
        	break;
    	}
    	else {
        	cout<<"Enter the correct input or you will never find your way out of the maze."<<endl;
    	}
    	}}
    	else if (lives<=0){
        	cout<<"But you ran out of LIVES and forever TRAPPED in the maze.\nYOU LOST THE GAME!"<<endl;
        	return 0;
    	}
	}
	cout<<"YOU MADE IT THROUGH THE MAZE AND FOUND THE PRINCESS!!!"<<endl;
	cout<<"princess: Thank you for saving me."<<endl;
	cout<<"HAPPILY EVER AFTER"<<endl;
	cout<<"CONGRATULATIONS! YOU WON THE GAME!\nThank you for playing the game."<<endl;
	cout<<"Do you want to play again?"<<endl;
	while(true){
	cout<<"Enter 'y' for yes and 'no' for no:";
	cin>>restartChoice;
	if (restartChoice=='y'){
    	lives=3;
	break;
	}

	else if(restartChoice=='n'){
	cout<<"Thank you for playing the game!"<<endl;
    	return 0;}
    	else
    	{
        	cout<<"Enter the correct input or do you want to trapped again in maze?"<<endl;
    	}
    	}
	}


}




