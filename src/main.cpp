#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(BuffedPlayLayer, PlayLayer) {
    void postUpdate(float dt) {
        PlayLayer::postUpdate(dt);

        auto player = m_player1;
        if (!player) return;

        static float timer = 0.f;
        timer += dt;

        if (timer >= 1.f) {
            timer = 0.f;

            auto pos = player->getPosition();

            log::debug(
                "Buffed Click - X: {}, Y: {}",
                pos.x,
                pos.y
            );
        }
    }
};
