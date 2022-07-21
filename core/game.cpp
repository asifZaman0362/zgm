#include "game.hpp"
#include "input.hpp"

namespace zifmann::zgame::core {

    Game::Config Game::Config::Default() {
        return Config {
            800, 480, 32, 60, sf::Style::Default, false, "Sandbox"
        };
    }
    
    Game::Game(const Config& config) : m_windowConfig(config) {}
    
    void Game::Start() {
        m_window.create(
            sf::VideoMode(
                m_windowConfig.width,
                m_windowConfig.height
            ),
            m_windowConfig.window_title,
            m_windowConfig.window_flags
        );
        if (m_windowConfig.vsync)
            m_window.setVerticalSyncEnabled(true);
        else
            m_window.setFramerateLimit(m_windowConfig.fps_cap);
        m_isRunning = true;
        m_sceneManager.Init();
        m_gameState = GameState::Playing;
        m_clock.restart();
        while (m_isRunning) {
            sf::Event e{};
            while (m_window.pollEvent(e)) {
                if (e.type == sf::Event::Closed) Stop();
                ProcessEvent(e);
            }
            float dt = m_clock.restart().asSeconds();
            Update(dt);
            Render();
        }
        m_sceneManager.Stop();
        m_window.close();
    }

    void Game::Update(float dt) {
        m_sceneManager.Update(dt);
    }

    void Game::ProcessEvent(const sf::Event& event) {
        if (event.type == sf::Event::KeyPressed) {
            Input::ProcessKeyPressEvent(event.key.code);
        } else if (event.type == sf::Event::KeyReleased) {
            Input::ProcessKeyReleaseEvent(event.key.code);
        } else if (event.type == sf::Event::MouseMoved) {
            Input::ProcessMouseMove(event.mouseMove.x, event.mouseMove.y);
        } else if (event.type == sf::Event::MouseButtonPressed) {
            Input::ProcessMouseButtonPress(event.mouseButton.button);
        } else if (event.type == sf::Event::MouseButtonReleased) {
            Input::ProcessMouseButtonRelease(event.mouseButton.button);
        }
    }

    void Game::Render() {
        m_window.clear(sf::Color::Blue);
        m_sceneManager.Render(m_window);
        m_window.display();
    }

    void Game::Stop() {
        m_isRunning = false;
    }
}
