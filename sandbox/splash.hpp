#ifndef ZGAME_SANDBOX_SPLASH_HPP
#define ZGAME_SANDBOX_SPLASH_HPP

#include "scene.hpp"
#include "assetmanager.hpp"
#include <SFML/Graphics.hpp>
#include "scenemanager.hpp"
#include "gamelevel.hpp"

namespace zifmann::zgame::sandbox {
    class SplashScreen : public zgame::core::Scene {
        private:
            sf::Clock m_clock;
        public:
            SplashScreen() = default;
            
            void OnStart() override {
                auto splashTexture = zgame::core::AssetManager::LoadTexture("splash.png");
                auto splashSprite = std::make_unique<sf::Sprite>();
                splashSprite->setTexture(*splashTexture.lock().get());
                m_drawables.push_back(std::move(splashSprite));
            }

            void OnUpdate(float dt) override {
                auto elapsed = m_clock.getElapsedTime().asSeconds();
                if (elapsed >= 2.0f) {
                    log_debug("Loading Game Level");
                    auto gameScene = std::make_unique<GameScene>();
                    zifmann::zgame::core::SceneManager::GetInstance()->LoadScene(std::move(gameScene));
                }
            }
    };
}

#endif
