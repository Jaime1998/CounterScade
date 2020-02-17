/* TP2_mapping.c */

#include "TP2_type.h"
#include "TP2_interface.h"
#include "TP2_mapping.h"

#include "SmuTypes.h"
#include "SmuMapping.h"

#include "kcg_sensors.h"

/* mapping declaration */

#define DECL_ITER(name) extern const MappingIterator iter_##name


#define DECL_SCOPE(name, count) extern const MappingEntry name##_entries[count]; extern const MappingScope name

DECL_SCOPE(scope_1, 15);
DECL_SCOPE(scope_0, 1);

/* clock definition */


/* mapping definition */


const MappingEntry scope_1_entries[15] = {
    /* 0 */ { MAP_OUTPUT, "count", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx.count, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 0 },
    /* 1 */ { MAP_INPUT, "event", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.event, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1 },
    /* 2 */ { MAP_INPUT, "reset", NULL, sizeof(kcg_bool), (size_t)&inputs_ctx.reset, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2 },
    /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L2, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 3 },
    /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L3, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 4 },
    /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L4, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 5 },
    /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6 },
    /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7 },
    /* 8 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L7, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8 },
    /* 9 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L8, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 9 },
    /* 10 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10 },
    /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L10, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 11 },
    /* 12 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L11, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 12 },
    /* 13 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L12, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 13 },
    /* 14 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int32), (size_t)&outputs_ctx._L13, &_Type_kcg_int32_Utils, NULL, NULL, NULL, 1, 14 }
};
const MappingScope scope_1 = {
    "EventCounter/ EventCounter",
    scope_1_entries, 15
};

const MappingEntry scope_0_entries[1] = {
    /* 0 */ { MAP_ROOT, "EventCounter", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0 }
};
const MappingScope scope_0 = {
    "",
    scope_0_entries, 1
};

/* entry point */
const MappingScope* pTop = &scope_0;
