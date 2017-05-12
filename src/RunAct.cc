
#include "RunAct.hh"
#include "Run.hh"


void RunAct::EndOfRunAction(const G4Run* aRun){
    G4int result;
    const Run* run = static_cast<const Run*>(aRun);
    std::cout << "Result for this 1337 :" << run->GetResult() << std::endl;


}

G4Run* RunAct::GenerateRun(){
    return new Run;

}