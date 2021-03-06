/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/api/expr/v1alpha1/eval.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg_internal.h"
#include "google/api/expr/v1alpha1/eval.upb.h"
#include "google/api/expr/v1alpha1/value.upb.h"
#include "google/rpc/status.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout_sub google_api_expr_v1alpha1_EvalState_submsgs[2] = {
  {.submsg = &google_api_expr_v1alpha1_EvalState_Result_msginit},
  {.submsg = &google_api_expr_v1alpha1_ExprValue_msginit},
};

static const upb_msglayout_field google_api_expr_v1alpha1_EvalState__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 1, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(4, 8), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout google_api_expr_v1alpha1_EvalState_msginit = {
  &google_api_expr_v1alpha1_EvalState_submsgs[0],
  &google_api_expr_v1alpha1_EvalState__fields[0],
  UPB_SIZE(8, 16), 2, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_field google_api_expr_v1alpha1_EvalState_Result__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 3, _UPB_MODE_SCALAR | (_UPB_REP_8BYTE << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(8, 8), 0, 0, 3, _UPB_MODE_SCALAR | (_UPB_REP_8BYTE << _UPB_REP_SHIFT)},
};

const upb_msglayout google_api_expr_v1alpha1_EvalState_Result_msginit = {
  NULL,
  &google_api_expr_v1alpha1_EvalState_Result__fields[0],
  UPB_SIZE(16, 16), 2, _UPB_MSGEXT_NONE, 2, 255,
};

static const upb_msglayout_sub google_api_expr_v1alpha1_ExprValue_submsgs[3] = {
  {.submsg = &google_api_expr_v1alpha1_ErrorSet_msginit},
  {.submsg = &google_api_expr_v1alpha1_UnknownSet_msginit},
  {.submsg = &google_api_expr_v1alpha1_Value_msginit},
};

static const upb_msglayout_field google_api_expr_v1alpha1_ExprValue__fields[3] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, _UPB_MODE_SCALAR | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout google_api_expr_v1alpha1_ExprValue_msginit = {
  &google_api_expr_v1alpha1_ExprValue_submsgs[0],
  &google_api_expr_v1alpha1_ExprValue__fields[0],
  UPB_SIZE(8, 16), 3, _UPB_MSGEXT_NONE, 3, 255,
};

static const upb_msglayout_sub google_api_expr_v1alpha1_ErrorSet_submsgs[1] = {
  {.submsg = &google_rpc_Status_msginit},
};

static const upb_msglayout_field google_api_expr_v1alpha1_ErrorSet__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 11, _UPB_MODE_ARRAY | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout google_api_expr_v1alpha1_ErrorSet_msginit = {
  &google_api_expr_v1alpha1_ErrorSet_submsgs[0],
  &google_api_expr_v1alpha1_ErrorSet__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout_field google_api_expr_v1alpha1_UnknownSet__fields[1] = {
  {1, UPB_SIZE(0, 0), 0, 0, 3, _UPB_MODE_ARRAY | _UPB_MODE_IS_PACKED | (_UPB_REP_PTR << _UPB_REP_SHIFT)},
};

const upb_msglayout google_api_expr_v1alpha1_UnknownSet_msginit = {
  NULL,
  &google_api_expr_v1alpha1_UnknownSet__fields[0],
  UPB_SIZE(8, 8), 1, _UPB_MSGEXT_NONE, 1, 255,
};

static const upb_msglayout *messages_layout[5] = {
  &google_api_expr_v1alpha1_EvalState_msginit,
  &google_api_expr_v1alpha1_EvalState_Result_msginit,
  &google_api_expr_v1alpha1_ExprValue_msginit,
  &google_api_expr_v1alpha1_ErrorSet_msginit,
  &google_api_expr_v1alpha1_UnknownSet_msginit,
};

const upb_msglayout_file google_api_expr_v1alpha1_eval_proto_upb_file_layout = {
  messages_layout,
  NULL,
  5,
  0,
};

#include "upb/port_undef.inc"

