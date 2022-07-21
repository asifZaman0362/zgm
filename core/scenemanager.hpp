#ifndef ZGAME_CORE_SCENE_MANAGER_H
#define ZGAME_CORE_SCENE_MANAGER_H

#include "scene.hpp"
#include <stack>
#include <memory>

namespace zifmann::zgame::core {
    class SceneManager {
        private:
            std::stack<std::unique_ptr<Scene>> m_scenes;
            bool m_isPlaying;
        public:
            void Init();
            /// @brief
            /// Loads a new scene into the scene stack and starts playing it
            /// @param scene: UniquePtr to the scene to load
            /// @param preserveLast: Specifies whether the scene manager should
            /// save the state (and resources) of the last active scene in memory
            void LoadScene(std::unique_ptr<Scene> scene, bool preserveLast = false);
            void StartScene();
            std::unique_ptr<Scene> PopScene();
            void Render(const sf::RenderTarget&);
            void Update(float);
            void ProcessEvent(const sf::Event&);
            void PauseScene();
            void ResumeScene();
    };
}

#endif
