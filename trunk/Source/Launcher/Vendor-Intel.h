/* Vendor-Intel.h
 * 
 * Author           : Alexander J. Yee
 * Date Created     : 02/01/2015
 * Last Modified    : 02/01/2015
 * 
 */

#pragma once
#ifndef _ycr_Vendor_Intel_H
#define _ycr_Vendor_Intel_H
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
//  Dependencies
#include "TryDispatch.h"
#include "Arch-x86.h"
#include "Warnings.h"
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
void dispatch_Intel(const cpu_x86& features){
    //  AVX512
#ifdef YCR_ENABLE_2018_x64_CannonLake
    dispatch_2018_x64_CannonLake(features);
#endif
#ifdef YCR_ENABLE_2017_x64_Skylake
    dispatch_2017_x64_Skylake(features);
#endif
#ifdef YCR_ENABLE_2016_x64_KnightsLanding
    dispatch_2016_x64_KnightsLanding(features);
#endif
    warn_noAVX512(features);
    warn_AVX512_OS(features);

    //  AVX
#ifdef YCR_ENABLE_2014_x64_Broadwell
    dispatch_2014_x64_Broadwell(features);
#endif
    dispatch_2013_x64_Haswell(features);
    dispatch_2011_x64_SandyBridge(features);
    warn_AVX_OS(features);

    //  x64
#if defined YCR_ENABLE_2007_x64_Penryn && defined YCR_ENABLE_2008_x64_Nehalem
    if (features.HW_SSE42){
        dispatch_2008_x64_Nehalem(features);
    }
    dispatch_2007_x64_Penryn(features);
#else
#ifdef YCR_ENABLE_2008_x64_Nehalem
    dispatch_2008_x64_Nehalem(features);
#endif
#ifdef YCR_ENABLE_2007_x64_Penryn
    dispatch_2007_x64_Penryn(features);
#endif
#endif

    dispatch_2004_x64_SSE3(features);
    warn_32bit_on_x64(features);

    //  x86
    dispatch_class_x86(features);
}
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
#endif
