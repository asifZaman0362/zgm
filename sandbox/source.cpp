#include "../core/game.hpp"
#include "../core/input.hpp"
#include "../utils/stdio.hpp"
#include "../utils/format.hpp"
#include "testscene.hpp"

int main() {
    using namespace zifmann::zgame::core;
    Game::Config cfg = Game::Config::Default();
    Game game(cfg);
    game.Start();
    return 0;
}
