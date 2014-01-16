#include <iostream>
#include <pthread.h>
#include "include/Player.h"
using namespace std;

int main()
{
    int i;
    int nbPlayer = 5;
    for(i=1;i<=nbPlayer;i++){

        Player *p = new Player(i);
        p->hello();
    }
    cout << "Hello world!" << endl;
    return 0;
}
