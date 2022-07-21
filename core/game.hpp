#ifndef ZGAME_CORE_GAME_H
#define ZGAME_CORE_GAME_H

#include <SFML/Graphics.hpp>
#include "scenemanager.hpp"

namespace zifmann::zgame::core {
    
    typedef unsigned short  ushort;
    typedef unsigned long   ulong;
    typedef unsigned int    uint;
    typedef bool            byte;

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
            SceneManager        m_sceneManager;
            GameState           m_gameState;
            Config              m_windowConfig;
            bool                m_isRunning;
        
        public:
            Game(const Config&);
            
            void Start();
            void Update(float);
            void ProcessEvent(const sf::Event&);
            void Render();
            void Stop();
    };
}

#endif
