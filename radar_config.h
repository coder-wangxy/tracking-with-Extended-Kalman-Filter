/**
 * @file radar_config.h
 * @brief Configuration parameters for radar measurements and process noise
 * 
 * This file contains all configurable parameters related to radar measurements
 * and process noise used in the Extended Kalman Filter implementation.
 */

#ifndef RADAR_CONFIG_H
#define RADAR_CONFIG_H

namespace radar_config {

// Radar measurement noise parameters for the measurement covariance matrix R_radar_
static const double RADAR_NOISE_RHO = 0.09;      // Range measurement noise
static const double RADAR_NOISE_PHI = 0.0009;    // Bearing measurement noise
static const double RADAR_NOISE_RHODOT = 0.09;   // Radial velocity measurement noise

// Process noise parameters used to compute the process covariance matrix Q
static const double NOISE_AX = 9.0;              // Acceleration noise in x direction
static const double NOISE_AY = 9.0;              // Acceleration noise in y direction

} // namespace radar_config

#endif // RADAR_CONFIG_H
