#ifndef ZIFMANN_ZGAME_CORE_ENTITYMANAGER_HPP
#define ZIFMANN_ZGAME_CORE_ENTITYMANAGER_HPP

#include <queue>
#include <cstdint>
#include <cassert>
#include "logger.hpp"

namespace zifmann::zgame::core {

    typedef uint64_t Entity;

    namespace entitymanager {

        static std::queue<Entity> available_entities;
        static uint64_t entity_count = 0;
        constexpr uint64_t MAX_ENTITIES = 10000;

        Entity create_entity() {
            log_assert(entity_count < MAX_ENTITIES, "Max number of entities reached!");
            auto id = available_entities.front();
            available_entities.pop();
            entity_count++;
            return id;
        }

        void delete_entity(Entity id) {
            log_assert(id < MAX_ENTITIES, "Entity ID out of bounds!");
            available_entities.push(id);
            // remove all components and rearrange component list
            entity_count--;
        }

    }

}

#endif