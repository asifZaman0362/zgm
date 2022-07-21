#include "../core/scene.hpp"
#include "../core/input.hpp"

namespace zifmann::zgame::sandbox {
    class TestScene : public zifmann::zgame::core::Scene {
        public:
            void OnStart() override {
                sf::CircleShape *circle = new sf::CircleShape(100);
                circle->setOrigin(50, 50);
                circle->setPosition(300, 200);
                circle->setFillColor(sf::Color::Green);
                m_drawables.push_back(circle);
            }
    };
}
