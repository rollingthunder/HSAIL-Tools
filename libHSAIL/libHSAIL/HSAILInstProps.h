// University of Illinois/NCSA
// Open Source License
//
// Copyright (c) 2013-2015, Advanced Micro Devices, Inc.
// All rights reserved.
//
// Developed by:
//
//     HSA Team
//
//     Advanced Micro Devices, Inc
//
//     www.amd.com
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal with
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
// of the Software, and to permit persons to whom the Software is furnished to do
// so, subject to the following conditions:
//
//     * Redistributions of source code must retain the above copyright notice,
//       this list of conditions and the following disclaimers.
//
//     * Redistributions in binary form must reproduce the above copyright notice,
//       this list of conditions and the following disclaimers in the
//       documentation and/or other materials provided with the distribution.
//
//     * Neither the names of the LLVM Team, University of Illinois at
//       Urbana-Champaign, nor the names of its contributors may be used to
//       endorse or promote products derived from this Software without specific
//       prior written permission.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
// CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS WITH THE
// SOFTWARE.
//==============================================================================
// This file describes mappings of HDL properties to C++ constants
// These constants are used by autogenerated code
//==============================================================================

#ifndef INCLUDED_HSAIL_INST_PROPS_H
#define INCLUDED_HSAIL_INST_PROPS_H

namespace HSAIL_PROPS
{

//==============================================================================
// Autogenerated ids of Brig properties defined in HDL

#include "HSAILBrigProps_gen.hpp"

inline bool isTypeProp(unsigned propId)
{
    switch(propId)
    {
    case PROP_COORDTYPE:
    case PROP_IMAGETYPE:
    case PROP_SIGNALTYPE:
    case PROP_SOURCETYPE:
    case PROP_TYPE:
        return true;
    default:
        return false;
    }
}

//==============================================================================
// Ids of non-Brig properties defined in HDL

enum // Non-Brig properties
{
    PROP_MINID = 0,
    PROP_NONE  = 0,

    PROP_TYPESIZE = EXT_PROP_MIN_ID,
    PROP_STYPESIZE,

    PROP_D0,
    PROP_D1,

    PROP_S0,
    PROP_S1,
    PROP_S2,
    PROP_S3,
    PROP_S4,

    PROP_OPERAND, //F: should it be removed?

    PROP_MAXID
};

inline bool isOperandProp(unsigned propId)
{
    switch(propId)
    {
    case PROP_D0:
    case PROP_D1:
    case PROP_S0:
    case PROP_S1:
    case PROP_S2:
    case PROP_S3:
    case PROP_S4:
        return true;
    default:
        return false;
    }
}

inline unsigned getOperandIdx(unsigned propId)
{
    switch(propId)
    {
    case PROP_D0:
    case PROP_S0:   return 0;
    case PROP_D1:
    case PROP_S1:   return 1;
    case PROP_S2:   return 2;
    case PROP_S3:   return 3;
    case PROP_S4:   return 4;
    default:
        return (unsigned)-1;
    }
}

inline unsigned getSrcOperandId(unsigned idx)
{
    switch(idx)
    {
    case 0: return PROP_S0;
    case 1: return PROP_S1;
    case 2: return PROP_S2;
    case 3: return PROP_S3;
    case 4: return PROP_S4;
    default:
        return PROP_NONE;
    }
}

//==============================================================================
// Ids of property attributes

enum
{
    ATTR_MINID = 0,

    OPERAND_ATTR_INVALID,
    OPERAND_ATTR_NONE,
    OPERAND_ATTR_DTYPE,
    OPERAND_ATTR_CTYPE,
    OPERAND_ATTR_STYPE,
    OPERAND_ATTR_ITYPE,
    OPERAND_ATTR_B1,
    OPERAND_ATTR_B32,
    OPERAND_ATTR_B64,
    OPERAND_ATTR_U32,
    OPERAND_ATTR_U64,
    OPERAND_ATTR_S32,
    OPERAND_ATTR_S64,
    OPERAND_ATTR_SAMP,
    OPERAND_ATTR_SIG32,
    OPERAND_ATTR_SIG64,
    OPERAND_ATTR_P2U,
    OPERAND_ATTR_SEG,
    OPERAND_ATTR_TSEG,

    ROUND_ATTR_INVALID,
    ROUND_ATTR_NONE,
    ROUND_ATTR_DEFAULT,
    ROUND_ATTR_ZERO,

    WIDTH_ATTR_INVALID,
    WIDTH_ATTR_NONE,
    WIDTH_ATTR_ALL,
    WIDTH_ATTR_WAVESIZE,
    WIDTH_ATTR_1,

    EQCLASS_ATTR_NONE,

    TYPESIZE_ATTR_NONE,
    STYPESIZE_ATTR_NONE,

    ATTR_MAXID
};

//==============================================================================
// Ids of property values

enum
{
    VAL_MINID = 0,

    OPERAND_VAL_NULL,

    OPERAND_VAL_REG,
    OPERAND_VAL_VEC_2,
    OPERAND_VAL_VEC_3,
    OPERAND_VAL_VEC_4,

    OPERAND_VAL_IMM,
    OPERAND_VAL_CNST,
    OPERAND_VAL_LAB,
    OPERAND_VAL_ADDR,
    OPERAND_VAL_FUNC,
    OPERAND_VAL_IFUNC,
    OPERAND_VAL_KERNEL,
    OPERAND_VAL_ARGLIST,
    OPERAND_VAL_JUMPTAB,
    OPERAND_VAL_CALLTAB,
    OPERAND_VAL_SIGNATURE,
    OPERAND_VAL_FBARRIER,

    OPERAND_VAL_IMM0T2,
    OPERAND_VAL_IMM0T3,

    OPERAND_VAL_INVALID,

    TYPESIZE_VAL_ATOMIC,
    TYPESIZE_VAL_MODEL,
    TYPESIZE_VAL_SIGNAL,
    TYPESIZE_VAL_SEG,
    TYPESIZE_VAL_INVALID,

    STYPESIZE_VAL_MODEL   = TYPESIZE_VAL_MODEL,
    STYPESIZE_VAL_SEG     = TYPESIZE_VAL_SEG,
    STYPESIZE_VAL_INVALID = TYPESIZE_VAL_INVALID,

    EQCLASS_VAL_0,
    EQCLASS_VAL_ANY,
    EQCLASS_VAL_INVALID,

    VAL_MAXID
};

//==============================================================================

};

#endif // INCLUDED_HSAIL_INST_PROPS_H

