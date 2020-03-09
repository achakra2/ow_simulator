// __BEGIN_LICENSE__
// Copyright (c) 2018-2020, United States Government as represented by the
// Administrator of the National Aeronautics and Space Administration. All
// rights reserved.
// __END_LICENSE__

#include "Cosimulator.h"
#include <gazebo/common/Console.hh>

Cosimulator::Cosimulator() : m_relaxed(false)
{
}

void Cosimulator::initialize(void) {
  gzdbg << "Cosimulator::initialize - STUBBED" << std::endl;

  // fill mesh with DE's

  // initialize rest of cosimulation
}

void Cosimulator::relax(const int &max_it, const int &max_speed) {
  gzdbg << "Cosimulator::relax - STUBBED" << std::endl;
  gzdbg << "Cosimulator::relax     max_it="
            << max_it << std::endl;
  gzdbg << "Cosimulator::relax     max_speed="
            << max_speed << std::endl;

  // iterate till max_it or all particles are under max_speed

  m_relaxed = true;
}

void Cosimulator::update(const ignition::math::Pose3d &tool_pose, double timestep,
  ignition::math::Vector3d &out_force, ignition::math::Vector3d &out_torque) {
  gzdbg << "Cosimulator::update - STUBBED" << std::endl;
  gzdbg << "Cosimulator::update     tool_pos=" 
            << tool_pose << std::endl;
  gzdbg << "Cosimulator::update     timestep=" 
            << timestep << std::endl;
  
  if (timestep <= 0) {
    out_force = ignition::math::Vector3d();
    out_torque = ignition::math::Vector3d();
    return;
  }

  // update tool position in cosimulation

  // run cosimulation for 1 timetep

  // return forces and torques acted on scoops

}

double Cosimulator::getSimTime(void)
{
  gzdbg << "Cosimulator::getSimTime - STUBBED" << std::endl;

  // get in-sim time from cosimulation

  return 0.0;
}

void Cosimulator::setParticleFillGeometry(gazebo::common::Mesh mesh) {
  gzdbg << "Cosimulator::setParticleFillGeometry - STUBBED" << std::endl;

  // set the value of pfill_mesh, convert if needed

}

void Cosimulator::setToolMesh(const std::string& path_to_mesh) {
  gzdbg << "Cosimulator::setToolMesh - STUBBED" << std::endl;
  gzdbg << "Cosimulator::setToolMesh     path_to_mesh="
            << path_to_mesh << std::endl;

  // set the value of tool_mesh, convert if needed

}

void Cosimulator::setParticleProperties( double youngs_modulus, 
    double poisson_ratio, double restitution_coef,
    double friction_static, double friction_rolling,
    double density, double radius) {
  m_particle_youngs_modulus   = youngs_modulus;
  m_particle_poisson_ratio    = poisson_ratio;
  m_particle_restitution_coef = restitution_coef;
  m_particle_friction_static  = friction_static;
  m_particle_friction_rolling = friction_rolling;
  m_particle_density          = density;
  m_particle_radius           = radius;
}

void Cosimulator::setToolProperties( double youngs_modulus,
    double poisson_ratio, double restitution_coef,
    double friction_static, double friction_rolling) {
  m_tool_youngs_modulus      = youngs_modulus;
  m_tool_poisson_ratio       = poisson_ratio;
  m_tool_restitution_coef    = restitution_coef;
  m_tool_friction_static     = friction_static;
  m_tool_friction_rolling    = friction_rolling;
}