

#ifndef M_DGW_4_RUNACT_HH
#define M_DGW_4_RUNACT_HH

#include <G4UserRunAction.hh>

class RunAct : public G4UserRunAction {
public:
    RunAct(){}
    ~RunAct(){}

    void EndOfRunAction(const G4Run* aRun);

    G4Run* GenerateRun();
};

#endif //CPROJECT_RUNGEN_HH
