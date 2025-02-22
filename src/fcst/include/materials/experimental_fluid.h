// ----------------------------------------------------------------------------
//
// FCST: Fuel Cell Simulation Toolbox
//
// Copyright (C) 2006-2013 by Energy Systems Design Laboratory, University of Alberta
//
// This software is distributed under the MIT License
// For more information, see the README file in /doc/LICENSE
//
// - Class: experimental_fluid.h
// - Description: This class describes a fluid
// - Developers: Valentin N. Zingan, University of Alberta
// - Id: $Id: experimental_fluid.h 2605 2014-08-15 03:36:44Z secanell $
//
// ----------------------------------------------------------------------------

#ifndef _FCST_FUELCELLSHOP_MATERIAL_EXPERIMENTAL_FLUID_H_
#define _FCST_FUELCELLSHOP_MATERIAL_EXPERIMENTAL_FLUID_H_

#include "base_material.h"

namespace FuelCellShop
{
namespace Material
{

/**
 * This class describes
 *
 * - incompressible,
 * - isothermal,
 * - single-phase,
 * - single-component
 *
 * fluid.
 *
 * The functionality of
 * this class can be extended
 * if needed.
 *
 * \author Valentin N. Zingan, 2012
 */

class ExperimentalFluid : public BaseMaterial
{
public:

///@name Constructors, destructor, and initialization
//@{

  /**
   * Constructor.
   */
  ExperimentalFluid(const std::string& name);

  /**
   * Destructor.
   */
  virtual ~ExperimentalFluid();

  /**
   * Declare parameters.
   */
  virtual void declare_parameters(ParameterHandler& param) const;

  /**
   * Initialize parameters.
   */
  virtual void initialize(ParameterHandler& param);

//@}

///@name Accessors and info
//@{

  /**
   * This function returns
   * \p density.
   */
  const double& get_density() const
  {
    return density;
  }

  /**
   * This function returns
   * \p dynamic_viscosity.
   */
  const double& get_dynamic_viscosity() const
  {
    return dynamic_viscosity;
  }

  /**
   * This function prints out
   * the material properties.
   */
  virtual void print_material_properties() const;

//@}

protected:

  //////////
  // DATA //
  //////////

///@name Fluid properties
//@{

  /**
   * Density, kg/m^3.
   */
  double density;

  /**
   * Dynamic viscosity, Pa sec.
   */
  double dynamic_viscosity;

//@}

};

} // Material

} // FuelCellShop

#endif