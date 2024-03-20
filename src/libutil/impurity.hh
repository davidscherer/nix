#pragma once

#include <nlohmann/json_fwd.hpp>

namespace nix {
    void recordImpurity( nlohmann::json js );
}