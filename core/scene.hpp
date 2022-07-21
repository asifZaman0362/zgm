#ifndef ZGAME_CORE_SCENE_H
#define ZGAME_CORE_SCENE_H

#include <SFML/Graphics.hpp>
#include <list>

namespace zifmann::zgame::core {
    class Scene {
        private:
            std::list<sf::Drawable> m_drawables;
            bool                    m_isPlaying;
        public:
            Scene();
            virtual ~Scene();
            
            virtual void OnUpdate(float);
            virtual void OnRender(const sf::RenderTarget&);
            virtual void OnLoad();
            virtual void OnStart();
            virtual void OnEvent(const sf::Event&);
            virtual void OnPause();
            virtual void OnResume();
            virtual void OnDestroy();
    };
}

#endif
