// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct BlockQueuedTickingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKQUEUEDTICKINGCOMPONENT
public:
    struct BlockQueuedTickingComponent& operator=(struct BlockQueuedTickingComponent const &) = delete;
    BlockQueuedTickingComponent() = delete;
#endif

public:
    MCAPI BlockQueuedTickingComponent(struct BlockQueuedTickingComponent &&);
    MCAPI BlockQueuedTickingComponent(struct BlockQueuedTickingComponent const &);
    MCAPI struct BlockQueuedTickingComponent & operator=(struct BlockQueuedTickingComponent &&);
    MCAPI ~BlockQueuedTickingComponent();

protected:

private:

};