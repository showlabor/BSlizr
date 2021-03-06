/* HSwitch.hpp
 * Copyright (C) 2018  Sven Jähnichen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#ifndef BWIDGETS_HSWITCH_HPP_
#define BWIDGETS_HSWITCH_HPP_

#include "Knob.hpp"
#include "HSlider.hpp"

#define BWIDGETS_DEFAULT_HSWITCH_WIDTH 40.0
#define BWIDGETS_DEFAULT_HSWITCH_HEIGHT 20.0
#define BWIDGETS_DEFAULT_HSWITCH_DEPTH 1.0

namespace BWidgets
{
/**
 * Class BWidgets::HSwitch
 *
 * On/OFF switch widget. Is is a BWidgets::HSlider having two conditions: on
 * (value != 0) or off (value == 0)
 */
class HSwitch : public HSlider
{
public:
	HSwitch ();
	HSwitch (const double x, const double y, const double width, const double height, const std::string& name, const double defaultvalue);

protected:
	virtual void updateCoords () override;
};

}

#endif /* BWIDGETS_HSWITCH_HPP_ */
