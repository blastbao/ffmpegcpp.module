/*
* memory context shared implementation
* Copyright (c) 2015 Dror Gluska, All rights reserved.
*
* This file is part of ffmpegcpp
*
* ffmpegcpp is a wrapper for ffmpeg and it's a free software under the 3-clause BSD license
*
* ffmpegcpp is distributed in the hope that it will be useful but WITHOUT ANY WARRANTY.
*/

#ifndef _FFMPEGCPP_MEMORYCONTEXT_PIMPL_H_
#define _FFMPEGCPP_MEMORYCONTEXT_PIMPL_H_

#include "ffmpeg.h"

#include "memorycontext.h"

#include "iobuffer.h"

namespace ffmpegcpp
{
	struct memorycontext::memorycontext_pimpl
	{
		std::shared_ptr<iobuffer> _iobuffer;
	};
};

#endif