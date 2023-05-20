/*
 *
 *              VERBOSE SLEEP
 *              COPYRIGHT 2023 Tara Piccari
 *
 *
 *              This file is a part of Verbose Sleep (https://github.com/zontreck/VerboseSleep)
 *              It is Licensed under the GPL v3.
 *
 *              Please submit any changes or improvements to the Github in the form of a ticket or a pull request.
 *
 *              Thank you.
 *
 */


#include <iostream>
#include <string>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono_literals;
using namespace chrono;
using namespace this_thread;

int main(int argc, const char *argv[]) {
    if(argc<2){
        cout << "Verbose Sleep\nhttps://github.com/zontreck/VerboseSleep\nCopyright 2023 Tara Piccari\n\n" << argv[0] <<
        " [seconds]\n\n"

        << "[seconds]\t\t-\tThe number of seconds to sleep and countdown"
        << endl
        << endl;
        return 1;
    }
    int paramx = atoi(argv[1]);
    //cout << "Argument 1 : " << argv[1] << endl;
    while(paramx>0)
    {

        printf("\rWaiting for %d second(s)   \r", paramx);
        cout << flush;

        sleep_for(seconds(1));
        paramx--;
    }


    //cout << endl;
    cout << "\r                                         \r";
    return paramx;
}
