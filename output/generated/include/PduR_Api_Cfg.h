/* --------{ EB Automotive C Source File }-------- */ 
#if (!defined PDUR_API_CFG_H)
#define PDUR_API_CFG_H

/*==================[includes]==============================================*/

/*==================[macros]================================================*/

/* Routing Path: Pdu_Rx */
#define PDURS_Pdu_Rx 0U /* CanIf */
#define PDURD_Pdu_Rx 0U /* Com */

/* Routing Path: Pdu_Tx */
#define PDURS_Pdu_Tx 0U /* Com */
#define PDURD_Pdu_Tx 0U /* CanIf */

/* Routing Path: DBG_RX_PDU */
#define PDURS_DBG_RX_PDU 1U /* CanIf */
#define PDURD_DBG_RX_PDU 0U /* Dbg */

/* Routing Path: DBG_TX_PDU */
#define PDURS_DBG_TX_PDU 0U /* Dbg */
#define PDURD_DBG_TX_PDU 1U /* CanIf */

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
#endif /* if !defined( PDUR_API_CFG_H ) */
