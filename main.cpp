#include <iostream>
#include "monster.h"
#include "guest.h"
#include "human.h"
#include <string>
using namespace std;
void atoi();

int main()
{   cout<<"\t \t \t *****************************************************"<<endl;
    cout<<"\t \t \t \t Hello dear we are happy to serve you! \t \t \t"<<endl;
    cout<<"\t \t \t *****************************************************"<<endl;

guest *ptr;
string type;

cout<<"Are you a monster or a human?"<<endl;
cin>> type;
if (type=="monster")

{                     /////////////////RESERVATION FOR NEW MONSTERS/////////////////
    monster m1;
    ptr=&m1;

if (monster::rooms>15)
    goto jmp;
else
   {
    ptr->new_guest_set(123,"");
    cout<<"Your ID is "<<ptr->new_guest_ID()<<endl;
    cout<<ptr->add_services("");
    cout<<" $ Is your cost"<<endl;
    cout<<ptr->new_resrve(monster::nights,monster::rooms);
    cout<<" $ Is your cost"<<endl;
    cout<<"The available rooms = "<<ptr->get_rooms()<<endl;
     }
                     /////////////////RESERVATION FOR OLD MONSTERS/////////////////
monster m2;
    ptr=&m2;

if (monster::rooms>15)
    goto jmp;
else
   {
    ptr->old_guest_set(122);
    cout<<ptr->extend_resrve(monster::nights,monster::old_rooms);
    cout<<" $ Is your cost"<<endl;
    cout<<ptr->add_services("");
    cout<<" $ Is your cost"<<endl;
    ptr->cancel_room(monster::cancel_rooms,monster::rooms);
    cout<<"The available rooms = "<<ptr->get_rooms()<<endl;
     }
}

else
{                     /////////////////RESERVATION FOR NEW HUMAN/////////////////
    human h1;
    ptr=&h1;

if (human::rooms>5)
    goto jmp;
else
   {
    ptr->new_guest_set(123,"");
    cout<<"Your ID is "<<ptr->new_guest_ID()<<endl;
    cout<<ptr->add_services("");
    cout<<" $ Is your cost"<<endl;
    cout<<ptr->new_resrve(human::nights,human::rooms);
    cout<<" $ Is your cost"<<endl;
    cout<<"The available rooms = "<<ptr->get_rooms()<<endl;
     }
                        /////////////////RESERVATION FOR OLD HUMAN/////////////////
human h2;
    ptr=&h2;

if (human::rooms>5)
    goto jmp;
else
   {
    ptr->old_guest_set(122);
    cout<<ptr->extend_resrve(human::nights,human::old_rooms);
    cout<<" $ Is your cost"<<endl;
    cout<<ptr->add_services("");
    cout<<" $ Is your cost"<<endl;
    ptr->cancel_room(human::cancel_rooms,human::rooms);
    cout<<"The available rooms = "<<ptr->get_rooms()<<endl;
     }
}



    jmp:
    cout<<"thank you"<<endl;

    return 0;
}
