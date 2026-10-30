#include <Geode/Geode.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>

using namespace geode::prelude;

class $modify(BuffedGameLayer, GJBaseGameLayer) {
    void postUpdate(float dt) {
        GJBaseGameLayer::postUpdate(dt);

        if (PlayLayer::get()) {
            auto player = PlayLayer::get()->m_player1;

            if (player) {
                auto pos = player->getPosition();

                log::debug(
                    "Buffed Click - Player X: {}, Y: {}",
                    pos.x,
                    pos.y
                );
            }
        }
    }
};
