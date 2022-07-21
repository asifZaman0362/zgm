#ifndef ZGAME_CORE_INPUT_H
#define ZGAME_CORE_INPUT_H

#include <SFML/Graphics.hpp>
#include <map>
#include <list>

namespace zifmann::zgame::core {
    namespace Input {

        class KeyListener {
            public:
                virtual void OnKeyPress()   = 0;
                virtual void OnKeyRelease() = 0;
        };

        class MouseListener {
            public:
                virtual void OnMouseMove(int x, int y) = 0;
        };

        class MouseButtonListener {
            public:
                virtual void OnMouseButtonPress(sf::Mouse::Button)   = 0;
                virtual void OnMouseButtonRelease(sf::Mouse::Button) = 0;
        };

        typedef sf::Keyboard::Key               Key;
        typedef std::list<KeyListener*>         KeyListenerGroup;
        typedef std::list<MouseListener*>       MouseListenerGroup;
        typedef std::list<MouseButtonListener*> MbListenerGroup;

        static std::map<Key, KeyListenerGroup>  m_keyListeners;
        static KeyListenerGroup                 m_rawKeyListeners;
        static MouseListenerGroup               m_mouseListeners;
        static MbListenerGroup                  m_mouseButtonListeners;
        
        void RegisterKeyListener(sf::Keyboard::Key key, KeyListener *listener);

        void UnregisterKeyListener(sf::Keyboard::Key key, KeyListener *listener);

        void ProcessKeyPressEvent(sf::Keyboard::Key key);

        void ProcessKeyReleaseEvent(sf::Keyboard::Key key);

        void ProcessMouseMove(int x, int y);

        void ProcessMouseButtonPress(sf::Mouse::Button button);

        void ProcessMouseButtonRelease(sf::Mouse::Button button);

    }
}

#endif
