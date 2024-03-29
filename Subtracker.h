#ifndef _SUBTRACKER_GUARD
#define _SUBTRACKER_GUARD

#include<bits/stdc++.h>
#include "Peer.h"

using namespace std;
class Peer;
class Subtracker 
{
    public:
        int ID;
        double x;
        double y;
        vector<Peer*> peers;
        map<int, vector<Peer*>> packetToPeersMapping; 

        mutex m;    // Used for locking individual objects

        Subtracker();
        Peer* getPeer(int, Peer*, Peer*);
        void packetReceivedNotification(int, Peer*);
        void printInfo();
        void printPacketToPeerMapping();
    
};
#endif
