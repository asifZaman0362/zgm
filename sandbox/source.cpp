#include "game.hpp"
#include "input.hpp"
#include "stdio.hpp"
#include "format.hpp"
#include "splash.hpp"

int main() {
    using namespace zifmann::zgame::core;
    Game::Config cfg = Game::Config::Default();
    Game::Init(cfg);
    std::unique_ptr<Scene> splashScene = std::make_unique<zifmann::zgame::sandbox::SplashScreen>();
    Game::GetInstance()->Start(std::move(splashScene));
    return 0;
}
