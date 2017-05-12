
#include <Run.hh>
#include <G4RunManager.hh>
#include "EventAct.hh"

void EventAct::BeginOfEventAction(const G4Event* anEvent){
    flag = 0;
}

void EventAct::EndOfEventAction(const G4Event* anEvent){

    if (flag == 1)
    {
        Run *run = static_cast<Run *>(G4RunManager::GetRunManager()->GetNonConstCurrentRun());
        run->SetNewEvent();
    }
}