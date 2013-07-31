#ifndef CONNECTIONSMANAGER_H
#define CONNECTIONSMANAGER_H
#include "Main.h"

class ConnectionsManager
{
    public:
        ConnectionsManager();
       //void setOwner(Main *tOwner);
       void setOwner(Main& tOwner);
       void StartManager();
        virtual ~ConnectionsManager();
    protected:
    private:
};

#endif // CONNECTIONSMANAGER_H
