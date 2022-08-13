#include "scene.hpp"
#include "input.hpp"
#include "logger.hpp"
#include "assetmanager.hpp"

namespace zifmann::zgame::sandbox {
    class GameScene : public zifmann::zgame::core::Scene, public zifmann::zgame::core::Input::KeyListener {
        private:
            sptr<sf::Sprite> m_birdie;
            sf::Vector2f m_velocity;
        public:
            GameScene() {
                m_velocity = sf::Vector2f(0, 0);
                auto birdieTexture = zifmann::zgame::core::AssetManager::LoadTexture("birdie.png");
                m_birdie = std::make_shared<sf::Sprite>();
                m_birdie->setTexture(*birdieTexture.lock());
                core::Input::RegisterKeyListener(sf::Keyboard::Space, this);
                core::Input::RegisterKeyListener(sf::Keyboard::Escape, this);
                int end_first_pipe = 11;
                int start_second_pipe = 12;
                int end_second_pipe = 24;
                auto pipeTexture = core::AssetManager::LoadTexture("pipes.png");
                auto font = core::AssetManager::LoadFont("sans.ttf");
                auto bgTexture = core::AssetManager::LoadTexture("background.png");
                auto background = std::make_unique<sf::Sprite>();
                background->setScale(7.5f, 7.5f);
                background->setTexture(*bgTexture.lock());
                auto scoreText = std::make_shared<sf::Text>();
                scoreText->setFont(*font.lock());
                scoreText->setString("00");
                m_drawables.push_back(std::move(background));
                m_drawables.push_back(m_birdie);
                m_drawables.push_back(scoreText);
            }

            ~GameScene() = default;
            
            void OnStart() override {
                // core::Input::RegisterKeyListener(sf::Keyboard::Space, this);
            }

            void OnDestroy() override {
                core::AssetManager::DeleteTexture("birdie.png");
                core::AssetManager::DeleteTexture("pipes.png");
            }

            void OnUpdate(float dt) override {
                m_velocity.y += 9.8f * dt;
                m_birdie->move(m_velocity);
            }

            void OnKeyPress(sf::Keyboard::Key key) override {
                if (key == sf::Keyboard::Escape)
                    TryPause();
                else if (key == sf::Keyboard::Space)
                    FlapWings();
            }

            void OnKeyRelease(sf::Keyboard::Key key) override {
                
            }

            void FlapWings() {
                m_velocity.y = -5;
            }

            void TryPause() {}
    };
}
