/*
 * This file is part of librtprocess.
 *
 * Copyright (c) 2018 Carlo Vaccari
 *
 * librtprocess is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the license, or
 * (at your option) any later version.
 *
 * librtprocess is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with librtprocess.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _RAWIMAGESOURCE_
#define _RAWIMAGESOURCE_

#include "array2D.h"
#include <iostream>
#include <functional>

namespace rtengine
{

class RawImageSource
{
    void amaze_demosaic_RT(int winx, int winy, int winw, int winh, const array2D<float> &rawData, array2D<float> &red, array2D<float> &green, array2D<float> &blue, unsigned cfarray[2][2], std::function<bool(double)>, double initGain, int border, int W, int H);
    void border_interpolate2(int winw, int winh, int lborders, const array2D<float> &rawData, array2D<float> &red, array2D<float> &green, array2D<float> &blue, unsigned cfarray[2][2]);
};
}//namespace


#endif
