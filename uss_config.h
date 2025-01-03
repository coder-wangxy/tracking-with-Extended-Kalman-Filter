#ifndef USS_CONFIG_H_
#define USS_CONFIG_H_

namespace uss_config {
  // USS measurement noise parameters
  // Using similar scale to RADAR's rho noise (0.09) but slightly lower
  // since USS typically has better range accuracy for close distances
  static const float USS_NOISE_RANGE = 0.05f;  // Range measurement noise

  // USS uses the same process noise parameters as radar_config::NOISE_AX/AY
}  // namespace uss_config

#endif  // USS_CONFIG_H_
