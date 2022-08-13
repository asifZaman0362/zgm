#ifndef ZGAME_CORE_SYSTEMS_COLLISION_HPP
#define ZGAME_CORE_SYSTEMS_COLLISION_HPP

#include <vector>

namespace zgame::core::systems::collision {
    
    namespace utils {
        
        bool circle_circle_collision(
                float ax, float ay, float ar,
                float bx, float by, float br
                );
        bool circle_box_collision(
                float ax, float ay, float ar,
                float bx, float by, float bw, float bh
                );
        bool box_box_collision(
                float ax, float ay, float aw, float ah,
                float bx, float by, float bw, float bh
                );

    }
    
    enum ColliderType {
        BOX, CIRCLE
    };
    
    typedef int Entity;

    static std::vector<Entity> entity_table;

    template <ColliderType collider>
    void register_collider(void *);

}

#endif

