#include <RunAct.hh>
#include <EventAct.hh>
#include <StepAction.hh>
#include "ActionInit.hh"
ActionInit::ActionInit()
{ }

ActionInit::~ActionInit()
{ }


void ActionInit::Build() const
{
    SetUserAction(new PrimaryGen());


    RunAct* runAction = new RunAct;
    SetUserAction(runAction);

    EventAct* eventAction = new EventAct();
    SetUserAction(eventAction);

    SetUserAction(new StepAct(eventAction));

}