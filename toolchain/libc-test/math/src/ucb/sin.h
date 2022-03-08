// Copyright (C) 1988-1994 Sun Microsystems, Inc. 2550 Garcia Avenue
// Mountain View, California  94043 All rights reserved.
//
// Any person is hereby authorized to download, copy, use, create bug fixes,
// and distribute, subject to the following conditions:
//
//  1.  the software may not be redistributed for a fee except as
//      reasonable to cover media costs;
//  2.  any copy of the software must include this notice, as well as
//      any other embedded copyright notices; and
//  3.  any distribution of this software or derivative works thereof
//      must comply with all applicable U.S. export control laws.
//
// THE SOFTWARE IS MADE AVAILABLE "AS IS" AND WITHOUT EXPRESS OR IMPLIED
// WARRANTY OF ANY KIND, INCLUDING BUT NOT LIMITED TO THE IMPLIED
// WARRANTIES OF DESIGN, MERCHANTIBILITY, FITNESS FOR A PARTICULAR
// PURPOSE, NON-INFRINGEMENT, PERFORMANCE OR CONFORMANCE TO
// SPECIFICATIONS.
//
// BY DOWNLOADING AND/OR USING THIS SOFTWARE, THE USER WAIVES ALL CLAIMS
// AGAINST SUN MICROSYSTEMS, INC. AND ITS AFFILIATED COMPANIES IN ANY
// JURISDICTION, INCLUDING BUT NOT LIMITED TO CLAIMS FOR DAMAGES OR
// EQUITABLE RELIEF BASED ON LOSS OF DATA, AND SPECIFICALLY WAIVES EVEN
// UNKNOWN OR UNANTICIPATED CLAIMS OR LOSSES, PRESENT AND FUTURE.
//
// IN NO EVENT WILL SUN MICROSYSTEMS, INC. OR ANY OF ITS AFFILIATED
// COMPANIES BE LIABLE FOR ANY LOST REVENUE OR PROFITS OR OTHER SPECIAL,
// INDIRECT AND CONSEQUENTIAL DAMAGES, EVEN IF IT HAS BEEN ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGES.
//
// This file is provided with no support and without any obligation on the
// part of Sun Microsystems, Inc. ("Sun") or any of its affiliated
// companies to assist in its use, correction, modification or
// enhancement.  Nevertheless, and without creating any obligation on its
// part, Sun welcomes your comments concerning the software and requests
// that they be sent to fdlibm-comments@sunpro.sun.com.
// sind(+-max)
// sind(tiny) is tiny
TT(RN,                 0x1p-30,                 0x1p-30,  0x1.555556p-11, INEXACT)
TT(RN,                -0x1p-30,                -0x1p-30, -0x1.555556p-11, INEXACT)
TT(RN,               0x1p-1022,               0x1p-1022,          0x0p+0, INEXACT)
TT(RN,              -0x1p-1022,              -0x1p-1022,          0x0p+0, INEXACT)
TT(RN,               0x1p-1074,               0x1p-1074,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,              -0x1p-1074,              -0x1p-1074,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                 -0x0p+0,                 -0x0p+0,          0x0p+0, 0)
TT(RZ,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
TT(RZ,                 -0x0p+0,                 -0x0p+0,          0x0p+0, 0)
TT(RU,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
TT(RU,                 -0x0p+0,                 -0x0p+0,          0x0p+0, 0)
TT(RD,                  0x0p+0,                  0x0p+0,          0x0p+0, 0)
TT(RD,                 -0x0p+0,                 -0x0p+0,          0x0p+0, 0)
// sind(NAN or inf) is NAN
TT(RN,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD, 0x1.0000000000001p-1022,               0x1p-1022,         -0x1p+0, INEXACT)
TT(RD, 0x1.0000000000002p-1022, 0x1.0000000000001p-1022,         -0x1p+0, INEXACT)
TT(RD,               0x1p-1021, 0x1.fffffffffffffp-1022,         -0x1p+0, INEXACT)
TT(RD,               0x1p-1020, 0x1.fffffffffffffp-1021,         -0x1p+0, INEXACT)
TT(RD,-0x1.0000000000001p-1022,-0x1.0000000000001p-1022,          0x0p+0, INEXACT)
TT(RD,-0x1.0000000000002p-1022,-0x1.0000000000002p-1022,          0x0p+0, INEXACT)
TT(RD,-0x1.ffffffffffffbp-1022,-0x1.ffffffffffffbp-1022,          0x0p+0, INEXACT)
TT(RD,              -0x1p-1021,              -0x1p-1021,          0x0p+0, INEXACT)
TT(RD,-0x1.0000000000003p-1021,-0x1.0000000000003p-1021,          0x0p+0, INEXACT)
TT(RD,              -0x1p-1020,              -0x1p-1020,          0x0p+0, INEXACT)
TT(RD,              -0x1.8p-27,              -0x1.8p-27,       -0x1.2p-3, INEXACT)
TT(RD,                -0x1p-26,                -0x1p-26,  -0x1.555556p-3, INEXACT)
TT(RD,               0x1p-1074,                  0x0p+0,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD,               0x1p-1073,               0x1p-1074,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD,               0x1p-1024, 0x1.ffffffffffff8p-1025,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD,               0x1p-1023, 0x1.ffffffffffffcp-1024,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD, 0x1.ffffffffffffcp-1023, 0x1.ffffffffffffap-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffcp-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD,               0x1p-1022, 0x1.ffffffffffffep-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RD,              -0x1p-1074,              -0x1p-1074,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,              -0x1p-1073,              -0x1p-1073,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,            -0x1.2p-1071,            -0x1.2p-1071,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,              -0x1p-1024,              -0x1p-1024,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,              -0x1p-1023,              -0x1p-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,-0x1.ffffffffffffcp-1023,-0x1.ffffffffffffcp-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,-0x1.ffffffffffffep-1023,-0x1.ffffffffffffep-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RD,              -0x1p-1022,              -0x1p-1022,          0x0p+0, INEXACT)
TT(RD,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RD,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RD,               0x1.8p-27,   0x1.7ffffffffffffp-27,      -0x1.b8p-1, INEXACT)
TT(RD,                 0x1p-26,   0x1.fffffffffffffp-27,  -0x1.555556p-1, INEXACT)
TT(RN, 0x1.0000000000001p-1022, 0x1.0000000000001p-1022,          0x0p+0, INEXACT)
TT(RN, 0x1.0000000000002p-1022, 0x1.0000000000002p-1022,          0x0p+0, INEXACT)
TT(RN, 0x1.ffffffffffffbp-1022, 0x1.ffffffffffffbp-1022,          0x0p+0, INEXACT)
TT(RN,               0x1p-1021,               0x1p-1021,          0x0p+0, INEXACT)
TT(RN, 0x1.0000000000003p-1021, 0x1.0000000000003p-1021,          0x0p+0, INEXACT)
TT(RN,               0x1p-1020,               0x1p-1020,          0x0p+0, INEXACT)
TT(RN,               0x1.8p-27,               0x1.8p-27,        0x1.2p-3, INEXACT)
TT(RN,                 0x1p-26,                 0x1p-26,   0x1.555556p-3, INEXACT)
TT(RN,-0x1.0000000000001p-1022,-0x1.0000000000001p-1022,          0x0p+0, INEXACT)
TT(RN,-0x1.0000000000002p-1022,-0x1.0000000000002p-1022,          0x0p+0, INEXACT)
TT(RN,-0x1.ffffffffffffbp-1022,-0x1.ffffffffffffbp-1022,          0x0p+0, INEXACT)
TT(RN,              -0x1p-1021,              -0x1p-1021,          0x0p+0, INEXACT)
TT(RN,-0x1.0000000000003p-1021,-0x1.0000000000003p-1021,          0x0p+0, INEXACT)
TT(RN,              -0x1p-1020,              -0x1p-1020,          0x0p+0, INEXACT)
TT(RN,              -0x1.8p-27,              -0x1.8p-27,       -0x1.2p-3, INEXACT)
TT(RN,                -0x1p-26,                -0x1p-26,  -0x1.555556p-3, INEXACT)
TT(RN,               0x1p-1073,               0x1p-1073,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,             0x1.2p-1071,             0x1.2p-1071,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,               0x1p-1024,               0x1p-1024,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,               0x1p-1023,               0x1p-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN, 0x1.ffffffffffffcp-1023, 0x1.ffffffffffffcp-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,              -0x1p-1073,              -0x1p-1073,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,            -0x1.2p-1071,            -0x1.2p-1071,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,              -0x1p-1024,              -0x1p-1024,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,              -0x1p-1023,              -0x1p-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,-0x1.ffffffffffffcp-1023,-0x1.ffffffffffffcp-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RN,-0x1.ffffffffffffep-1023,-0x1.ffffffffffffep-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU, 0x1.0000000000001p-1022, 0x1.0000000000001p-1022,          0x0p+0, INEXACT)
TT(RU, 0x1.0000000000002p-1022, 0x1.0000000000002p-1022,          0x0p+0, INEXACT)
TT(RU, 0x1.ffffffffffffbp-1022, 0x1.ffffffffffffbp-1022,          0x0p+0, INEXACT)
TT(RU,               0x1p-1021,               0x1p-1021,          0x0p+0, INEXACT)
TT(RU, 0x1.0000000000003p-1021, 0x1.0000000000003p-1021,          0x0p+0, INEXACT)
TT(RU,               0x1p-1020,               0x1p-1020,          0x0p+0, INEXACT)
TT(RU,               0x1.8p-27,               0x1.8p-27,        0x1.2p-3, INEXACT)
TT(RU,                 0x1p-26,                 0x1p-26,   0x1.555556p-3, INEXACT)
TT(RU,-0x1.0000000000001p-1022,              -0x1p-1022,          0x1p+0, INEXACT)
TT(RU,-0x1.0000000000002p-1022,-0x1.0000000000001p-1022,          0x1p+0, INEXACT)
TT(RU,              -0x1p-1021,-0x1.fffffffffffffp-1022,          0x1p+0, INEXACT)
TT(RU,              -0x1p-1020,-0x1.fffffffffffffp-1021,          0x1p+0, INEXACT)
TT(RU,               0x1p-1074,               0x1p-1074,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU,               0x1p-1073,               0x1p-1073,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU,             0x1.2p-1071,             0x1.2p-1071,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU,               0x1p-1024,               0x1p-1024,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU,               0x1p-1023,               0x1p-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU, 0x1.ffffffffffffcp-1023, 0x1.ffffffffffffcp-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffep-1023,          0x0p+0, INEXACT|UNDERFLOW)
TT(RU,               0x1p-1022,               0x1p-1022,          0x0p+0, INEXACT)
TT(RU,              -0x1p-1074,                 -0x0p+0,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,              -0x1p-1073,              -0x1p-1074,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,              -0x1p-1024,-0x1.ffffffffffff8p-1025,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,              -0x1p-1023,-0x1.ffffffffffffcp-1024,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,-0x1.ffffffffffffcp-1023,-0x1.ffffffffffffap-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,-0x1.ffffffffffffep-1023,-0x1.ffffffffffffcp-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,              -0x1p-1022,-0x1.ffffffffffffep-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RU,                     NAN,                     NAN,          0x0p+0, 0)
TT(RU,                     NAN,                     NAN,          0x0p+0, 0)
TT(RU,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RU,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RU,              -0x1.8p-27,  -0x1.7ffffffffffffp-27,       0x1.b8p-1, INEXACT)
TT(RU,                -0x1p-26,  -0x1.fffffffffffffp-27,   0x1.555556p-1, INEXACT)
TT(RZ, 0x1.0000000000001p-1022,               0x1p-1022,         -0x1p+0, INEXACT)
TT(RZ, 0x1.0000000000002p-1022, 0x1.0000000000001p-1022,         -0x1p+0, INEXACT)
TT(RZ,               0x1p-1021, 0x1.fffffffffffffp-1022,         -0x1p+0, INEXACT)
TT(RZ,               0x1p-1020, 0x1.fffffffffffffp-1021,         -0x1p+0, INEXACT)
TT(RZ,-0x1.0000000000001p-1022,              -0x1p-1022,          0x1p+0, INEXACT)
TT(RZ,-0x1.0000000000002p-1022,-0x1.0000000000001p-1022,          0x1p+0, INEXACT)
TT(RZ,              -0x1p-1021,-0x1.fffffffffffffp-1022,          0x1p+0, INEXACT)
TT(RZ,              -0x1p-1020,-0x1.fffffffffffffp-1021,          0x1p+0, INEXACT)
TT(RZ,               0x1p-1074,                  0x0p+0,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,               0x1p-1073,               0x1p-1074,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,               0x1p-1024, 0x1.ffffffffffff8p-1025,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,               0x1p-1023, 0x1.ffffffffffffcp-1024,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ, 0x1.ffffffffffffcp-1023, 0x1.ffffffffffffap-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ, 0x1.ffffffffffffep-1023, 0x1.ffffffffffffcp-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,               0x1p-1022, 0x1.ffffffffffffep-1023,         -0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,              -0x1p-1074,                 -0x0p+0,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,              -0x1p-1073,              -0x1p-1074,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,              -0x1p-1024,-0x1.ffffffffffff8p-1025,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,              -0x1p-1023,-0x1.ffffffffffffcp-1024,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,-0x1.ffffffffffffcp-1023,-0x1.ffffffffffffap-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,-0x1.ffffffffffffep-1023,-0x1.ffffffffffffcp-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,              -0x1p-1022,-0x1.ffffffffffffep-1023,          0x1p+0, INEXACT|UNDERFLOW)
TT(RZ,                     NAN,                     NAN,          0x0p+0, 0)
TT(RZ,                     NAN,                     NAN,          0x0p+0, 0)
TT(RZ,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RZ,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RZ,               0x1.8p-27,   0x1.7ffffffffffffp-27,      -0x1.b8p-1, INEXACT)
TT(RZ,                 0x1p-26,   0x1.fffffffffffffp-27,  -0x1.555556p-1, INEXACT)
TT(RZ,              -0x1.8p-27,  -0x1.7ffffffffffffp-27,       0x1.b8p-1, INEXACT)
TT(RZ,                -0x1p-26,  -0x1.fffffffffffffp-27,   0x1.555556p-1, INEXACT)


