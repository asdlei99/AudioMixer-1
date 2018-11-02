#pragma once

#include "mixer_source.h"
#include <cstdint>
#include <utility>
#include <vector>

namespace audio_mixer {

struct MixerConfig final {
    std::vector<MixerSource> sources;
    int32_t output_sample_rate;
    int32_t output_channel_num;
    int32_t frame_duration_ms;

    MixerConfig(std::vector<MixerSource> sources_,
                int32_t output_sample_rate_,
                int32_t output_channel_num_,
                int32_t frame_duration_ms_)
    : sources(std::move(sources_))
    , output_sample_rate(std::move(output_sample_rate_))
    , output_channel_num(std::move(output_channel_num_))
    , frame_duration_ms(std::move(frame_duration_ms_))
    {}
};

}  // namespace audio_mixer
