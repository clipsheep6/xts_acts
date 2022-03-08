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
// acosd(+-1) is 0,pi
TT(RN,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RN,                 -0x1p+0,    0x1.921fb54442d18p+1,  -0x1.1a6264p-2, INEXACT)
// acosd(+-(1 - tiny)) :=:  sqrTT(2*tiny) or pi-sqrTT(2*tiny)
TT(RN,    0x1.fffffffffffffp-1,                 0x1p-26,  -0x1.555556p-5, INEXACT)
TT(RZ,    0x1.fffffffffffffp-1,                 0x1p-26,  -0x1.555556p-5, INEXACT)
TT(RU,    0x1.fffffffffffffp-1,   0x1.0000000000001p-26,   0x1.eaaaaap-1, INEXACT)
TT(RD,    0x1.fffffffffffffp-1,                 0x1p-26,  -0x1.555556p-5, INEXACT)
TT(RN,   -0x1.fffffffffffffp-1,    0x1.921fb52442d18p+1,  -0x1.1a6264p-2, INEXACT)
TT(RZ,   -0x1.fffffffffffffp-1,    0x1.921fb52442d18p+1,  -0x1.1a6264p-2, INEXACT)
TT(RU,   -0x1.fffffffffffffp-1,    0x1.921fb52442d19p+1,   0x1.72cecep-1, INEXACT)
TT(RD,   -0x1.fffffffffffffp-1,    0x1.921fb52442d18p+1,  -0x1.1a6264p-2, INEXACT)
// acosd(tiny) = pi/2-tiny
TT(RN,                 0x1p-44,    0x1.921fb54442c18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,                -0x1p-44,    0x1.921fb54442e18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,                 0x1p-67,    0x1.921fb54442d18p+0,  -0x1.1a5a64p-2, INEXACT)
TT(RN,                -0x1p-67,    0x1.921fb54442d18p+0,  -0x1.1a6a64p-2, INEXACT)
TT(RN,               0x1p-1022,    0x1.921fb54442d18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,              -0x1p-1022,    0x1.921fb54442d18p+0,  -0x1.1a6264p-2, INEXACT)
TT(RN,                  0x0p+0,    0x1.921fb54442d18p+0,  -0x1.1a6264p-2, INEXACT)
// some random number between -1 and 1
TT(RN,   -0x1.13284b2b5006dp-2,    0x1.d7c4e61020905p+0,  -0x1.25171ap-2, INEXACT)
TT(RN,    0x1.6ca8dfb825911p-1,    0x1.8e6756e27c366p-1,   0x1.4928b8p-4, INEXACT)
TT(RN,    0x1.c2ca609de7505p-1,     0x1.f9d748eaf956p-2,   0x1.c4a6d2p-4, INEXACT)
TT(RN,   -0x1.55f11fba96889p-1,    0x1.26abdc68d07aap+1,  -0x1.6d356ep-4, INEXACT)
TT(RN,   -0x1.15679e27084ddp-2,    0x1.d85a44ea44fe4p+0,   0x1.7c88dep-4, INEXACT)
TT(RN,   -0x1.41e131b093c41p-5,    0x1.9c2f688eee8abp+0,   0x1.6e23dap-3, INEXACT)
TT(RN,    0x1.281b0d18455f5p-1,    0x1.e881b1d4eb2a1p-1,  -0x1.fb853ep-2, INEXACT)
TT(RN,    0x1.b5ce34a51b239p-1,    0x1.1713f567a87efp-1,  -0x1.bf1bf6p-2, INEXACT)
TT(RN,   -0x1.583481079de4dp-3,    0x1.bd5acbe8fcc59p+0,  -0x1.5e7314p-5, INEXACT)
TT(RN,   -0x1.ea8223103b871p-1,    0x1.6ce7d66f628e5p+1,   0x1.b5a774p-6, INEXACT)
TT(RZ,   -0x1.13284b2b5006dp-2,    0x1.d7c4e61020905p+0,  -0x1.25171ap-2, INEXACT)
TT(RZ,    0x1.6ca8dfb825911p-1,    0x1.8e6756e27c365p-1,  -0x1.d6daeap-1, INEXACT)
TT(RZ,    0x1.c2ca609de7505p-1,    0x1.f9d748eaf955fp-2,  -0x1.c76b26p-1, INEXACT)
TT(RZ,   -0x1.55f11fba96889p-1,    0x1.26abdc68d07aap+1,  -0x1.6d356ep-4, INEXACT)
TT(RZ,   -0x1.15679e27084ddp-2,    0x1.d85a44ea44fe3p+0,  -0x1.d06ee4p-1, INEXACT)
TT(RZ,   -0x1.41e131b093c41p-5,    0x1.9c2f688eee8aap+0,  -0x1.a4770ap-1, INEXACT)
TT(RZ,    0x1.281b0d18455f5p-1,    0x1.e881b1d4eb2a1p-1,  -0x1.fb853ep-2, INEXACT)
TT(RZ,    0x1.b5ce34a51b239p-1,    0x1.1713f567a87efp-1,  -0x1.bf1bf6p-2, INEXACT)
TT(RZ,   -0x1.583481079de4dp-3,    0x1.bd5acbe8fcc59p+0,  -0x1.5e7314p-5, INEXACT)
TT(RZ,   -0x1.ea8223103b871p-1,    0x1.6ce7d66f628e4p+1,  -0x1.f252c4p-1, INEXACT)
TT(RU,   -0x1.13284b2b5006dp-2,    0x1.d7c4e61020906p+0,   0x1.6d7472p-1, INEXACT)
TT(RU,    0x1.6ca8dfb825911p-1,    0x1.8e6756e27c366p-1,   0x1.4928b8p-4, INEXACT)
TT(RU,    0x1.c2ca609de7505p-1,     0x1.f9d748eaf956p-2,   0x1.c4a6d2p-4, INEXACT)
TT(RU,   -0x1.55f11fba96889p-1,    0x1.26abdc68d07abp+1,   0x1.d25952p-1, INEXACT)
TT(RU,   -0x1.15679e27084ddp-2,    0x1.d85a44ea44fe4p+0,   0x1.7c88dep-4, INEXACT)
TT(RU,   -0x1.41e131b093c41p-5,    0x1.9c2f688eee8abp+0,   0x1.6e23dap-3, INEXACT)
TT(RU,    0x1.281b0d18455f5p-1,    0x1.e881b1d4eb2a2p-1,    0x1.023d6p-1, INEXACT)
TT(RU,    0x1.b5ce34a51b239p-1,     0x1.1713f567a87fp-1,   0x1.207206p-1, INEXACT)
TT(RU,   -0x1.583481079de4dp-3,    0x1.bd5acbe8fcc5ap+0,   0x1.ea18cep-1, INEXACT)
TT(RU,   -0x1.ea8223103b871p-1,    0x1.6ce7d66f628e5p+1,   0x1.b5a774p-6, INEXACT)
TT(RD,   -0x1.13284b2b5006dp-2,    0x1.d7c4e61020905p+0,  -0x1.25171ap-2, INEXACT)
TT(RD,    0x1.6ca8dfb825911p-1,    0x1.8e6756e27c365p-1,  -0x1.d6daeap-1, INEXACT)
TT(RD,    0x1.c2ca609de7505p-1,    0x1.f9d748eaf955fp-2,  -0x1.c76b26p-1, INEXACT)
TT(RD,   -0x1.55f11fba96889p-1,    0x1.26abdc68d07aap+1,  -0x1.6d356ep-4, INEXACT)
TT(RD,   -0x1.15679e27084ddp-2,    0x1.d85a44ea44fe3p+0,  -0x1.d06ee4p-1, INEXACT)
TT(RD,   -0x1.41e131b093c41p-5,    0x1.9c2f688eee8aap+0,  -0x1.a4770ap-1, INEXACT)
TT(RD,    0x1.281b0d18455f5p-1,    0x1.e881b1d4eb2a1p-1,  -0x1.fb853ep-2, INEXACT)
TT(RD,    0x1.b5ce34a51b239p-1,    0x1.1713f567a87efp-1,  -0x1.bf1bf6p-2, INEXACT)
TT(RD,   -0x1.583481079de4dp-3,    0x1.bd5acbe8fcc59p+0,  -0x1.5e7314p-5, INEXACT)
TT(RD,   -0x1.ea8223103b871p-1,    0x1.6ce7d66f628e4p+1,  -0x1.f252c4p-1, INEXACT)
// exception cases
TT(RN,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RZ,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RU,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RD,    0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,                  0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RN,   0x1.0000000000001p+16,                     NAN,          0x0p+0, INVALID)
TT(RN,  -0x1.fffffffffffffp+16,                     NAN,          0x0p+0, INVALID)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RN,                     NAN,                     NAN,          0x0p+0, 0)
TT(RZ,                     NAN,                     NAN,          0x0p+0, 0)
TT(RU,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD,                     NAN,                     NAN,          0x0p+0, 0)
TT(RZ,                     NAN,                     NAN,          0x0p+0, 0)
TT(RU,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD,                     NAN,                     NAN,          0x0p+0, 0)
TT(RD,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RD,    0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RD,                  0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RD,                  0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RD,               0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RD,               0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RD, 0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RD, 0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RD,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RD,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RD,   -0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RD,                 -0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RD,                 -0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RD,              -0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RD,              -0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RD,-0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RD,-0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RD,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RD,     0x1.ffffffffffffp-1,                 0x1p-24,  -0x1.555556p-1, INEXACT)
TT(RN,     0x1.ffffffffffffp-1,   0x1.0000000000001p-24,   0x1.555556p-2, INEXACT)
TT(RN,    0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,                  0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RN,               0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RN,               0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RN, 0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RN, 0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RN,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RN,   -0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RN,                 -0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RN,                 -0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RN,              -0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RN,              -0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RN,-0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RN,-0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RN,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RU,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RU,    0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RU,                  0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RU,                  0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RU,               0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RU,               0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RU, 0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RU, 0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RU,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RU,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RU,   -0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RU,                 -0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RU,                 -0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RU,              -0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RU,              -0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RU,-0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RU,-0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RU,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RU,    0x1.fffffffffffe7p-1,   0x1.4000000000002p-24,   0x1.655556p-1, INEXACT)
TT(RU,     0x1.ffffffffffffp-1,   0x1.0000000000001p-24,   0x1.555556p-2, INEXACT)
TT(RZ,                  0x1p+0,                  0x0p+0,          0x0p+0, 0)
TT(RZ,    0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RZ,                  0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RZ,                  0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RZ,               0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RZ,               0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ, 0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ, 0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ,                     inf,                     NAN,          0x0p+0, INVALID)
TT(RZ,   -0x1.0000000000001p+0,                     NAN,          0x0p+0, INVALID)
TT(RZ,   -0x1.0000000000002p+0,                     NAN,          0x0p+0, INVALID)
TT(RZ,                 -0x1p+1,                     NAN,          0x0p+0, INVALID)
TT(RZ,                 -0x1p+2,                     NAN,          0x0p+0, INVALID)
TT(RZ,              -0x1p+1022,                     NAN,          0x0p+0, INVALID)
TT(RZ,              -0x1p+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ,-0x1.ffffffffffffep+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ,-0x1.fffffffffffffp+1023,                     NAN,          0x0p+0, INVALID)
TT(RZ,                    -inf,                     NAN,          0x0p+0, INVALID)
TT(RZ,    0x1.fffffffffffe7p-1,   0x1.4000000000001p-24,  -0x1.355556p-2, INEXACT)
TT(RZ,     0x1.ffffffffffffp-1,                 0x1p-24,  -0x1.555556p-1, INEXACT)


