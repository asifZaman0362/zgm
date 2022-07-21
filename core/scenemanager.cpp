#include "scenemanager.hpp"

namespace zifmann::zgame::core {
    
    void SceneManager::Init() {
        // do stuff
    }

    void SceneManager::LoadScene(std::unique_ptr<Scene> scene, bool preserveLast) {
        if (!preserveLast) {
            m_scenes.top()->OnDestroy();
            m_scenes.pop();
        }
        m_scenes.push(std::move(scene));
        m_scenes.top()->OnLoad();
    }

    void SceneManager::StartScene() {
        m_scenes.top()->OnStart();
    }

    void SceneManager::PopScene() {
        m_scenes.pop();
    }

    void SceneManager::Render(const sf::RenderTarget& window) {
        m_scenes.top()->OnRender(window);
    }

    void SceneManager::Update(float dt) {
        m_scenes.top()->OnUpdate(dt);
    }

    void SceneManager::ProcessEvent(const sf::Event& e) {
        m_scenes.top()->OnEvent(e);
    }

    void SceneManager::PauseScene() {
        m_isPlaying = false;
        m_scenes.top()->OnPause();
    }

    void SceneManager::ResumeScene() {
        m_scenes.top()->OnResume();
        m_isPlaying = true;
    }

    void SceneManager::Stop() {
        while (m_scenes.size()) {
            m_scenes.top()->OnDestroy();
            m_scenes.pop();
        }
    }

}
