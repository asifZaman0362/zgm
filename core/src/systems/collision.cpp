#include "systems/collision.hpp"
#include <cmath>

namespace zgame::core::systems::collision {
    
    namespace utils {
        
        inline float sqr(float x) { return x * x; }
        inline float abs(float x) { return x > 0 ? x : x * -1.0f; }
    }

    bool circle_circle_collision(
            float ax, float ay, float ar,
            float bx, float by, float br) {
        auto dist = utils::sqr(ax - bx) + utils::sqr(ay - by);
        auto rdst = ar + br;
        return dist < rdst;
    }

    bool box_box_collision(
            float ax, float ay, float aw, float ah,
            float bx, float by, float bw, float bh) {
        auto x = (ax + aw <= bx) && (bx + bw <= ax);
        auto y = (ay + ah <= by) && (by + bh <= ay);
        return x && y;
    }
    
    bool circle_box_collision(
            float ax, float ay, float ar,
            float bx, float by, float bw, float bh) {
        float x = bx + bw, y = by + bh;
        auto dist_first = utils::abs ( ax - bx );
        auto dist_sec = utils::abs ( ax - ( bx + bw ) );
        if ( dist_first < dist_sec ) x = bx;
        dist_first = utils::abs ( ay - by );
        dist_sec = utils::abs ( ay - (by + bh) );
        if ( dist_first < dist_sec ) y = ay;
        float dist = sqrt ( ( ax - x ) * ( ax - x ) + ( ay - y ) * ( ay - y ) );
        return dist < ar;
    }

}
