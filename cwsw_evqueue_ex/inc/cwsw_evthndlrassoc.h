/** @file
 *	@brief	One-sentence short description of file.
 *
 *	\copyright
 *	Copyright (c) 2020 Kevin L. Becker. All rights reserved.
 *
 *	Created on: Mar 9, 2020
 *	@author Kevin L. Becker
 */

#ifndef CWSW_EVTHNDLRASSOC_H
#define CWSW_EVTHNDLRASSOC_H

// ============================================================================
// ----	Include Files ---------------------------------------------------------
// ============================================================================

// ----	System Headers --------------------------

// ----	Project Headers -------------------------

// ----	Module Headers --------------------------
#include "cwsw_evhandler.h"


#ifdef	__cplusplus
extern "C" {
#endif


/** @defgroup tEvQ_EvHndlrAssocTable	tEvQ_EvHndlrAssocTable: Event Handler Association Table component.
 * 	@ingroup tEvQ_QueueCtrlEx
 */

// ============================================================================
// ----	Constants -------------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Type Definitions ------------------------------------------------------
// ============================================================================

/** Event Handler Association table.
 *	@ingroup tEvQ_EvHndlrAssocTable
 */
typedef struct sEvQ_EvHndlrAssocTable {
	ptEvHA_EvHandlerAssoc	pEvtHndlrLut;		//!< Event Handler Association look-up table.
	int32_t					szEvtHandlerTbl;	//!< Number of entries in the Event Handler Association array.
	uint32_t				validity;			//!< On the concern for validating the integrity of the table, provide for a validity signature of some sort.
} tEvQ_EvHndlrAssocTable;

typedef tEvQ_EvHndlrAssocTable * ptEvQ_EvHndlrAssocTable;


// ============================================================================
// ----	Public Variables ------------------------------------------------------
// ============================================================================

// ============================================================================
// ----	Public API ------------------------------------------------------------
// ============================================================================

extern tErrorCodes_EvQ		Cwsw_EvHA__InitEventHandlerTable(ptEvQ_EvHndlrAssocTable EvtHndlrTbl, ptEvHA_EvHandlerAssoc HndlrArray, size_t szHndlrArray);
extern tErrorCodes_EvQ		Cwsw_EvHA__SetEvHandler(ptEvQ_EvHndlrAssocTable pHndlrTbl,	tEvQ_EventID evId, ptEvQ_EvHandlerFunc pHndlrFunc);
extern ptEvQ_EvHandlerFunc	Cwsw_EvHA__GetEvHandler(ptEvQ_EvHndlrAssocTable pHndlrTbl,	tEvQ_EventID evId);

#ifdef	__cplusplus
}
#endif

#endif /* CWSW_EVTHNDLRASSOC_H */
