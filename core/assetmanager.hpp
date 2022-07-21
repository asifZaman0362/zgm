#ifndef ZGAME_CORE_ASSETMANAGER_H
#define ZGAME_CORE_ASSETMANAGER_H

#include <unordered_map>
#include <string>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Graphics/Font.hpp>

namespace zifmann::zgame::core {
    namespace AssetManager {
        
        static std::unordered_map<std::string, sf::Texture*> texture_files;
        static std::unordered_map<std::string, sf::SoundBuffer*> audio_files;
        static std::unordered_map<std::string, sf::Font*> font_files;

        sf::Texture* LoadTexture(const std::string&);
        sf::SoundBuffer* LoadAudio(const std::string&);
        sf::Font* LoadFont(const std::string&);

        void DeleteTexture(const std::string&);
        void DeleteAudio(const std::string&);
        void DeleteFont(const std::string&);

    }
}

#endif