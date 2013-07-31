#include "NetworkConnection.h"
#include "ConnectionsManager.h"

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>


void *thread_function(void *arg);

static int test_num;
Main const owner;

using namespace std;
//char message[] = "ḦEllo world";
ConnectionsManager::ConnectionsManager()
{

    //ctor
}

void *thread_function(void *arg)
{
    //cout << "thread running" << endl;
    NetworkConnection* myCon = new NetworkConnection();
    while(true)
    {
   printf("thread %s running\n", (char *)arg);
    sleep(1);
    }
}

void ConnectionsManager::setOwner(Main& tOwner)
{
  Main owner = tOwner;
 owner.log();
cout << "Owner set" <<endl;
       printf("Counter: %i", owner.counter);
       // sleep(1);
}

void ConnectionsManager::StartManager()
{
    cout << "NetCon started...\n" ;
    test_num = 0;
    int res;
    pthread_t a_thread;
    pthread_t b_thread;
    void *thread_result;

    char message1[] = "1";
    res = pthread_create(&a_thread, NULL, thread_function, (void *)message1);
    char message2[] = "2";
    res = pthread_create(&b_thread, NULL, thread_function, (void *)message2);


while(true)
{
    cout << "still running.." << endl;
   sleep(1);
}
    //ctor
}

ConnectionsManager::~ConnectionsManager()
{
    //dtor
}
