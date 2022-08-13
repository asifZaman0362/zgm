#ifndef ZGAME_CORE_SYSTEMS_ANIMATION_HPP
#define ZGAME_CORE_SYSTEMS_ANIMATION_HPP

#include <memory>
#include <list>

namespace zgame::core::systems {
    
    class Animator;

    namespace AnimationSystem {
        static std::list<std::shared_ptr<Animator>> m_animators;    
        void Update(float dt);
    };

}

#endif
