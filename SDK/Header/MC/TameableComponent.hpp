// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TameableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAMEABLECOMPONENT
public:
    class TameableComponent& operator=(class TameableComponent const &) = delete;
    TameableComponent(class TameableComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TAMEABLECOMPONENT
public:
#endif
    MCAPI TameableComponent();
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);
    MCAPI void tame(class Actor &, class Player &);

//private:
    MCAPI bool _attemptToTame(class Actor &, class Player &);
    MCAPI bool _canTame(class Actor &, class Player &);

private:


};