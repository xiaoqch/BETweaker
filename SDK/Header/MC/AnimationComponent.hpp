// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AnimationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANIMATIONCOMPONENT
public:
    class AnimationComponent& operator=(class AnimationComponent const &) = delete;
    AnimationComponent(class AnimationComponent const &) = delete;
    AnimationComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANIMATIONCOMPONENT
public:
#endif
    MCAPI AnimationComponent(enum AnimationComponentGroup, class AnimationComponentID const &);
    MCAPI void applyAnimations(bool);
    MCAPI class std::shared_ptr<class ActorAnimationPlayer> createAnimationPlayer(class HashedString const &, class ExpressionNode const &, class std::set<class HashedString, struct std::hash<class HashedString>, class std::allocator<class HashedString>> &);
    MCAPI class std::unordered_map<enum SkeletalHierarchyIndex, std::vector<class BoneOrientation>, struct std::hash<enum SkeletalHierarchyIndex>, struct std::equal_to<enum SkeletalHierarchyIndex>, class std::allocator<struct std::pair<enum SkeletalHierarchyIndex const, std::vector<class BoneOrientation>>>> & getAllBoneOrientations();
    MCAPI class std::function<void (class ActorAnimationPlayer &)> const & getAnimationComponentInitFunction() const;
    MCAPI std::vector<class BoneOrientation> * getBoneOrientations(enum SkeletalHierarchyIndex, bool);
    MCAPI class std::shared_ptr<class ActorAnimationControllerStatePlayer> const getCurrentAnimationControllerStatePlayer() const;
    MCAPI class ModelPartLocator * getLocator(unsigned __int64 const &);
    MCAPI class RenderParams & getRenderParams();
    MCAPI void initInstanceSpecificAnimationData(class MolangVariableMap *);
    MCAPI void initializeServerAnimationComponent(class Actor &, class std::shared_ptr<class CommonResourceDefinitionMap>, class std::function<void (class ActorAnimationPlayer &)>);
    MCAPI bool isInitialized();
    MCAPI void serverUpdate(class Actor &);
    MCAPI void setCurrentAnimationControllerStatePlayer(class std::shared_ptr<class ActorAnimationControllerStatePlayer>);
    MCAPI void setDirty();
    MCAPI void setLastReloadInitTimeStampClient(unsigned __int64);
    MCAPI void setupDeltaTimeAndLifeTimeParams(bool);
    MCAPI bool shouldReloadBasedOnLastReloadInitTimeStamp() const;
    MCAPI bool usesLastReloadInitTimeStampClient() const;
    MCAPI static class std::shared_ptr<class AnimationComponent> getAnimationComponent(enum AnimationComponentGroup, class AnimationComponentID);
    MCAPI static unsigned __int64 getReloadTimeStampClient();
    MCAPI static void incrementCurrentServerFrameIndex();

//private:
    MCAPI static class std::unordered_map<class AnimationComponentID, class std::weak_ptr<class AnimationComponent>, struct std::hash<class AnimationComponentID>, struct std::equal_to<class AnimationComponentID>, class std::allocator<struct std::pair<class AnimationComponentID const, class std::weak_ptr<class AnimationComponent>>>> & _getAllAnimationComponents(enum AnimationComponentGroup);
    MCAPI static class std::recursive_mutex & _getAnimationComponentMapLock();
    MCAPI static void _removeAnimationComponentFromGlobalMap(enum AnimationComponentGroup, class AnimationComponentID const &);

private:
    MCAPI static struct std::atomic<__int64> mClientFrameIndex;
    MCAPI static struct std::atomic<__int64> mReloadTimeStampClient;
    MCAPI static struct std::atomic<__int64> mServerFrameIndex;


};