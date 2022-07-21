#include "assetmanager.hpp"


namespace zifmann::zgame::core {
    namespace AssetManager {

        sf::Texture* LoadTexture(const std::string& name) {
            if (texture_files.contains(name))
                return texture_files[name];
            else {
                sf::Texture *texture = new sf::Texture();
                texture->loadFromFile(name);
                texture_files[name] = texture;
                return texture;
            }
        }

        sf::SoundBuffer* LoadAudio(const std::string& name) {
            if (audio_files.contains(name))
                return audio_files[name];
            else {
                sf::SoundBuffer *buffer = new sf::SoundBuffer();
                buffer->loadFromFile(name);
                audio_files[name] = buffer;
                return buffer;
            }
        }

        sf::Font* LoadFont(const std::string& name) {
            if (font_files.contains(name))
                return font_files[name];
            else {
                sf::Font *font = new sf::Font();
                font->loadFromFile(name);
                font_files[name] = font;
                return font;
            }
        }

        void DeleteTexture(const std::string& name) {
            if (texture_files.contains(name))
                texture_files.erase(name);
        }

        void DeleteAudio(const std::string& name) {
            if (audio_files.contains(name))
                audio_files.erase(name);
        }

        void DeleteFont(const std::string& name) {
            if (font_files.contains(name))
                font_files.erase(name);
        }
    
    }
}