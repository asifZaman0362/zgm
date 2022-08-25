#include "input.hpp"

namespace zifmann::zgame::core::Input {
    
    // static std::map<Key, KeyListenerGroup>  m_keyListeners;
    // static KeyListenerGroup                 m_rawKeyListeners;
    // static MouseListenerGroup               m_mouseListeners;
    // static MbListenerGroup                  m_mouseButtonListeners;

    void RegisterKeyListener(sf::Keyboard::Key key, KeyListener *listener) {
        m_keyListeners[key].push_back(listener);
    }

    void UnregisterKeyListener(sf::Keyboard::Key key, KeyListener *listener) {
        m_keyListeners[key].remove(listener);
    }

    void ProcessKeyPressEvent(sf::Keyboard::Key key) {
        for (auto& listener : m_keyListeners[key]) 
            listener->OnKeyPress(key);
    }

    void ProcessKeyReleaseEvent(sf::Keyboard::Key key) {
        for (auto& listener : m_keyListeners[key])
            listener->OnKeyRelease(key);
    }

    void ProcessMouseMove(int x, int y) {
        for (auto& listener : m_mouseListeners)
            listener->OnMouseMove(x, y);
    }

    void ProcessMouseButtonPress(sf::Mouse::Button button) {
        for (auto& listener : m_mouseButtonListeners)
            listener->OnMouseButtonPress(button);
    }

    void ProcessMouseButtonRelease(sf::Mouse::Button button) {
        for (auto& listener : m_mouseButtonListeners)
            listener->OnMouseButtonRelease(button);
    }
} // namespace zifmann::zgame::core::Input
