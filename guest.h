///////Header file//////
#ifndef GUEST_H
#define GUEST_H
#include <string>
using namespace std;
class guest
{
public:

    guest();
//attributes
    string username;
    string add_service;
    long ID;
    long cost;


//virtual methods
    virtual void new_guest_set(long I,string name)=0;  //to set the ID and take username from new guests
    virtual int new_guest_ID()=0;                      //to display the id
    virtual void old_guest_set(long I)=0;              //to ensure that it is an old gest
    virtual int extend_resrve(int nights,int rooms)=0; //for old guests to extend reservation
    virtual int add_services(string add)=0;            //for more services
    virtual int new_resrve(int night,int room)=0;      //for new guests to calculate the cost
    virtual int get_rooms()=0;                         //to return no of available rooms
    virtual int cancel_room(int cancel,int rooms)=0;   //to cancel the reservation
};

#endif // GUEST_H
