//
// Created by student on 05.05.17.
//

#ifndef M_DGW_4_STEPACTION_HH
#define M_DGW_4_STEPACTION_HH

#include <G4UserSteppingAction.hh>
#include "EventAct.hh"

class StepAct:public G4UserSteppingAction{
private:
    EventAct* Act;
public:
    StepAct(EventAct* act):Act(act){}
    ~StepAct(){}
    void UserSteppingAction(const G4Step*);

};

#endif //M_DGW_4_STEPACTION_HH
