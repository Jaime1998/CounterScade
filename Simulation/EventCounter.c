/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/TP2/Simulation/config.txt
** Generation date: 2020-01-10T15:11:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EventCounter.h"

/* EventCounter/ */
void EventCounter(inC_EventCounter *inC, outC_EventCounter *outC)
{
  outC->_L13 = kcg_lit_int32(1);
  outC->_L2 = outC->_L3;
  outC->_L12 = outC->_L13 + outC->_L2;
  outC->_L5 = inC->event;
  /* _L11= */
  if (outC->_L5) {
    outC->_L11 = outC->_L12;
  }
  else {
    outC->_L11 = outC->_L2;
  }
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L6 = inC->reset;
  /* _L7= */
  if (outC->init) {
    outC->_L7 = outC->_L9;
  }
  else {
    outC->_L7 = outC->_L6;
  }
  /* _L8= */
  if (outC->_L7) {
    outC->_L8 = outC->_L10;
  }
  else {
    outC->_L8 = outC->_L11;
  }
  outC->_L4 = kcg_lit_int32(0);
  /* _L3= */
  if (outC->init) {
    outC->_L3 = outC->_L4;
  }
  else {
    outC->_L3 = outC->_L8;
  }
  outC->count = outC->_L3;
  outC->init = kcg_false;
}

#ifndef KCG_USER_DEFINED_INIT
void EventCounter_init(outC_EventCounter *outC)
{
  outC->_L13 = kcg_lit_int32(0);
  outC->_L12 = kcg_lit_int32(0);
  outC->_L11 = kcg_lit_int32(0);
  outC->_L10 = kcg_lit_int32(0);
  outC->_L9 = kcg_true;
  outC->_L8 = kcg_lit_int32(0);
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = kcg_true;
  outC->_L4 = kcg_lit_int32(0);
  outC->_L2 = kcg_lit_int32(0);
  outC->_L3 = kcg_lit_int32(0);
  outC->init = kcg_true;
  outC->count = kcg_lit_int32(0);
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void EventCounter_reset(outC_EventCounter *outC)
{
  outC->init = kcg_true;
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */



/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventCounter.c
** Generation date: 2020-01-10T15:11:30
*************************************************************$ */

