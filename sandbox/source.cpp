#include "../core/game.hpp"
#include "../core/input.hpp"
#include "../utils/stdio.hpp"
#include "../utils/format.hpp"
#include "testscene.hpp"

int main() {
    using namespace zifmann::zgame::core;
    Game::Config cfg = Game::Config::Default();
    Game game(cfg);
    std::unique_ptr<Scene> splashScene = std::make_unique<zifmann::zgame::sandbox::TestScene>();
    game.Start(std::move(splashScene));
    return 0;
}