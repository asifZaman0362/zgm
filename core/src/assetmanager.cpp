#include "assetmanager.hpp"


namespace zifmann::zgame::core {
    namespace AssetManager {

        std::weak_ptr<sf::Texture> LoadTexture(const std::string& name) {
            if (texture_files.contains(name))
                return texture_files[name];
            else {
                auto texture = std::make_shared<sf::Texture>();
                texture->loadFromFile(name);
                texture_files[name] = texture;
                return texture;
            }
        }

        std::weak_ptr<sf::SoundBuffer> LoadAudio(const std::string& name) {
            if (audio_files.contains(name))
                return audio_files[name];
            else {
                auto buffer = std::make_shared<sf::SoundBuffer>();
                buffer->loadFromFile(name);
                audio_files[name] = buffer;
                return buffer;
            }
        }

        std::weak_ptr<sf::Font> LoadFont(const std::string& name) {
            if (font_files.contains(name))
                return font_files[name];
            else {
                auto font = std::make_shared<sf::Font>();
                font->loadFromFile(name);
                font_files[name] = font;
                return font;
            }
        }

        void DeleteTexture(const std::string& name) {
            if (texture_files.contains(name)) {
                texture_files.erase(name);
            }
        }

        void DeleteAudio(const std::string& name) {
            if (audio_files.contains(name)) {
                audio_files.erase(name);
            }
        }

        void DeleteFont(const std::string& name) {
            if (font_files.contains(name)) {
                font_files.erase(name);
            }
        }
        
        void ClearResources() {
            texture_files.clear();
            audio_files.clear();
            font_files.clear();
        }
    
    }
}
