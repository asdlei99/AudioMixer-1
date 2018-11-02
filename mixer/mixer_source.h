#pragma once

#include <cstdint>
#include <string>
#include <utility>

namespace audio_mixer {

struct MixerSource final {

    static int32_t const TYPE_FILE;

    static int32_t const TYPE_RECORD;
    int32_t type;
    int32_t ssrc;
    float volume;
    std::string path;
    int32_t sample_rate;
    int32_t channel_num;

    MixerSource(int32_t type_,
                int32_t ssrc_,
                float volume_,
                std::string path_,
                int32_t sample_rate_,
                int32_t channel_num_)
    : type(std::move(type_))
    , ssrc(std::move(ssrc_))
    , volume(std::move(volume_))
    , path(std::move(path_))
    , sample_rate(std::move(sample_rate_))
    , channel_num(std::move(channel_num_))
    {}
};

}  // namespace audio_mixer
