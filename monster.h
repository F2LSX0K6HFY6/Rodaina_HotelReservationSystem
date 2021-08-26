#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>
using namespace std;
#include <guest.h>

class monster : public guest
{
public:
    monster();

//static attributes
    static int rooms;
    static int nights;
    static int new_rooms;
    static int old_rooms;
    static int cancel_rooms;
//methods
    void new_guest_set(long I,string name);
    int new_guest_ID();
    void old_guest_set(long I);
    int extend_resrve(int nights,int rooms);
    int add_services(string add);
    int new_resrve(int night,int room);
    int get_rooms();
    int cancel_room(int cancel,int room);


};

#endif // MONSTER_H
