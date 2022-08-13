#ifndef ZGAME_CORE_SCENE_H
#define ZGAME_CORE_SCENE_H

#include <SFML/Graphics.hpp>
#include <list>
#include <map>
#include <memory>

namespace zifmann::zgame::core {
    #define sptr std::shared_ptr

    /// @brief A hollow class for components
    class Component {
        unsigned long component_id;
    };

    typedef unsigned long Entity;
    typedef std::list<Component> ComponentList;

    class Scene {
        protected:
            std::list<sptr<sf::Drawable>> m_drawables;
            bool m_isPlaying;
            std::list<Entity> m_entities;
            std::map<Entity, ComponentList> m_ecTable;
        public:
            Scene() = default;
            virtual ~Scene();
            
            virtual void OnUpdate(float);
            virtual void OnRender(sf::RenderTarget& target);
            // @brief override this function to create entities and components
            virtual void OnLoad();
            /// @brief override this function to define behaviour that occus upon starting the game
            virtual void OnStart();
            virtual void OnEvent(const sf::Event&);
            virtual void OnPause();
            virtual void OnResume();
            virtual void OnDestroy();
    };
}

#endif
