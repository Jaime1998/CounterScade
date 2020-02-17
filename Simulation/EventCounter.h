/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config C:/Users/USER/Documents/Scade Proyectos/TP2/Simulation/config.txt
** Generation date: 2020-01-10T15:11:30
*************************************************************$ */
#ifndef _EventCounter_H_
#define _EventCounter_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* event/ */ event;
  kcg_bool /* reset/ */ reset;
} inC_EventCounter;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int32 /* count/ */ count;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_int32 /* _L3/ */ _L3;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int32 /* _L2/ */ _L2;
  kcg_int32 /* _L4/ */ _L4;
  kcg_bool /* _L5/ */ _L5;
  kcg_bool /* _L6/ */ _L6;
  kcg_bool /* _L7/ */ _L7;
  kcg_int32 /* _L8/ */ _L8;
  kcg_bool /* _L9/ */ _L9;
  kcg_int32 /* _L10/ */ _L10;
  kcg_int32 /* _L11/ */ _L11;
  kcg_int32 /* _L12/ */ _L12;
  kcg_int32 /* _L13/ */ _L13;
} outC_EventCounter;

/* ===========  node initialization and cycle functions  =========== */
/* EventCounter/ */
extern void EventCounter(inC_EventCounter *inC, outC_EventCounter *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void EventCounter_reset(outC_EventCounter *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void EventCounter_init(outC_EventCounter *outC);
#endif /* KCG_USER_DEFINED_INIT */



#endif /* _EventCounter_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** EventCounter.h
** Generation date: 2020-01-10T15:11:30
*************************************************************$ */

