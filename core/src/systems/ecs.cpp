#include "systems/ecs.hpp"
#include "logger.hpp"

/*
    ____________________________________________________________
    | Entity | ComponentList                                   |
    |--------|-------|-------|-------|-------|-------|---------|
    | ID     |   0   |   1   |   2   |   3   |   4   |   ...   |
    |--------|-------|-------|-------|-------|-------|   ...   |
    | 0xef12 | 0xf12 | 0x23f | null  | 0x452 | null  |   ...   |
    | 0xef13 | 0x123 | null  | 0x43f | 0x64a | null  |   ...   |
    |--------|-------|-------|-------|-------|-------|---------|
    
    GetComponent<C_ID>(E_ID) {
        if (table.contains(E_ID))
            return table[E_ID][C_ID];
        return nullptr;
    }

    OR

    ____________________________________________________________
    | Entity | ComponentList                                   |
    |--------|-------|-------|-------|-------|-------|   ...   |
    | 0xef12 | 0xf12 | null                                    |
    | 0xef13 | 0x123 | 0x43f | 0x64a | null                    |
    |--------|-------|-------|-------|-------|-------|---------|

    No ordering

    GetComponent<C_ID>(E_ID) {
        if (table.contains(E_ID)) {
            for (auto comp : table[E_ID]) {
                if (comp->C_ID == C_ID) return comp;
            }
        }
        return nullptr;
    }

    space efficient but O(n) retrieval of components (not ideal)

    Memory overhead of the ECS table
    In a real world use-case, it isn't completely outlandish to limit the type of components to
    at most a thousand which fits nicely in a ushort. Limiting the number of entities (not in actual software, 
    just for analysis) to around, say a million (worst case). In that case, you'd have to use uints (32 bit)
    to represent entities.
    a single entity can have atmost a thousand pointers to components so size of a row = 8KB
    a million entities would then have = 8 * 1000 * 1,000,000
    8 GBs?!

    Indirection to solve the memory issue
    Components are stored in lists.

    typedef ComponentList std::unordered_map<Entity, Component>;
    
    //somewhere in the engine

    ComponentList renderableList;
    ComponentList transformableList;
    ComponentList controllableList;

    // render_system.hpp

    namespace RendererSystem {
        
        ComponentList *renderableList;
        ComponentList *transformableList;

        RenderTarget *target;

        void Update() {
            for (renderable : *renderableList) {
                renderable.draw(*target);
            }
        }

    }

*/


namespace zifmann::zgame::core::systems {

    namespace ecs {

        size_t RegisterEntity() {
            return 0;
        }

        void AddComponent(const Entity e, Component* comp) {
            if (!table.contains(e)) log_error("Entity out of bounds!");
            table[e].push_back(comp);
            return;
        }

        template<typename T> Component const* GetComponent(const Entity e) {
            if (!table.contains(e)) {
                log_error("Entity out of bounds!");
                return nullptr;
            }
            for (auto& comp : table[e]) 
                if (comp->GetComponentId() == T::GetComponentId())
                    return comp;
            return nullptr;
        }

    }

}
