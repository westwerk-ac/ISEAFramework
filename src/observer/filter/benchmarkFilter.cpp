/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see http://www.gnu.org/licenses/.
*/
/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
* File Name : benchmarkFilter.cpp
* Creation Date : 07-10-2015
* Last Modified : Mo 06 Jun 2016 13:26:32 CEST
* Created By : Friedrich Hust
_._._._._._._._._._._._._._._._._._._._._.*/

#include "benchmarkFilter.h"

namespace observer
{
#ifndef __NO_STRING__
template class BenchmarkFilter< myMatrixType, electrical::TwoPort, PreparationType >;
template class BenchmarkFilter< double, thermal::ThermalElement, ThermalPreperation >;
#endif /* __NO_STRING__ */
} /*namespace*/
