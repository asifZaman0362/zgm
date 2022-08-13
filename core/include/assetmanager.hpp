#ifndef ZGAME_CORE_ASSETMANAGER_H
#define ZGAME_CORE_ASSETMANAGER_H

#include <unordered_map>
#include <string>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Graphics/Font.hpp>
#include <memory>

namespace zifmann::zgame::core {
    namespace AssetManager {
       
        // TODO: use shared ptr?
        static std::unordered_map<std::string, std::shared_ptr<sf::Texture>> texture_files;
        static std::unordered_map<std::string, std::shared_ptr<sf::SoundBuffer>> audio_files;
        static std::unordered_map<std::string, std::shared_ptr<sf::Font>> font_files;

        /// @brief Loads texture into memory
        /// @parama filename: Filename of the texture
        std::weak_ptr<sf::Texture> LoadTexture(const std::string&);
        /// @brief Loads audio clip into memory
        /// @parama filename: Filename of the audio clip
        std::weak_ptr<sf::SoundBuffer> LoadAudio(const std::string&);
        /// @brief Loads font into memory
        /// @parama filename: Filename of the font
        std::weak_ptr<sf::Font> LoadFont(const std::string&);

        /// @brief Deletes and unloads texture from memory
        /// @param filename: Filename of the texture
        void DeleteTexture(const std::string&);
        /// @brief Deletes and unloads audio clip from memory
        /// @param filename: Filename of the audio clip
        void DeleteAudio(const std::string&);
        /// @brief Deletes and unloads font file from memory
        /// @parama filename: Filename of the font
        void DeleteFont(const std::string&);
        
        /// @brief Clears all resources that were loaded since startup
        void ClearResources();

    }
}

#endif
