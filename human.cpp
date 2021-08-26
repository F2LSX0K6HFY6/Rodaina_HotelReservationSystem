#include "human.h"
#include "guest.h"
#include <iostream>
using namespace std;
//intializtion for static inttegers
int human::rooms=0;
int human::nights=0;
int human::new_rooms=0;
int human::old_rooms=0;
int human::cancel_rooms=0;
//constructor
human::human()
{
    cout<<"if your are a new guest please tell us how many rooms do you want and if you are old enter 0"<<endl;
    cin>>new_rooms;
    cout<<"if your an old user then Please tell us how many rooms you have been reserved if not the receptionist should enter them "<<endl;
    cin>>old_rooms;
    rooms=new_rooms+old_rooms;

    if (rooms<5)
        cout<<"You can make a reservation"<<endl;


    else

           cout<<"We are sorry there is no available rooms "<<endl;
    rooms=5-(rooms+new_rooms+old_rooms-cancel_rooms);

}

void human::new_guest_set(long I,string name)
{
    ID=I;
    username=name;
    cout<<"Please enter your name "<<endl;
    cin>>name;

}

 int human::new_guest_ID()
 {
     return ID;
 }

 void human::old_guest_set(long I)
 {
     ID=I;
     cout<<"Enter your ID "<<endl;
     cin >>I;
 }

 /*int human::get_ID(long I)
 {
     return ID;
 }*/

 int human::extend_resrve(int night,int room)
 {
     nights=night;
     old_rooms=room;

     human::cost=night*200*room;

     return cost;
 }


 int human::add_services(string add)
 {
  add_service=add;

  cout<<"which service do you want spa or dryclean or both?"<<endl;
  cin>>add;
 if (add=="spa")
       human::cost=100;
 else if (add=="dryclean")
     human::cost=70;
 else if (add=="both")
     human::cost=170;
 else
     cout<<"this service is not available"<<endl;

  return cost;

 }

 int human::new_resrve(int night,int room)
 {
     nights=night;
     rooms=room;
     cout<<" Enter number of nights "<<endl;
     cin>>nights;

     human::cost=nights*200*new_rooms;

     return cost;
 }


 int human::cancel_room(int cancel,int room)
 {   cancel_rooms=cancel;
     rooms=room;

   rooms =room+cancel-human::old_rooms;
   return  rooms;
 }


 int human::get_rooms()
 {
     return rooms;
 }
