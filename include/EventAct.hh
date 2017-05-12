

#ifndef M_DGW_4_EVENTACT_HH
#define M_DGW_4_EVENTACT_HH


#include <G4UserEventAction.hh>

class EventAct : public G4UserEventAction{
public:
    EventAct(){}
    ~EventAct(){}

private:
    bool flag;
public:
    void SetFlag(){flag=1;}
    void BeginOfEventAction(const G4Event* anEvent);
    void EndOfEventAction(const G4Event* anEvent);
};

#endif //CPROJECT_EVENTACT_HH
