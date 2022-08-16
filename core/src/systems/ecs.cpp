#include "systems/ecs.hpp"

namespace zifmann::zgame::core::systems {

    namespace ecs {

        size_t RegisterEntity() {
            return 0;
        }

        void AddComponent(const Entity, const Component*) {
            return;
        }

        template<typename T> Component const* GetComponent(const Entity) {
            return nullptr;
        }

    }

}