#include <dtl/dtl.hpp>
#include "common.hpp"
#include <iostream>
#include <sstream>
#include <string>

#include "printers.hpp"

using namespace std;

using dtl::Diff;

int main(int argc, char *argv[]){
    
    if (isFewArgs(argc)) {
        cerr << "Too few arguments." << endl;
        return -1;
    }
    
    typedef char   elem;
    typedef string sequence;

    sequence A(argv[1]);
    sequence B(argv[2]);
    
    Diff< elem, sequence > d(A, B);
    d.compose();
    
    // Shortest Edit Script
    cout << "SES" << endl;

    d.printSES < ostream, customChangePrinter > (cout);
    
    return 0;
}
