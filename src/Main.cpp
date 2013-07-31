#include "Main.h"
#include "ConnectionsManager.h"
#include "Spool.h"
#include "Parser.h"


#include <iostream>

using namespace std;
ConnectionsManager* myConMan;

Main::Main()
{
 cout << "FitNexus Server Super Double Alpha Turbo Ultimate Edition 1\n\n" <<endl;
    counter = 0;
    cout << "Real main started..."<<endl ;
    myConMan = new ConnectionsManager();
    cout << "Setting owner"<<endl;
    myConMan->setOwner(*this);
    myConMan->StartManager();
//myConMan::setOwner(this);
//myConMan.setOwner(*this);

cout << "owner set line has been called";
    Spool* requestSpool = new Spool();
    Parser* msgParser = new Parser();

    bool run = true;


    //ctor
}

void Main::log()
{
   //int i = 1/0;
    //printf("FitNexus Server Super Double Alpha Turbo Ultimate Edition 1\n\n");
    cout << "FitNexus Server Super Double Alpha Turbo Ultimate Edition 1\n\n" <<endl;
}
int main()
{


    Main* myMain = new Main();



}

Main::~Main()
{
    //dtor
}
