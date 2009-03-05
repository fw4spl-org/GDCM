/*=========================================================================

  Program: GDCM (Grassroots DICOM). A DICOM library
  Module:  $URL$

  Copyright (c) 2006-2009 Mathieu Malaterre
  All rights reserved.
  See Copyright.txt or http://gdcm.sourceforge.net/Copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
#ifndef __gdcm_openjpeg_h
#define __gdcm_openjpeg_h

/* Use the openjpeg library configured for gdcm.  */
#include "gdcmTypes.h"
#ifdef GDCM_USE_SYSTEM_OPENJPEG
#include <openjpeg.h>
#include <j2k.h>
#include <jp2.h>
#else
extern "C" {
#include <gdcmopenjpeg/libopenjpeg/openjpeg.h>
#include <gdcmopenjpeg/libopenjpeg/j2k.h>
#include <gdcmopenjpeg/libopenjpeg/jp2.h>
}
#endif

#endif

