/*
* Copyright (c) 2014-2016 IBM Corporation.
* All rights reserved.
*
* Copyright (c) 2017 MCCI Corporation
* All rights reserved.
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions are met:
*  * Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*  * Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
*  * Neither the name of the <organization> nor the
*    names of its contributors may be used to endorse or promote products
*    derived from this software without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
* ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
* DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
* (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
* LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
* SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _lorabase_as923_h_
#define _lorabase_as923_h_

#ifndef _LMIC_CONFIG_PRECONDITIONS_H_
# include "lmic_config_preconditions.h"
#endif

/****************************************************************************\
|
| Basic definitions for AS923 (always in scope)
|
\****************************************************************************/

enum _dr_as923_t {
        AS923_DR_SF12 = 0,
        AS923_DR_SF11,
        AS923_DR_SF10,
        AS923_DR_SF9,
        AS923_DR_SF8,
        AS923_DR_SF7,
        AS923_DR_SF7B,
        AS923_DR_FSK,
        AS923_DR_NONE
};

// Bands:
//  g1 :   1%  16dBm
//                 freq                band     datarates
enum {
        AS923_F1    = 921200000,      // g1   SF7-12
        AS923_F2    = 921400000,      // g1   SF7-12
        AS923_FDOWN = 921400000,      //      (RX2 freq, DR2)
        AS923_FBCN  = 921400000,      //      default BCN, DR3
        AS923_FPING = 921400000,      //      default ping, DR3
};
enum {
        AS923_FREQ_MIN = 92100000,
        AS923_FREQ_MAX = 923000000
};
enum {
        AS923_TX_EIRP_MAX_DBM = 20      // 16 dBm
};
enum { DR_PAGE_AS923 = 0x10 * (LMIC_REGION_as923 - 1) };

enum { AS923_LMIC_REGION_EIRP = 1 };         // region uses EIRP

#endif /* _lorabase_as923_h_ */
