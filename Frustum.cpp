/** @file *//********************************************************************************************************

                                                     Frustum.cpp

                                            Copyright 2003, John J. Bolton
    --------------------------------------------------------------------------------------------------------------

    $Header: //depot/Libraries/Math/Frustum.cpp#10 $

    $NoKeywords: $

********************************************************************************************************************/

#include "PrecompiledHeaders.h"

#include "Frustum.h"

#include "Plane.h"

Frustum::Frustum()
{
}

Frustum::Frustum(Plane const & left, Plane const & right,
                 Plane const & bottom, Plane const & top,
                 Plane const & n, Plane const & f)
{
    m_Sides[LEFT_SIDE]   = left;
    m_Sides[RIGHT_SIDE]  = right;
    m_Sides[TOP_SIDE]    = top;
    m_Sides[BOTTOM_SIDE] = bottom;
    m_Sides[NEAR_SIDE]   = n;
    m_Sides[FAR_SIDE]    = f;
}
