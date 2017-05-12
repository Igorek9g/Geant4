
#ifndef CPROJECT_RUN_HH
#define CPROJECT_RUN_HH

#include <G4Run.hh>

class Run : public G4Run
{
public:
    Run():result(G4int(0)){}
    ~Run(){}
private:
    G4int result;
public:
    void SetNewEvent(){result++;}
    int GetResult()const{return result;}

};


#endif //CPROJECT_RUN_HH
