/**
 * \file
 *
 * \brief Autosar ApplTemplates
 *
 * This file contains the implementation of the Autosar
 * module ApplTemplates.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

#include <TSAutosar.h>
#include <MyLed.h>
#include <Dio.h>

boolean myled_switch=TRUE;
uint8 myled_counter1s = 99u;  /* Counts from 0..99 for scheduling        */

/* Call function every 10 ms so that we will get a Led cycle of 1 s */
void MyLed_MainFunction(void)
{
   /* Trigger MY_LED_CYCLIC every 1 s */
   if (myled_counter1s == (uint8)99u)
   {
      if (myled_switch == TRUE)
      {
         Dio_WriteChannel(MY_LED_CYCLIC, MY_LED_ON);
         myled_switch = FALSE;
      }
      else
      {
         Dio_WriteChannel(MY_LED_CYCLIC, MY_LED_OFF);
         myled_switch = TRUE;
      }
   }

   if (myled_counter1s > (uint8)0u)
   {
      myled_counter1s--;
   }
   else
   {
      myled_counter1s = (uint8)99u;
   }

   return;
}
