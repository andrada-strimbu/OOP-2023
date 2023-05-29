#include <iostream>
#include "Zoo.h"
#include "Shark.h"
#include "Eagle.h"
#include "Tiger.h"
#include "Cow.h"

using namespace std;
int main() {
  Zoo z;
    z += new Shark();
    z += new Eagle();
    z += new Tiger();
    z += new Cow();
    cout<<"total animale: "<<z.GetTotalAnimals()<<endl;
    for(auto a : z.GetFishes())
        cout<<"Fish: "<<a->GetName()<<endl;
    for(auto a : z.GetBirds())
        cout<<"BIRDS: "<<a->GetName()<<endl;
    for(auto a : z.GetMammals())
       cout<<"MAMMALS: "<<a->GetName()<<endl;
     for(auto a : z.GetFeline())
        cout<<"FELINE: "<<a->GetName()<<", SPEED: "<<a->GetSpeed()<<endl;
    cout<<"Zoo constains a tiger: "<<boolalpha<<z("tiger")<<endl;
    cout<<"Zoo constains a monkey: "<<boolalpha<<z("monkey")<<endl;
    return 0;
}
