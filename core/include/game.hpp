#ifndef ZGAME_CORE_GAME_H
#define ZGAME_CORE_GAME_H

#include <SFML/Graphics.hpp>
#include "scenemanager.hpp"

namespace zifmann::zgame::core {
    
    typedef unsigned short  ushort;
    typedef unsigned long   ulong;
    typedef unsigned int    uint;
    typedef bool            byte;

    // TODO: convert game class to either a namespace or a singleton
    class Game {
        
        public:
            enum GameState {
                Playing, Paused, Stopped
            };

            struct Config {
                ushort      height;
                ushort      width;
                ushort      color_depth;
                ushort      fps_cap;
                uint        window_flags;
                bool        vsync;
                sf::String  window_title;

                static Config Default();
            };
        
        private:
            sf::RenderWindow    m_window;
            sf::Clock           m_clock;
            GameState           m_gameState;
            Config              m_windowConfig;
            bool                m_isRunning;
            static std::unique_ptr<Game> m_instance;
        
        public:
            Game(const Config&);
            static Game* GetInstance();
            static void Init(const Config&);
            void Start(std::unique_ptr<Scene>);
            void Update(float);
            void ProcessEvent(const sf::Event&);
            void Render();
            void Stop();
    };
}

#endif
