#include "../core/include/scene.hpp"
#include "../core/include/input.hpp"
#include "../utils/logger/include/logger.hpp"

namespace zifmann::zgame::sandbox {
    class TestScene : public zifmann::zgame::core::Scene, public zifmann::zgame::core::Input::KeyListener {
        private:
            sf::CircleShape *circle;
        public:
            TestScene() {
                circle = new sf::CircleShape(100);
                circle->setOrigin(50, 50);
                circle->setPosition(300, 200);
                circle->setFillColor(sf::Color::Green);
                m_drawables.push_back(circle);
                core::Input::RegisterKeyListener(sf::Keyboard::Space, this);
                core::Input::RegisterKeyListener(sf::Keyboard::Return, this);
            }

            ~TestScene() = default;
            
            void OnStart() override {
                // core::Input::RegisterKeyListener(sf::Keyboard::Space, this);
            }

            void OnKeyPress(sf::Keyboard::Key key) {
                if (key == sf::Keyboard::Return)
                    circle->setFillColor(sf::Color::Red);
                else if (key == sf::Keyboard::Space)
                    circle->setFillColor(sf::Color::Green);
            }

            void OnKeyRelease(sf::Keyboard::Key key) {
                
            }
    };
}
