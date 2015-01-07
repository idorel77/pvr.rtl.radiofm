#pragma once
/*
 *      Copyright (C) 2015 Alwin Esch (Team KODI)
 *      http://kodi.tv
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
 *  along with KODI; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301  USA
 *  http://www.gnu.org/copyleft/gpl.html
 *
 */

#include "kodi/libXBMC_addon.h"
#include "kodi/libXBMC_codec.h"
#include "kodi/libXBMC_pvr.h"
#include "kodi/libXBMC_gui.h"
#include "kodi/DVDDemuxPacket.h"
#include "xbmc/util/XMLUtils.h"
#include "xbmc/util/StdString.h"
#include "xbmc/util/util.h"
#include "xbmc/util/timeutils.h"
#include "xbmc/threads/threads.h"

extern bool                          m_bCreated;
extern std::string                   g_strUserPath;
extern std::string                   g_strClientPath;
extern ADDON::CHelper_libXBMC_addon *KODI;
extern CHelper_libXBMC_codec        *CODEC;
extern CHelper_libXBMC_gui          *GUI;
extern CHelper_libXBMC_pvr          *PVR;

#define XBMC KODI

#include "kodi/xbmc_stream_utils.hpp"
