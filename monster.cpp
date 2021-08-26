#include "monster.h"
#include "guest.h"
#include <iostream>
//intializtion for static inttegers
using namespace std;
int monster::rooms=0;
int monster::nights=0;
int monster::new_rooms=0;
int monster::old_rooms=0;
int monster::cancel_rooms=0;
//constructor
monster::monster()
{

    cout<<"if your are a new guest please tell us how many rooms do you want and if you are old enter 0"<<endl;
    cin>>new_rooms;
    cout<<"if your an old user then Please tell us how many rooms you have been reserved if not the receptionist should enter them "<<endl;
    cin>>old_rooms;
    rooms=new_rooms+old_rooms;

    if (rooms<=15)
        cout<<"You can make a reservation"<<endl;


    else

           cout<<"We are sorry there is no available rooms "<<endl;
    rooms=15-(rooms+new_rooms+old_rooms-cancel_rooms);

}

void monster::new_guest_set(long I,string name)
{
    ID=I;
    username=name;
    cout<<"Please enter your name "<<endl;
    cin>>name;

}

 int monster::new_guest_ID()
 {
     return ID;
 }



 void monster::old_guest_set(long I)
 {
     ID=I;
     cout<<"Enter your ID "<<endl;
     cin >>I;
 }

 int monster::extend_resrve(int night,int room)
 {
     nights=night;
     old_rooms=room;
     cout<<" Enter number of nights "<<endl;
     cin>>nights;


      monster::cost=nights*200*old_rooms;

     return cost;
 }

 int monster::add_services(string add)
 {
  add_service=add;

  cout<<"which service do you want spa or dryclean or both?"<<endl;
  cin>>add;
 if (add=="spa")
       monster::cost=50;
 else if (add=="dryclean")
     monster::cost=30;
 else if (add=="both")
     monster::cost=80;
 else
     cout<<"this service is not available"<<endl;

  return cost;

 }

 int monster::new_resrve(int night,int room)
 {
     nights=night;
     rooms=room;
     cout<<" Enter number of nights "<<endl;
     cin>>nights;

     monster::cost=nights*200*new_rooms;

     return cost;
 }

 int monster::cancel_room(int cancel,int room)
 {   cancel_rooms=cancel;
     rooms=room;
     cout<<"enter no of rooms to be canceled"<<endl;
     cin>>cancel;
     rooms =room+cancel-monster::old_rooms;
   return  rooms;
 }


 int monster::get_rooms()
 {
     return rooms;
 }




