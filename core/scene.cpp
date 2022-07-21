#include "scene.hpp"

namespace zifmann::zgame::core {
    
    Scene::~Scene() {
        for (auto& item : m_drawables) delete item;
        m_drawables.clear();
    }
    
    void Scene::OnRender(sf::RenderTarget& target) {
        for (auto& drawable : m_drawables) {
            target.draw(*drawable);
        }
    }
    
}