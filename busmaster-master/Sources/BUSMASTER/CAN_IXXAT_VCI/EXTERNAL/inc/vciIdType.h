//////////////////////////////////////////////////////////////////////////
// IXXAT Automation GmbH
//////////////////////////////////////////////////////////////////////////
/**
  VCI specific constants, data types and macros.

  @file "vciIdType.h"

  @note
  This file is shared between user and kernel mode components.
  Request a kernel mode developer before changing the contents
  of this file

*/
//////////////////////////////////////////////////////////////////////////
// (C) 2002-2011 IXXAT Automation GmbH, all rights reserved
//////////////////////////////////////////////////////////////////////////

#ifndef VCIIDTYPE_H
#define VCIIDTYPE_H

//////////////////////////////////////////////////////////////////////////
//  include files
//////////////////////////////////////////////////////////////////////////

#ifdef VCIUSERAPP
#include <pshpack8.h>
#else
#include <XATtype_adapt.h>
#include <XATpshpack8.h>
#endif

//////////////////////////////////////////////////////////////////////////
//  constants and macros
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////
// data types
//////////////////////////////////////////////////////////////////////////

/*****************************************************************************
 * unique VCI object identifier
 ****************************************************************************/
typedef union _VCIID
{
    LUID  AsLuid;
    INT64 AsInt64;
} VCIID, *PVCIID;

#if defined(__cplusplus)
typedef const VCIID& REFVCIID;
#else
typedef const VCIID* const REFVCIID;
#endif


#ifdef VCIUSERAPP
#include <poppack.h>
#else
#include <XATpoppack.h>
#endif


#endif //VCIIDTYPE_H
