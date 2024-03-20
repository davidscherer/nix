#include "impurity.hh"
#include "logging.hh"

namespace nix {
    void recordImpurity( nlohmann::json js ) {
        printMsg(lvlChatty, "impurity: %s", js.dump());
    }
}