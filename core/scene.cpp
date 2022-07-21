#include "scene.hpp"

namespace zifmann::zgame::core {

    Scene::~Scene() {
        
    }
    
    void Scene::OnRender(sf::RenderTarget& target) {
        for (auto& drawable : m_drawables) {
            target.draw(*drawable);
        }
    }

    void Scene::OnUpdate(float dt) {}

    void Scene::OnLoad() {}

    void Scene::OnDestroy() {
        for (auto& item : m_drawables) delete item;
        m_drawables.clear();
    }

    void Scene::OnEvent(const sf::Event&) {}

    void Scene::OnStart() {}

    void Scene::OnPause() {}

    void Scene::OnResume() {}

}