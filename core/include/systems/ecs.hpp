#ifndef ZIFMANN_ZGAME_CORE_SYSTEMS_ECS_HPP
#define ZIFMANN_ZGAME_CORE_SYSTEMS_ECS_HPP

#include <list>
#include <unordered_map>

typedef unsigned long int size_t;

namespace zifmann::zgame::core::systems {
    
    struct Component;
    typedef size_t Entity;

    typedef std::list<Component*> CompList;
    typedef std::unordered_map<Entity, CompList> EcTable;

    namespace ecs {

        static EcTable table;
        
        size_t RegisterEntity();
        void AddComponent(const Entity, Component*);
        template<typename T> Component* GetComponent(const Entity);
    
    }

}

#endif
