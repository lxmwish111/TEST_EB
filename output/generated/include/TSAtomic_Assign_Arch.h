/**
 * \file
 *
 * \brief Autosar Platforms
 *
 * This file contains the implementation of the Autosar
 * module Platforms.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined TS_ATOMIC_ASSIGN_ARCH_H)
#define TS_ATOMIC_ASSIGN_ARCH_H


/*==================[inclusions]=============================================*/

/*==================[macros]=================================================*/

#if (defined TS_AtomicAssign8) /* guard to prevent double definition */
#error TS_AtomicAssign8 already defined
#endif /* (defined TS_AtomicAssign8) */

/** \brief Assigns the 8 bit entity \p from to \p to in an atomic fashion
 **
 ** This macro assigns the 8 bit entity \p from to \p to in an atomic fashion
 **
 ** The parameters \p from and \p to thus have to be of type \p uint8 or \p sint8.
 **
 ** \param[out] to    8 bit entity which is the destionation of the assignment
 ** \param[in]  from  8 bit entity which is the source of the assignment
 **
 ** \remarks The parameters of this macro may be used in any way, especially
 **   they can be used more than once. They shall not contain side effects. */
#define TS_AtomicAssign8(to, from) \
    ((to) = (from))




#if (defined TS_AtomicAssign16) /* guard to prevent double definition */
#error TS_AtomicAssign16 already defined
#endif /* (defined TS_AtomicAssign16) */

/** \brief Assigns the 16 bit entity \p from to \p to in an atomic fashion
 **
 ** This macro assigns the 16 bit entity \p from to \p to in an atomic fashion
 **
 ** The parameters \p from and \p to thus have to be of type \p uint16 or \p sint16.
 **
 ** \param[out] to    16 bit entity which is the destionation of the assignment
 ** \param[in]  from  16 bit entity which is the source of the assignment
 **
 ** \remarks The parameters of this macro may be used in any way, especially
 **   they can be used more than once. They shall not contain side effects. */
#define TS_AtomicAssign16(to, from) \
    ((to) = (from))




#if (defined TS_AtomicAssign32) /* guard to prevent double definition */
#error TS_AtomicAssign32 already defined
#endif /* (defined TS_AtomicAssign32) */

/** \brief Assigns the 32 bit entity \p from to \p to in an atomic fashion
 **
 ** This macro assigns the 32 bit entity \p from to \p to in an atomic fashion
 **
 ** The parameters \p from and \p to thus have to be of type \p uint32 or \p sint32.
 **
 ** \param[out] to    32 bit entity which is the destionation of the assignment
 ** \param[in]  from  32 bit entity which is the source of the assignment
 **
 ** \remarks The parameters of this macro may be used in any way, especially
 **   they can be used more than once. They shall not contain side effects. */
#define TS_AtomicAssign32(to, from) \
    ((to) = (from))


/*==================[type definitions]=======================================*/

/*==================[external function declarations]=========================*/

/*==================[internal function declarations]=========================*/

/*==================[external constants]=====================================*/

/*==================[internal constants]=====================================*/

/*==================[external data]==========================================*/

/*==================[internal data]==========================================*/

/*==================[external function definitions]==========================*/

/*==================[internal function definitions]==========================*/

#endif /* if !defined( TS_ATOMIC_ASSIGN_ARCH_H ) */
/*==================[end of file]============================================*/
