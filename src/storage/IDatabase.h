/*
 *      Copyright (C) 2015 Garrett Brown
 *      Copyright (C) 2015 Team XBMC
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "ButtonMapTypes.h"

#include <string>

namespace JOYSTICK
{
  class CDevice;

  class IDatabase
  {
  public:
    virtual ~IDatabase(void) { }

    /*!
     * \copydoc CStorageManager::GetFeatures()
     */
    virtual bool GetFeatures(const CDevice& driverInfo,
                             const std::string& controllerId,
                             FeatureVector& features) = 0;

    /*!
     * \copydoc CStorageManager::MapFeatures()
     */
    virtual bool MapFeatures(const CDevice& driverInfo,
                             const std::string& controllerId,
                             const FeatureVector& features) = 0;

    /*!
     * \copydoc CStorageManager::ResetButtonMap()
     */
    virtual bool ResetButtonMap(const CDevice& driverInfo,
                                const std::string& controllerId) = 0;
  };
}
