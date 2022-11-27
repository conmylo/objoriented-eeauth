#include <iostream>
#include "GooglePin.h"

using namespace std;

int main(){
    GooglePin a("Thessaloniki", 90.50, 750.60);
    a.status();

    GooglePin b("Athens", 112.50, 438.90);
    b.status();

    cout << "Distance of " << a.getLabel() << " from (0,0) is " << a.estimateDistance() << endl;
    cout << "Distance of " << b.getLabel() << " from (0,0) is " << b.estimateDistance() << endl;
    cout << "Distance of " << a.getLabel() << " from (10,20) is " << a.estimateDistance(10, 20) << endl;
    cout << "Distance of " << a.getLabel() << " from " << b.getLabel() << " is " << a.estimateDistance(b) << endl;

    return 0;
}
