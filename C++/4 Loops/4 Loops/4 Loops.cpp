#include <iostream>
#include <string>
using namespace std;

void main()
{
    cout << "You wake up when you hear a sound in the middle of the night. Your farm looks fine but there is no one around for a couple of miles. You have been the only one home for the past three weeks. There is a glowing light outside and you listen to a strange whirring sound. You hear strange sounds like two people talking but in a language that you never heard before. You hear these things move but it doesnt sound like steps it, it sounds like an ear piercing scratch on your tile floors."<<endl;
	cout << "1. Look at the window towards the glowing light." << endl;
    cout << "2. Get out of bed and go outside through the backdoor but you have " << endl;
    
    int selection;
    cin >> selection;
    
    if(selection == 1)
    {
        cout << "You see a strange machine that couldn't be made by humans. You realize that it is an alien ship. You see corpses of humans that have been skinned are missing their eyes, legs, and arms..." << endl;
		cout << "1. You attempt to run to the shack and get away in your tractor.";
		cout <<	"2. You see a gun and a box of ammo next to the human corpses but it is dangerously close to the alien ship.";
		cin >> selection;
		{
			if(selection==1)
			{
				cout<<"An alien sees you captures you and it extends its mouth into your stomach to eat your insides...";
				cout<<"You are dead.";
			}
		
			else if(selection==2)
			
			{
				cout<<"You jump out your window and get the gun/ammo but you see the aliens ";
			}
		}

    }
    else if( selection == 2)
    {
        cout << "The fluffy dog latches onto a tree." << endl;
    }
    else
    {
        cout << "You do nothing." << endl;
    }
    
    cout << "You wonder if the fluffy dog is a dog.";
    
	system("pause");
}