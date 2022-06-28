/*****************************************************************************
 * Copyright (c) 2014-2022 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#include "Wait.h"

namespace OpenRCT2::Title
{
    int16_t WaitCommand::operator()(int16_t timer)
    {
        return Milliseconds;
    }
} // namespace OpenRCT2::Title
