/* Generated code for Python module 'pandas.core.missing'
 * created by Nuitka version 0.6.16
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pandas$core$missing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$missing;
PyDictObject *moduledict_pandas$core$missing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[329];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.missing"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pandas$core$missing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pandas.core.missing");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9950deb7a3afa5372fb54e4b9953135d;
static PyCodeObject *codeobj_8a538f77904a6426902f00397732322b;
static PyCodeObject *codeobj_0b73a8f75768b3022cabec135065d776;
static PyCodeObject *codeobj_3cb7d144f883c00f36c0ad574cd095f8;
static PyCodeObject *codeobj_c4c83a3e5d7805c1d7465f2986cef087;
static PyCodeObject *codeobj_3a600349961d3d17149dce7cee72cc71;
static PyCodeObject *codeobj_4aa4eaec884c199228ae8f4794af4ef7;
static PyCodeObject *codeobj_20660df29f5b72efb21702b1276df9aa;
static PyCodeObject *codeobj_6283547709c5128ab98c53d250bf8fbf;
static PyCodeObject *codeobj_0f1c6e0c3a024362d64f9c87a21aef7d;
static PyCodeObject *codeobj_599b4d37f8ef02956c43766c0eaa0654;
static PyCodeObject *codeobj_7179385a5a558b7cce7f39d872b182d2;
static PyCodeObject *codeobj_3eb442ce731d1f9c600f01cd625cb77e;
static PyCodeObject *codeobj_52050ad3fab795e9530ef94eed88a4d7;
static PyCodeObject *codeobj_79e5ee2734aa28f61acd1ff8e4346b4a;
static PyCodeObject *codeobj_9efc12c8316a154384819e07dcd05c63;
static PyCodeObject *codeobj_77c23a9c190758d79fa0fd87ac1f3cff;
static PyCodeObject *codeobj_0d88539d8237ab96b08e4150e15370c6;
static PyCodeObject *codeobj_28994b15360adb2fa92a028fcbf896ad;
static PyCodeObject *codeobj_a25e3031a5add7f40aa9ee45e483f95c;
static PyCodeObject *codeobj_b97d5605c3b43c5df15c5603c4c3355b;
static PyCodeObject *codeobj_f4fcf62e19798657d07e72bc5eeaaa99;
static PyCodeObject *codeobj_24f5e5f661d2fb9086c3bcce1644ac3e;
static PyCodeObject *codeobj_77fe8c5b84dca956d6a594d577677aaa;
static PyCodeObject *codeobj_9d022052c277b544f4dba9d0640e3370;
static PyCodeObject *codeobj_96837d8c26f4eb30667dac7dcc749d49;
static PyCodeObject *codeobj_c7346184e4a7f819a6ef7e09b6049a26;
static PyCodeObject *codeobj_d619189908e0ebb656ba8ca6d4bf0a27;
static PyCodeObject *codeobj_95b1cdb510ac1898fe99a62210dacb4f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[299]); CHECK_OBJECT(module_filename_obj);
    codeobj_9950deb7a3afa5372fb54e4b9953135d = MAKE_CODEOBJECT(module_filename_obj, 773, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[191], mod_consts[300], NULL, 1, 0, 0);
    codeobj_8a538f77904a6426902f00397732322b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[301], NULL, NULL, 0, 0, 0);
    codeobj_0b73a8f75768b3022cabec135065d776 = MAKE_CODEOBJECT(module_filename_obj, 561, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[157], mod_consts[302], NULL, 5, 0, 0);
    codeobj_3cb7d144f883c00f36c0ad574cd095f8 = MAKE_CODEOBJECT(module_filename_obj, 839, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[293], mod_consts[303], NULL, 3, 0, 0);
    codeobj_c4c83a3e5d7805c1d7465f2986cef087 = MAKE_CODEOBJECT(module_filename_obj, 862, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[195], mod_consts[303], NULL, 3, 0, 0);
    codeobj_3a600349961d3d17149dce7cee72cc71 = MAKE_CODEOBJECT(module_filename_obj, 604, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[159], mod_consts[304], NULL, 6, 0, 0);
    codeobj_4aa4eaec884c199228ae8f4794af4ef7 = MAKE_CODEOBJECT(module_filename_obj, 807, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[290], mod_consts[305], NULL, 1, 0, 0);
    codeobj_20660df29f5b72efb21702b1276df9aa = MAKE_CODEOBJECT(module_filename_obj, 797, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[206], mod_consts[306], NULL, 2, 0, 0);
    codeobj_6283547709c5128ab98c53d250bf8fbf = MAKE_CODEOBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[150], mod_consts[307], NULL, 6, 0, 0);
    codeobj_0f1c6e0c3a024362d64f9c87a21aef7d = MAKE_CODEOBJECT(module_filename_obj, 887, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[114], mod_consts[308], NULL, 3, 0, 0);
    codeobj_599b4d37f8ef02956c43766c0eaa0654 = MAKE_CODEOBJECT(module_filename_obj, 448, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[309], NULL, 7, 0, 0);
    codeobj_7179385a5a558b7cce7f39d872b182d2 = MAKE_CODEOBJECT(module_filename_obj, 683, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[190], mod_consts[310], NULL, 4, 0, 0);
    codeobj_3eb442ce731d1f9c600f01cd625cb77e = MAKE_CODEOBJECT(module_filename_obj, 828, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[292], mod_consts[303], NULL, 3, 0, 0);
    codeobj_52050ad3fab795e9530ef94eed88a4d7 = MAKE_CODEOBJECT(module_filename_obj, 850, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[194], mod_consts[303], NULL, 3, 0, 0);
    codeobj_79e5ee2734aa28f61acd1ff8e4346b4a = MAKE_CODEOBJECT(module_filename_obj, 952, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[221], mod_consts[311], NULL, 2, 0, 0);
    codeobj_9efc12c8316a154384819e07dcd05c63 = MAKE_CODEOBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[264], mod_consts[312], NULL, 3, 0, 0);
    codeobj_77c23a9c190758d79fa0fd87ac1f3cff = MAKE_CODEOBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[61], mod_consts[313], NULL, 2, 0, 0);
    codeobj_0d88539d8237ab96b08e4150e15370c6 = MAKE_CODEOBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[74], mod_consts[314], NULL, 2, 0, 0);
    codeobj_28994b15360adb2fa92a028fcbf896ad = MAKE_CODEOBJECT(module_filename_obj, 883, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[296], mod_consts[315], NULL, 1, 0, 0);
    codeobj_a25e3031a5add7f40aa9ee45e483f95c = MAKE_CODEOBJECT(module_filename_obj, 167, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[110], mod_consts[316], NULL, 1, 1, 0);
    codeobj_b97d5605c3b43c5df15c5603c4c3355b = MAKE_CODEOBJECT(module_filename_obj, 279, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[79], mod_consts[317], mod_consts[318], 1, 0, 0);
    codeobj_f4fcf62e19798657d07e72bc5eeaaa99 = MAKE_CODEOBJECT(module_filename_obj, 876, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[295], mod_consts[319], NULL, 2, 0, 0);
    codeobj_24f5e5f661d2fb9086c3bcce1644ac3e = MAKE_CODEOBJECT(module_filename_obj, 922, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[213], mod_consts[320], mod_consts[321], 2, 0, 0);
    codeobj_77fe8c5b84dca956d6a594d577677aaa = MAKE_CODEOBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[83], mod_consts[322], NULL, 9, 0, 0);
    codeobj_9d022052c277b544f4dba9d0640e3370 = MAKE_CODEOBJECT(module_filename_obj, 732, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[323], NULL, 5, 0, 0);
    codeobj_96837d8c26f4eb30667dac7dcc749d49 = MAKE_CODEOBJECT(module_filename_obj, 254, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[68], mod_consts[324], NULL, 8, 0, 0);
    codeobj_c7346184e4a7f819a6ef7e09b6049a26 = MAKE_CODEOBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[275], mod_consts[325], NULL, 10, 0, 0);
    codeobj_d619189908e0ebb656ba8ca6d4bf0a27 = MAKE_CODEOBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[266], mod_consts[326], NULL, 2, 0, 0);
    codeobj_95b1cdb510ac1898fe99a62210dacb4f = MAKE_CODEOBJECT(module_filename_obj, 813, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[201], mod_consts[327], mod_consts[328], 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_pos_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__10__from_derivatives(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__11__akima_interpolate(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__12__cubicspline_interpolate(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__13__interpolate_with_limit_area(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__15__fillna_prep(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func(PyObject *defaults, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__17__pad_1d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__18__backfill_1d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__19__pad_2d(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__1_check_value_size(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__20__backfill_2d(PyObject *defaults);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__21_get_fill_func(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__22_clean_reindex_fill_method();


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__24__rolling_window(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__2_mask_missing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__3_clean_fill_method(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__4_clean_interp_method(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__5_find_valid_index(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__6_interpolate_array_2d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__8_interpolate_1d(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__9__interpolate_scipy_wrapper(PyObject *defaults);


// The module function definitions.
static PyObject *impl_pandas$core$missing$$$function__1_check_value_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_mask = python_pars[1];
    PyObject *par_length = python_pars[2];
    struct Nuitka_FrameObject *frame_9efc12c8316a154384819e07dcd05c63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9efc12c8316a154384819e07dcd05c63 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9efc12c8316a154384819e07dcd05c63)) {
        Py_XDECREF(cache_frame_9efc12c8316a154384819e07dcd05c63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9efc12c8316a154384819e07dcd05c63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9efc12c8316a154384819e07dcd05c63 = MAKE_FUNCTION_FRAME(codeobj_9efc12c8316a154384819e07dcd05c63, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9efc12c8316a154384819e07dcd05c63->m_type_description == NULL);
    frame_9efc12c8316a154384819e07dcd05c63 = cache_frame_9efc12c8316a154384819e07dcd05c63;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9efc12c8316a154384819e07dcd05c63);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9efc12c8316a154384819e07dcd05c63) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_value);
        tmp_args_element_name_1 = par_value;
        frame_9efc12c8316a154384819e07dcd05c63->m_frame.f_lineno = 49;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_compexpr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_length);
        tmp_compexpr_right_1 = par_length;
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[1];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_value == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 52;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }

            tmp_len_arg_2 = par_value;
            tmp_format_value_1 = BUILTIN_LEN(tmp_len_arg_2);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[4];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_length);
            tmp_format_value_2 = par_length;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9efc12c8316a154384819e07dcd05c63->m_frame.f_lineno = 51;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        if (par_value == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[2]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_value;
        CHECK_OBJECT(par_mask);
        tmp_subscript_name_1 = par_mask;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_value;
            par_value = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9efc12c8316a154384819e07dcd05c63);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9efc12c8316a154384819e07dcd05c63);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9efc12c8316a154384819e07dcd05c63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9efc12c8316a154384819e07dcd05c63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9efc12c8316a154384819e07dcd05c63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9efc12c8316a154384819e07dcd05c63,
        type_description_1,
        par_value,
        par_mask,
        par_length
    );


    // Release cached frame if used for exception.
    if (frame_9efc12c8316a154384819e07dcd05c63 == cache_frame_9efc12c8316a154384819e07dcd05c63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9efc12c8316a154384819e07dcd05c63);
        cache_frame_9efc12c8316a154384819e07dcd05c63 = NULL;
    }

    assertFrameObject(frame_9efc12c8316a154384819e07dcd05c63);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_value);
    tmp_return_value = par_value;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    par_mask = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_value);
    par_value = NULL;
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    par_mask = NULL;
    CHECK_OBJECT(par_length);
    Py_DECREF(par_length);
    par_length = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__2_mask_missing(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[0];
    PyObject *par_values_to_mask = python_pars[1];
    PyObject *var_dtype = NULL;
    PyObject *var_na_mask = NULL;
    PyObject *var_nonna = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_x = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d619189908e0ebb656ba8ca6d4bf0a27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d619189908e0ebb656ba8ca6d4bf0a27 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d619189908e0ebb656ba8ca6d4bf0a27)) {
        Py_XDECREF(cache_frame_d619189908e0ebb656ba8ca6d4bf0a27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d619189908e0ebb656ba8ca6d4bf0a27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d619189908e0ebb656ba8ca6d4bf0a27 = MAKE_FUNCTION_FRAME(codeobj_d619189908e0ebb656ba8ca6d4bf0a27, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d619189908e0ebb656ba8ca6d4bf0a27->m_type_description == NULL);
    frame_d619189908e0ebb656ba8ca6d4bf0a27 = cache_frame_d619189908e0ebb656ba8ca6d4bf0a27;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d619189908e0ebb656ba8ca6d4bf0a27);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d619189908e0ebb656ba8ca6d4bf0a27) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_values_to_mask);
        tmp_args_element_name_1 = par_values_to_mask;
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 77;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 77;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 77;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 77;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 77;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_dtype == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_dtype = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_values_to_mask;
            assert(old != NULL);
            par_values_to_mask = tmp_assign_source_5;
            Py_INCREF(par_values_to_mask);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[9]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values_to_mask);
        tmp_tuple_element_1 = par_values_to_mask;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[10];
        CHECK_OBJECT(var_dtype);
        tmp_dict_value_1 = var_dtype;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 82;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_values_to_mask;
            par_values_to_mask = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values_to_mask);
        tmp_args_element_name_2 = par_values_to_mask;
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 84;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_na_mask == NULL);
        var_na_mask = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(par_values_to_mask);
        tmp_expression_name_2 = par_values_to_mask;
        CHECK_OBJECT(var_na_mask);
        tmp_operand_name_1 = var_na_mask;
        tmp_subscript_name_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        if (tmp_subscript_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonna == NULL);
        var_nonna = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_kwargs_name_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[12]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arr);
        tmp_expression_name_4 = par_arr;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[13]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[14]);
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 88;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_nonna);
        tmp_iter_arg_2 = var_nonna;
        tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_11 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 89;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_x;
            var_x = tmp_assign_source_12;
            Py_INCREF(var_x);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        if (par_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_name_3 = par_arr;
        CHECK_OBJECT(var_x);
        tmp_args_element_name_4 = var_x;
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, call_args);
        }

        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if (var_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_left_name_1 = var_mask;
        if (par_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }

        tmp_compexpr_left_1 = par_arr;
        CHECK_OBJECT(var_x);
        tmp_compexpr_right_1 = var_x;
        tmp_right_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_13 = tmp_left_name_1;
        var_mask = tmp_assign_source_13;

    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 89;
        type_description_1 = "ooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_na_mask);
        tmp_called_instance_1 = var_na_mask;
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 96;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 96;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_5;
        if (var_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = var_mask;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_arr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_arr;
        frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame.f_lineno = 97;
        tmp_right_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_5);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = tmp_left_name_2;
        var_mask = tmp_assign_source_14;

    }
    branch_no_2:;
    if (var_mask == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 99;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_mask;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d619189908e0ebb656ba8ca6d4bf0a27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d619189908e0ebb656ba8ca6d4bf0a27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d619189908e0ebb656ba8ca6d4bf0a27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d619189908e0ebb656ba8ca6d4bf0a27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d619189908e0ebb656ba8ca6d4bf0a27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d619189908e0ebb656ba8ca6d4bf0a27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d619189908e0ebb656ba8ca6d4bf0a27,
        type_description_1,
        par_arr,
        par_values_to_mask,
        var_dtype,
        var_na_mask,
        var_nonna,
        var_mask,
        var_x
    );


    // Release cached frame if used for exception.
    if (frame_d619189908e0ebb656ba8ca6d4bf0a27 == cache_frame_d619189908e0ebb656ba8ca6d4bf0a27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d619189908e0ebb656ba8ca6d4bf0a27);
        cache_frame_d619189908e0ebb656ba8ca6d4bf0a27 = NULL;
    }

    assertFrameObject(frame_d619189908e0ebb656ba8ca6d4bf0a27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_arr);
    par_arr = NULL;
    CHECK_OBJECT(par_values_to_mask);
    Py_DECREF(par_values_to_mask);
    par_values_to_mask = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_na_mask);
    var_na_mask = NULL;
    Py_XDECREF(var_nonna);
    var_nonna = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_arr);
    par_arr = NULL;
    Py_XDECREF(par_values_to_mask);
    par_values_to_mask = NULL;
    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_na_mask);
    var_na_mask = NULL;
    Py_XDECREF(var_nonna);
    var_nonna = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__3_clean_fill_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    PyObject *par_allow_nearest = python_pars[1];
    PyObject *var_valid_methods = NULL;
    PyObject *var_expecting = NULL;
    struct Nuitka_FrameObject *frame_77c23a9c190758d79fa0fd87ac1f3cff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_77c23a9c190758d79fa0fd87ac1f3cff = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_77c23a9c190758d79fa0fd87ac1f3cff)) {
        Py_XDECREF(cache_frame_77c23a9c190758d79fa0fd87ac1f3cff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77c23a9c190758d79fa0fd87ac1f3cff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77c23a9c190758d79fa0fd87ac1f3cff = MAKE_FUNCTION_FRAME(codeobj_77c23a9c190758d79fa0fd87ac1f3cff, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_77c23a9c190758d79fa0fd87ac1f3cff->m_type_description == NULL);
    frame_77c23a9c190758d79fa0fd87ac1f3cff = cache_frame_77c23a9c190758d79fa0fd87ac1f3cff;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_77c23a9c190758d79fa0fd87ac1f3cff);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_77c23a9c190758d79fa0fd87ac1f3cff) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = LIST_COPY(mod_consts[20]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_method);
        tmp_isinstance_inst_1 = par_method;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_method);
        tmp_called_instance_1 = par_method;
        frame_77c23a9c190758d79fa0fd87ac1f3cff->m_frame.f_lineno = 108;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[21]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_method;
            par_method = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_2 = par_method;
        tmp_compexpr_right_2 = mod_consts[22];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 109;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[23];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_2;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_3 = par_method;
        tmp_compexpr_right_3 = mod_consts[24];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 111;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[25];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_3;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    branch_end_3:;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY(mod_consts[26]);
        assert(var_valid_methods == NULL);
        var_valid_methods = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[27];
        assert(var_expecting == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_expecting = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_allow_nearest);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_allow_nearest);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_valid_methods);
        tmp_called_instance_2 = var_valid_methods;
        frame_77c23a9c190758d79fa0fd87ac1f3cff->m_frame.f_lineno = 117;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[28],
            &PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = mod_consts[30];
        {
            PyObject *old = var_expecting;
            assert(old != NULL);
            var_expecting = tmp_assign_source_6;
            Py_INCREF(var_expecting);
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        if (par_method == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = par_method;
        if (var_valid_methods == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = var_valid_methods;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[33];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_expecting);
            tmp_tuple_element_1 = var_expecting;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[34];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            if (par_method == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 120;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = par_method;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_77c23a9c190758d79fa0fd87ac1f3cff->m_frame.f_lineno = 120;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 120;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    if (par_method == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 121;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_method;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77c23a9c190758d79fa0fd87ac1f3cff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77c23a9c190758d79fa0fd87ac1f3cff);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77c23a9c190758d79fa0fd87ac1f3cff);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77c23a9c190758d79fa0fd87ac1f3cff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77c23a9c190758d79fa0fd87ac1f3cff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77c23a9c190758d79fa0fd87ac1f3cff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77c23a9c190758d79fa0fd87ac1f3cff,
        type_description_1,
        par_method,
        par_allow_nearest,
        var_valid_methods,
        var_expecting
    );


    // Release cached frame if used for exception.
    if (frame_77c23a9c190758d79fa0fd87ac1f3cff == cache_frame_77c23a9c190758d79fa0fd87ac1f3cff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_77c23a9c190758d79fa0fd87ac1f3cff);
        cache_frame_77c23a9c190758d79fa0fd87ac1f3cff = NULL;
    }

    assertFrameObject(frame_77c23a9c190758d79fa0fd87ac1f3cff);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_allow_nearest);
    Py_DECREF(par_allow_nearest);
    par_allow_nearest = NULL;
    Py_XDECREF(var_valid_methods);
    var_valid_methods = NULL;
    Py_XDECREF(var_expecting);
    var_expecting = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_allow_nearest);
    Py_DECREF(par_allow_nearest);
    par_allow_nearest = NULL;
    Py_XDECREF(var_valid_methods);
    var_valid_methods = NULL;
    Py_XDECREF(var_expecting);
    var_expecting = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__4_clean_interp_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    PyObject *par_index = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_order = NULL;
    PyObject *var_valid = NULL;
    struct Nuitka_FrameObject *frame_0d88539d8237ab96b08e4150e15370c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0d88539d8237ab96b08e4150e15370c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0d88539d8237ab96b08e4150e15370c6)) {
        Py_XDECREF(cache_frame_0d88539d8237ab96b08e4150e15370c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d88539d8237ab96b08e4150e15370c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d88539d8237ab96b08e4150e15370c6 = MAKE_FUNCTION_FRAME(codeobj_0d88539d8237ab96b08e4150e15370c6, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0d88539d8237ab96b08e4150e15370c6->m_type_description == NULL);
    frame_0d88539d8237ab96b08e4150e15370c6 = cache_frame_0d88539d8237ab96b08e4150e15370c6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0d88539d8237ab96b08e4150e15370c6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0d88539d8237ab96b08e4150e15370c6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_kwargs);
        tmp_called_instance_1 = par_kwargs;
        frame_0d88539d8237ab96b08e4150e15370c6->m_frame.f_lineno = 149;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[35],
            &PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_order == NULL);
        var_order = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = mod_consts[37];
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_order);
        tmp_compexpr_left_2 = var_order;
        tmp_compexpr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[38];
        frame_0d88539d8237ab96b08e4150e15370c6->m_frame.f_lineno = 152;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 152;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_right_name_1 == NULL)) {
            tmp_right_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_valid == NULL);
        var_valid = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_3 = par_method;
        CHECK_OBJECT(var_valid);
        tmp_compexpr_right_3 = var_valid;
        tmp_res = PySequence_Contains(tmp_compexpr_right_3, tmp_compexpr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[41];
        tmp_string_concat_values_1 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_valid);
            tmp_format_value_1 = var_valid;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[42];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_method);
            tmp_format_value_2 = par_method;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0d88539d8237ab96b08e4150e15370c6->m_frame.f_lineno = 156;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 156;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_4 = par_method;
        tmp_compexpr_right_4 = mod_consts[44];
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_index);
        tmp_expression_name_1 = par_index;
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[45]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_format_value_3;
        PyObject *tmp_format_spec_3;
        CHECK_OBJECT(par_method);
        tmp_format_value_3 = par_method;
        tmp_format_spec_3 = mod_consts[3];
        tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_2 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[46];
        PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0d88539d8237ab96b08e4150e15370c6->m_frame.f_lineno = 160;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 160;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d88539d8237ab96b08e4150e15370c6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0d88539d8237ab96b08e4150e15370c6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0d88539d8237ab96b08e4150e15370c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d88539d8237ab96b08e4150e15370c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d88539d8237ab96b08e4150e15370c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d88539d8237ab96b08e4150e15370c6,
        type_description_1,
        par_method,
        par_index,
        par_kwargs,
        var_order,
        var_valid
    );


    // Release cached frame if used for exception.
    if (frame_0d88539d8237ab96b08e4150e15370c6 == cache_frame_0d88539d8237ab96b08e4150e15370c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0d88539d8237ab96b08e4150e15370c6);
        cache_frame_0d88539d8237ab96b08e4150e15370c6 = NULL;
    }

    assertFrameObject(frame_0d88539d8237ab96b08e4150e15370c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_method);
    tmp_return_value = par_method;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_index);
    par_index = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_order);
    Py_DECREF(var_order);
    var_order = NULL;
    CHECK_OBJECT(var_valid);
    Py_DECREF(var_valid);
    var_valid = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_index);
    par_index = NULL;
    Py_XDECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_order);
    var_order = NULL;
    Py_XDECREF(var_valid);
    var_valid = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__5_find_valid_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_how = python_pars[1];
    PyObject *var_is_valid = NULL;
    PyObject *var_idxpos = NULL;
    PyObject *var_chk_notna = NULL;
    struct Nuitka_FrameObject *frame_a25e3031a5add7f40aa9ee45e483f95c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a25e3031a5add7f40aa9ee45e483f95c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a25e3031a5add7f40aa9ee45e483f95c)) {
        Py_XDECREF(cache_frame_a25e3031a5add7f40aa9ee45e483f95c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a25e3031a5add7f40aa9ee45e483f95c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a25e3031a5add7f40aa9ee45e483f95c = MAKE_FUNCTION_FRAME(codeobj_a25e3031a5add7f40aa9ee45e483f95c, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a25e3031a5add7f40aa9ee45e483f95c->m_type_description == NULL);
    frame_a25e3031a5add7f40aa9ee45e483f95c = cache_frame_a25e3031a5add7f40aa9ee45e483f95c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a25e3031a5add7f40aa9ee45e483f95c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a25e3031a5add7f40aa9ee45e483f95c) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_how);
        tmp_compexpr_left_1 = par_how;
        tmp_compexpr_right_1 = LIST_COPY(mod_consts[47]);
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 181;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        CHECK_OBJECT(par_values);
        tmp_len_arg_1 = par_values;
        tmp_compexpr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = mod_consts[48];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        assert(!(tmp_tmp_condition_result_2_object_1 == NULL));
        tmp_condition_result_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1) == 1;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_values;
        frame_a25e3031a5add7f40aa9ee45e483f95c->m_frame.f_lineno = 186;
        tmp_operand_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_is_valid == NULL);
        var_is_valid = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_1 = par_values;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[50]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[51];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 188;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_is_valid);
        tmp_called_instance_1 = var_is_valid;
        frame_a25e3031a5add7f40aa9ee45e483f95c->m_frame.f_lineno = 189;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[18],
            &PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_is_valid;
            var_is_valid = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_how);
        tmp_compexpr_left_4 = par_how;
        tmp_compexpr_right_4 = mod_consts[53];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_is_valid);
        tmp_expression_name_2 = var_is_valid;
        tmp_subscript_name_1 = mod_consts[54];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a25e3031a5add7f40aa9ee45e483f95c->m_frame.f_lineno = 192;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[55]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idxpos == NULL);
        var_idxpos = tmp_assign_source_3;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_how);
        tmp_compexpr_left_5 = par_how;
        tmp_compexpr_right_5 = mod_consts[56];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 194;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = par_values;
        tmp_left_name_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = mod_consts[57];
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_name_2, tmp_right_name_1);
        Py_DECREF(tmp_left_name_2);
        assert(!(tmp_left_name_1 == NULL));
        CHECK_OBJECT(var_is_valid);
        tmp_expression_name_3 = var_is_valid;
        tmp_subscript_name_2 = mod_consts[58];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_a25e3031a5add7f40aa9ee45e483f95c->m_frame.f_lineno = 195;
        tmp_right_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[55]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idxpos == NULL);
        var_idxpos = tmp_assign_source_4;
    }
    branch_no_5:;
    branch_end_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_is_valid);
        tmp_expression_name_4 = var_is_valid;
        if (var_idxpos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = var_idxpos;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_chk_notna == NULL);
        var_chk_notna = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_2;
        CHECK_OBJECT(var_chk_notna);
        tmp_operand_name_2 = var_chk_notna;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    if (var_idxpos == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 201;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_idxpos;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a25e3031a5add7f40aa9ee45e483f95c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_a25e3031a5add7f40aa9ee45e483f95c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a25e3031a5add7f40aa9ee45e483f95c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a25e3031a5add7f40aa9ee45e483f95c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a25e3031a5add7f40aa9ee45e483f95c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a25e3031a5add7f40aa9ee45e483f95c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a25e3031a5add7f40aa9ee45e483f95c,
        type_description_1,
        par_values,
        par_how,
        var_is_valid,
        var_idxpos,
        var_chk_notna
    );


    // Release cached frame if used for exception.
    if (frame_a25e3031a5add7f40aa9ee45e483f95c == cache_frame_a25e3031a5add7f40aa9ee45e483f95c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a25e3031a5add7f40aa9ee45e483f95c);
        cache_frame_a25e3031a5add7f40aa9ee45e483f95c = NULL;
    }

    assertFrameObject(frame_a25e3031a5add7f40aa9ee45e483f95c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_how);
    Py_DECREF(par_how);
    par_how = NULL;
    Py_XDECREF(var_is_valid);
    var_is_valid = NULL;
    Py_XDECREF(var_idxpos);
    var_idxpos = NULL;
    Py_XDECREF(var_chk_notna);
    var_chk_notna = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_how);
    Py_DECREF(par_how);
    par_how = NULL;
    Py_XDECREF(var_is_valid);
    var_is_valid = NULL;
    Py_XDECREF(var_idxpos);
    var_idxpos = NULL;
    Py_XDECREF(var_chk_notna);
    var_chk_notna = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__6_interpolate_array_2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_index = python_pars[3];
    PyObject *par_limit = python_pars[4];
    PyObject *par_limit_direction = python_pars[5];
    PyObject *par_limit_area = python_pars[6];
    PyObject *par_fill_value = python_pars[7];
    PyObject *par_coerce = python_pars[8];
    PyObject *par_downcast = python_pars[9];
    PyObject *par_kwargs = python_pars[10];
    PyObject *var_m = NULL;
    PyObject *var_interp_values = NULL;
    struct Nuitka_FrameObject *frame_c7346184e4a7f819a6ef7e09b6049a26;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_c7346184e4a7f819a6ef7e09b6049a26 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c7346184e4a7f819a6ef7e09b6049a26)) {
        Py_XDECREF(cache_frame_c7346184e4a7f819a6ef7e09b6049a26);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c7346184e4a7f819a6ef7e09b6049a26 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c7346184e4a7f819a6ef7e09b6049a26 = MAKE_FUNCTION_FRAME(codeobj_c7346184e4a7f819a6ef7e09b6049a26, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c7346184e4a7f819a6ef7e09b6049a26->m_type_description == NULL);
    frame_c7346184e4a7f819a6ef7e09b6049a26 = cache_frame_c7346184e4a7f819a6ef7e09b6049a26;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c7346184e4a7f819a6ef7e09b6049a26);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c7346184e4a7f819a6ef7e09b6049a26) == 2); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_method);
        tmp_args_element_name_1 = par_method;
        frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame.f_lineno = 221;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_1;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c7346184e4a7f819a6ef7e09b6049a26, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c7346184e4a7f819a6ef7e09b6049a26, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = Py_None;
        assert(var_m == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_m = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 220;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame) frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        if (var_m == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = var_m;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_2 != tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_fill_value);
        tmp_compexpr_left_3 = par_fill_value;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[63];
        frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame.f_lineno = 228;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 228;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_tuple_element_1 = par_data;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[31];
        if (var_m == NULL) {
            Py_DECREF(tmp_args_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 232;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = var_m;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(par_axis);
        tmp_dict_value_1 = par_axis;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[67];
        CHECK_OBJECT(par_limit_area);
        tmp_dict_value_1 = par_limit_area;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame.f_lineno = 230;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interp_values == NULL);
        var_interp_values = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_index);
        tmp_compexpr_left_4 = par_index;
        tmp_compexpr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_compexpr_left_4 == tmp_compexpr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 238;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[69];
        CHECK_OBJECT(par_data);
        tmp_dict_value_2 = par_data;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[70];
        CHECK_OBJECT(par_index);
        tmp_dict_value_2 = par_index;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[65];
        CHECK_OBJECT(par_axis);
        tmp_dict_value_2 = par_axis;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[31];
        CHECK_OBJECT(par_method);
        tmp_dict_value_2 = par_method;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_2 = par_limit;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[71];
        CHECK_OBJECT(par_limit_direction);
        tmp_dict_value_2 = par_limit_direction;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[67];
        CHECK_OBJECT(par_limit_area);
        tmp_dict_value_2 = par_limit_area;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[72];
        CHECK_OBJECT(par_fill_value);
        tmp_dict_value_2 = par_fill_value;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___main__$$$function__7_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interp_values == NULL);
        var_interp_values = tmp_assign_source_4;
    }
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7346184e4a7f819a6ef7e09b6049a26);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c7346184e4a7f819a6ef7e09b6049a26);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c7346184e4a7f819a6ef7e09b6049a26, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c7346184e4a7f819a6ef7e09b6049a26->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c7346184e4a7f819a6ef7e09b6049a26, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c7346184e4a7f819a6ef7e09b6049a26,
        type_description_1,
        par_data,
        par_method,
        par_axis,
        par_index,
        par_limit,
        par_limit_direction,
        par_limit_area,
        par_fill_value,
        par_coerce,
        par_downcast,
        par_kwargs,
        var_m,
        var_interp_values
    );


    // Release cached frame if used for exception.
    if (frame_c7346184e4a7f819a6ef7e09b6049a26 == cache_frame_c7346184e4a7f819a6ef7e09b6049a26) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c7346184e4a7f819a6ef7e09b6049a26);
        cache_frame_c7346184e4a7f819a6ef7e09b6049a26 = NULL;
    }

    assertFrameObject(frame_c7346184e4a7f819a6ef7e09b6049a26);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_interp_values);
    tmp_return_value = var_interp_values;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    par_index = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_direction);
    Py_DECREF(par_limit_direction);
    par_limit_direction = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    par_coerce = NULL;
    CHECK_OBJECT(par_downcast);
    Py_DECREF(par_downcast);
    par_downcast = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    CHECK_OBJECT(var_interp_values);
    Py_DECREF(var_interp_values);
    var_interp_values = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    par_index = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_direction);
    Py_DECREF(par_limit_direction);
    par_limit_direction = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_coerce);
    Py_DECREF(par_coerce);
    par_coerce = NULL;
    CHECK_OBJECT(par_downcast);
    Py_DECREF(par_downcast);
    par_downcast = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    struct Nuitka_CellObject *par_index = Nuitka_Cell_New1(python_pars[1]);
    PyObject *par_axis = python_pars[2];
    struct Nuitka_CellObject *par_method = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_limit = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_limit_direction = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_limit_area = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_fill_value = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_kwargs = Nuitka_Cell_New1(python_pars[8]);
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_96837d8c26f4eb30667dac7dcc749d49;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96837d8c26f4eb30667dac7dcc749d49 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96837d8c26f4eb30667dac7dcc749d49)) {
        Py_XDECREF(cache_frame_96837d8c26f4eb30667dac7dcc749d49);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96837d8c26f4eb30667dac7dcc749d49 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96837d8c26f4eb30667dac7dcc749d49 = MAKE_FUNCTION_FRAME(codeobj_96837d8c26f4eb30667dac7dcc749d49, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_96837d8c26f4eb30667dac7dcc749d49->m_type_description == NULL);
    frame_96837d8c26f4eb30667dac7dcc749d49 = cache_frame_96837d8c26f4eb30667dac7dcc749d49;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_96837d8c26f4eb30667dac7dcc749d49);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96837d8c26f4eb30667dac7dcc749d49) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_method));
        tmp_tuple_element_1 = Nuitka_Cell_GET(par_method);
        tmp_dircall_arg2_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_index));
        tmp_tuple_element_1 = Nuitka_Cell_GET(par_index);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(Nuitka_Cell_GET(par_kwargs));
        tmp_dircall_arg3_1 = Nuitka_Cell_GET(par_kwargs);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_fill_value));
        tmp_args_element_name_1 = Nuitka_Cell_GET(par_fill_value);
        CHECK_OBJECT(par_data);
        tmp_expression_name_1 = par_data;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[10]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        frame_96837d8c26f4eb30667dac7dcc749d49->m_frame.f_lineno = 276;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 276;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        if (par_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 277;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_data;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[10]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_2);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[77]);
        frame_96837d8c26f4eb30667dac7dcc749d49->m_frame.f_lineno = 277;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_fill_value);
            PyCell_SET(par_fill_value, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_annotations_1;
        struct Nuitka_CellObject *tmp_closure_1[7];
        tmp_annotations_1 = PyDict_Copy(mod_consts[78]);

        tmp_closure_1[0] = par_fill_value;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_index;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_kwargs;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_limit;
        Py_INCREF(tmp_closure_1[3]);
        tmp_closure_1[4] = par_limit_area;
        Py_INCREF(tmp_closure_1[4]);
        tmp_closure_1[5] = par_limit_direction;
        Py_INCREF(tmp_closure_1[5]);
        tmp_closure_1[6] = par_method;
        Py_INCREF(tmp_closure_1[6]);

        tmp_assign_source_2 = MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func(tmp_annotations_1, tmp_closure_1);

        assert(var_func == NULL);
        var_func = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[81]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_name_3 = var_func;
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_4 = par_axis;
        if (par_data == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 297;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = par_data;
        frame_96837d8c26f4eb30667dac7dcc749d49->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ococccccco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96837d8c26f4eb30667dac7dcc749d49);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_96837d8c26f4eb30667dac7dcc749d49);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96837d8c26f4eb30667dac7dcc749d49);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96837d8c26f4eb30667dac7dcc749d49, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96837d8c26f4eb30667dac7dcc749d49->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96837d8c26f4eb30667dac7dcc749d49, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96837d8c26f4eb30667dac7dcc749d49,
        type_description_1,
        par_data,
        par_index,
        par_axis,
        par_method,
        par_limit,
        par_limit_direction,
        par_limit_area,
        par_fill_value,
        par_kwargs,
        var_func
    );


    // Release cached frame if used for exception.
    if (frame_96837d8c26f4eb30667dac7dcc749d49 == cache_frame_96837d8c26f4eb30667dac7dcc749d49) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_96837d8c26f4eb30667dac7dcc749d49);
        cache_frame_96837d8c26f4eb30667dac7dcc749d49 = NULL;
    }

    assertFrameObject(frame_96837d8c26f4eb30667dac7dcc749d49);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    par_index = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_direction);
    Py_DECREF(par_limit_direction);
    par_limit_direction = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_data);
    par_data = NULL;
    CHECK_OBJECT(par_index);
    Py_DECREF(par_index);
    par_index = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_direction);
    Py_DECREF(par_limit_direction);
    par_limit_direction = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_yvalues = python_pars[0];
    struct Nuitka_FrameObject *frame_b97d5605c3b43c5df15c5603c4c3355b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b97d5605c3b43c5df15c5603c4c3355b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b97d5605c3b43c5df15c5603c4c3355b)) {
        Py_XDECREF(cache_frame_b97d5605c3b43c5df15c5603c4c3355b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b97d5605c3b43c5df15c5603c4c3355b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b97d5605c3b43c5df15c5603c4c3355b = MAKE_FUNCTION_FRAME(codeobj_b97d5605c3b43c5df15c5603c4c3355b, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b97d5605c3b43c5df15c5603c4c3355b->m_type_description == NULL);
    frame_b97d5605c3b43c5df15c5603c4c3355b = cache_frame_b97d5605c3b43c5df15c5603c4c3355b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b97d5605c3b43c5df15c5603c4c3355b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b97d5605c3b43c5df15c5603c4c3355b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[84];
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 8 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[85];
        CHECK_OBJECT(par_yvalues);
        tmp_dict_value_1 = par_yvalues;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[31];
        if (Nuitka_Cell_GET(self->m_closure[6]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "occccccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[6]);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[66];
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "occccccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[71];
        if (Nuitka_Cell_GET(self->m_closure[5]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[71]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "occccccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[5]);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[67];
        if (Nuitka_Cell_GET(self->m_closure[4]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "occccccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[4]);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[72];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "occccccc";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[86];
        tmp_dict_value_1 = Py_False;
        tmp_res = PyDict_SetItem(tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg3_1 = Nuitka_Cell_GET(self->m_closure[2]);
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_keywords_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "occccccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b97d5605c3b43c5df15c5603c4c3355b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b97d5605c3b43c5df15c5603c4c3355b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b97d5605c3b43c5df15c5603c4c3355b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b97d5605c3b43c5df15c5603c4c3355b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b97d5605c3b43c5df15c5603c4c3355b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b97d5605c3b43c5df15c5603c4c3355b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b97d5605c3b43c5df15c5603c4c3355b,
        type_description_1,
        par_yvalues,
        self->m_closure[1],
        self->m_closure[6],
        self->m_closure[3],
        self->m_closure[5],
        self->m_closure[4],
        self->m_closure[0],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_b97d5605c3b43c5df15c5603c4c3355b == cache_frame_b97d5605c3b43c5df15c5603c4c3355b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b97d5605c3b43c5df15c5603c4c3355b);
        cache_frame_b97d5605c3b43c5df15c5603c4c3355b = NULL;
    }

    assertFrameObject(frame_b97d5605c3b43c5df15c5603c4c3355b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_yvalues);
    Py_DECREF(par_yvalues);
    par_yvalues = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_yvalues);
    Py_DECREF(par_yvalues);
    par_yvalues = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__8_interpolate_1d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xvalues = python_pars[0];
    PyObject *par_yvalues = python_pars[1];
    PyObject *par_method = python_pars[2];
    PyObject *par_limit = python_pars[3];
    PyObject *par_limit_direction = python_pars[4];
    PyObject *par_limit_area = python_pars[5];
    PyObject *par_fill_value = python_pars[6];
    PyObject *par_bounds_error = python_pars[7];
    PyObject *par_order = python_pars[8];
    PyObject *par_kwargs = python_pars[9];
    PyObject *var_preserve_nans = NULL;
    PyObject *var_invalid = NULL;
    PyObject *var_valid = NULL;
    PyObject *var_result = NULL;
    PyObject *var_valid_limit_directions = NULL;
    PyObject *var_valid_limit_areas = NULL;
    PyObject *var_all_nans = NULL;
    PyObject *var_first_valid_index = NULL;
    PyObject *var_start_nans = NULL;
    PyObject *var_last_valid_index = NULL;
    PyObject *var_end_nans = NULL;
    PyObject *var_mid_nans = NULL;
    PyObject *var_xarr = NULL;
    PyObject *var_inds = NULL;
    PyObject *var_indexer = NULL;
    struct Nuitka_FrameObject *frame_77fe8c5b84dca956d6a594d577677aaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_77fe8c5b84dca956d6a594d577677aaa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_77fe8c5b84dca956d6a594d577677aaa)) {
        Py_XDECREF(cache_frame_77fe8c5b84dca956d6a594d577677aaa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_77fe8c5b84dca956d6a594d577677aaa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_77fe8c5b84dca956d6a594d577677aaa = MAKE_FUNCTION_FRAME(codeobj_77fe8c5b84dca956d6a594d577677aaa, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_77fe8c5b84dca956d6a594d577677aaa->m_type_description == NULL);
    frame_77fe8c5b84dca956d6a594d577677aaa = cache_frame_77fe8c5b84dca956d6a594d577677aaa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_77fe8c5b84dca956d6a594d577677aaa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_77fe8c5b84dca956d6a594d577677aaa) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_yvalues);
        tmp_args_element_name_1 = par_yvalues;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 319;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_invalid == NULL);
        var_invalid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_invalid);
        tmp_operand_name_1 = var_invalid;
        tmp_assign_source_2 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_valid == NULL);
        var_valid = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_valid);
        tmp_called_instance_1 = var_valid;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 322;
        tmp_operand_name_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[88]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xvalues);
        tmp_expression_name_2 = par_xvalues;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[10];
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[89]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 323;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        CHECK_OBJECT(var_result);
        tmp_expression_name_4 = var_result;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[90]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[91]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 324;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 325;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_1;
        if (var_valid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_valid;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 327;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[94]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 327;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_yvalues);
    tmp_return_value = par_yvalues;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = mod_consts[95];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_6;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xvalues);
        tmp_expression_name_6 = par_xvalues;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[10]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 331;
        tmp_operand_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[97];
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 332;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 332;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[49];
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_4;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY(mod_consts[98]);
        assert(var_valid_limit_directions == NULL);
        var_valid_limit_directions = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_limit_direction);
        tmp_called_instance_3 = par_limit_direction;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 340;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[21]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_limit_direction;
            par_limit_direction = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(par_limit_direction);
        tmp_compexpr_left_2 = par_limit_direction;
        CHECK_OBJECT(var_valid_limit_directions);
        tmp_compexpr_right_2 = var_valid_limit_directions;
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[99];
        tmp_string_concat_values_1 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_valid_limit_directions);
            tmp_format_value_1 = var_valid_limit_directions;
            tmp_format_spec_1 = mod_consts[3];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[100];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_limit_direction);
            tmp_format_value_2 = par_limit_direction;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 342;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 342;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_3 = par_limit_area;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = LIST_COPY(mod_consts[102]);
        assert(var_valid_limit_areas == NULL);
        var_valid_limit_areas = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_limit_area);
        tmp_called_instance_4 = par_limit_area;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 349;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[21]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_limit_area;
            par_limit_area = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_4 = par_limit_area;
        CHECK_OBJECT(var_valid_limit_areas);
        tmp_compexpr_right_4 = var_valid_limit_areas;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[103];
        tmp_string_concat_values_2 = PyTuple_New(5);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_valid_limit_areas);
            tmp_format_value_3 = var_valid_limit_areas;
            tmp_format_spec_3 = mod_consts[3];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_limit_area);
            tmp_format_value_4 = par_limit_area;
            tmp_format_spec_4 = mod_consts[3];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[105];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 351;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 351;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[107]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[108];
        tmp_dict_value_2 = Py_None;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_2 = par_limit;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 357;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_5, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_limit;
            par_limit = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_name_4;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_invalid);
        tmp_args_element_name_4 = var_invalid;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 360;
        tmp_set_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[109], tmp_args_element_name_4);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_all_nans == NULL);
        var_all_nans = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_name_3;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_yvalues);
        tmp_tuple_element_4 = par_yvalues;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_4);
        tmp_kwargs_name_3 = PyDict_Copy(mod_consts[111]);
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 362;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_first_valid_index == NULL);
        var_first_valid_index = tmp_assign_source_11;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT(var_first_valid_index);
        tmp_compexpr_left_5 = var_first_valid_index;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_compexpr_left_5 == tmp_compexpr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[48];
        {
            PyObject *old = var_first_valid_index;
            assert(old != NULL);
            var_first_valid_index = tmp_assign_source_12;
            Py_INCREF(var_first_valid_index);
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_first_valid_index);
        tmp_xrange_low_1 = var_first_valid_index;
        tmp_set_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_start_nans == NULL);
        var_start_nans = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_4;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_yvalues);
        tmp_tuple_element_5 = par_yvalues;
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_5);
        tmp_kwargs_name_4 = PyDict_Copy(mod_consts[112]);
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 367;
        tmp_assign_source_14 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_3, tmp_kwargs_name_4);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_last_valid_index == NULL);
        var_last_valid_index = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_last_valid_index);
        tmp_compexpr_left_6 = var_last_valid_index;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_compexpr_left_6 == tmp_compexpr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_yvalues);
        tmp_len_arg_1 = par_yvalues;
        tmp_assign_source_15 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_last_valid_index;
            assert(old != NULL);
            var_last_valid_index = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_2;
        tmp_left_name_1 = mod_consts[57];
        CHECK_OBJECT(var_last_valid_index);
        tmp_right_name_1 = var_last_valid_index;
        tmp_xrange_low_2 = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_left_name_1, tmp_right_name_1);
        if (tmp_xrange_low_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_valid == NULL) {
            Py_DECREF(tmp_xrange_low_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_valid;
        tmp_xrange_high_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_xrange_low_2);

            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_3 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_low_2);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_set_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_end_nans == NULL);
        var_end_nans = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(var_all_nans);
        tmp_left_name_3 = var_all_nans;
        CHECK_OBJECT(var_start_nans);
        tmp_right_name_2 = var_start_nans;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        assert(!(tmp_left_name_2 == NULL));
        CHECK_OBJECT(var_end_nans);
        tmp_right_name_3 = var_end_nans;
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        assert(!(tmp_assign_source_17 == NULL));
        assert(var_mid_nans == NULL);
        var_mid_nans = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_condition_result_10_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_limit_direction);
        tmp_compexpr_left_7 = par_limit_direction;
        tmp_compexpr_right_7 = mod_consts[113];
        tmp_tmp_condition_result_10_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_condition_result_10_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_10_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_10_object_1);

            exception_lineno = 384;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_10_object_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_start_nans);
        tmp_left_name_4 = var_start_nans;
        tmp_called_name_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_name_8 == NULL)) {
            tmp_called_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = var_invalid;
        CHECK_OBJECT(par_limit);
        tmp_args_element_name_6 = par_limit;
        tmp_args_element_name_7 = mod_consts[48];
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 385;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7};
            tmp_set_arg_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_8, call_args);
        }

        if (tmp_set_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = PySet_New(tmp_set_arg_4);
        Py_DECREF(tmp_set_arg_4);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        assert(!(tmp_assign_source_18 == NULL));
        assert(var_preserve_nans == NULL);
        var_preserve_nans = tmp_assign_source_18;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tmp_condition_result_11_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_limit_direction);
        tmp_compexpr_left_8 = par_limit_direction;
        tmp_compexpr_right_8 = mod_consts[116];
        tmp_tmp_condition_result_11_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_tmp_condition_result_11_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_11_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_11_object_1);

            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_11_object_1);
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_called_name_9;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(var_end_nans);
        tmp_left_name_5 = var_end_nans;
        tmp_called_name_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_name_9 == NULL)) {
            tmp_called_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_8 = var_invalid;
        tmp_args_element_name_9 = mod_consts[48];
        CHECK_OBJECT(par_limit);
        tmp_args_element_name_10 = par_limit;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 387;
        {
            PyObject *call_args[] = {tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_set_arg_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_9, call_args);
        }

        if (tmp_set_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_5 = PySet_New(tmp_set_arg_5);
        Py_DECREF(tmp_set_arg_5);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        assert(!(tmp_assign_source_19 == NULL));
        assert(var_preserve_nans == NULL);
        var_preserve_nans = tmp_assign_source_19;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_set_arg_6;
        PyObject *tmp_called_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_11 = var_invalid;
        CHECK_OBJECT(par_limit);
        tmp_args_element_name_12 = par_limit;
        CHECK_OBJECT(par_limit);
        tmp_args_element_name_13 = par_limit;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 390;
        {
            PyObject *call_args[] = {tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13};
            tmp_set_arg_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_10, call_args);
        }

        if (tmp_set_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = PySet_New(tmp_set_arg_6);
        Py_DECREF(tmp_set_arg_6);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_preserve_nans == NULL);
        var_preserve_nans = tmp_assign_source_20;
    }
    branch_end_11:;
    branch_end_10:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_tmp_condition_result_12_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_9 = par_limit_area;
        tmp_compexpr_right_9 = mod_consts[117];
        tmp_tmp_condition_result_12_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_tmp_condition_result_12_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_12_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_12_object_1);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_12_object_1);
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        if (var_preserve_nans == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_6 = var_preserve_nans;
        CHECK_OBJECT(var_start_nans);
        tmp_left_name_7 = var_start_nans;
        CHECK_OBJECT(var_end_nans);
        tmp_right_name_7 = var_end_nans;
        tmp_right_name_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_7, tmp_right_name_7);
        assert(!(tmp_right_name_6 == NULL));
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        assert(!(tmp_result == false));
        tmp_assign_source_21 = tmp_left_name_6;
        var_preserve_nans = tmp_assign_source_21;

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_tmp_condition_result_13_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_10 = par_limit_area;
        tmp_compexpr_right_10 = mod_consts[119];
        tmp_tmp_condition_result_13_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_tmp_condition_result_13_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_13_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_13_object_1);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_13_object_1);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        if (var_preserve_nans == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 399;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_preserve_nans;
        CHECK_OBJECT(var_mid_nans);
        tmp_right_name_8 = var_mid_nans;
        tmp_result = BINARY_OPERATION_BITOR_OBJECT_OBJECT_INPLACE(&tmp_left_name_8, tmp_right_name_8);
        assert(!(tmp_result == false));
        tmp_assign_source_22 = tmp_left_name_8;
        var_preserve_nans = tmp_assign_source_22;

    }
    branch_no_13:;
    branch_end_12:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_11;
        PyObject *tmp_args_element_name_14;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[120]);
        assert(tmp_called_name_11 != NULL);
        if (var_preserve_nans == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_14 = var_preserve_nans;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 402;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_14);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_preserve_nans;
            var_preserve_nans = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_6;
        if (par_yvalues == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = par_yvalues;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 404;
        tmp_assign_source_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[121]);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_name_8;
        if (par_xvalues == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 407;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_xvalues;
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[122]);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xarr == NULL);
        var_xarr = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_expression_name_9;
        int tmp_truth_name_7;
        tmp_called_name_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_name_12 == NULL)) {
            tmp_called_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xarr);
        tmp_expression_name_9 = var_xarr;
        tmp_args_element_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[10]);
        if (tmp_args_element_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 408;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_15);
        Py_DECREF(tmp_args_element_name_15);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_3);

            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_7;
        if (var_xarr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_7 = var_xarr;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 410;
        tmp_assign_source_26 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[124],
            &PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_xarr;
            var_xarr = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    branch_no_14:;
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_tmp_condition_result_15_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_11 = par_method;
        tmp_compexpr_right_11 = mod_consts[126];
        tmp_tmp_condition_result_15_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_11, tmp_compexpr_right_11);
        if (tmp_tmp_condition_result_15_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_condition_result_15_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_15_object_1);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_15_object_1);
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_27;
        if (var_xarr == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_27 = var_xarr;
        assert(var_inds == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_inds = tmp_assign_source_27;
    }
    goto branch_end_15;
    branch_no_15:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_name_13;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_element_name_16;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[127]);
        if (tmp_called_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_xarr == NULL) {
            Py_DECREF(tmp_called_name_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_16 = var_xarr;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 415;
        tmp_assign_source_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_16);
        Py_DECREF(tmp_called_name_13);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_inds == NULL);
        var_inds = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_12 = par_method;
        tmp_compexpr_right_12 = mod_consts[128];
        tmp_res = PySequence_Contains(tmp_compexpr_right_12, tmp_compexpr_left_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_16 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(var_inds);
        tmp_expression_name_11 = var_inds;
        tmp_compexpr_left_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[10]);
        if (tmp_compexpr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_12 == NULL)) {
            tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_13);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[129]);
        if (tmp_compexpr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_13);

            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_17 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        Py_DECREF(tmp_compexpr_left_13);
        Py_DECREF(tmp_compexpr_right_13);
        if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
        assert(tmp_condition_result_17 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_14;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_element_name_17;
        tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_expression_name_13 == NULL)) {
            tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[131]);
        if (tmp_called_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_inds == NULL) {
            Py_DECREF(tmp_called_name_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_17 = var_inds;
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 419;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_17);
        Py_DECREF(tmp_called_name_14);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_inds;
            var_inds = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    branch_no_17:;
    branch_no_16:;
    branch_end_15:;
    {
        bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_14 = par_method;
        tmp_compexpr_right_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_compexpr_right_14 == NULL)) {
            tmp_compexpr_right_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_compexpr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_14, tmp_compexpr_left_14);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_name_15;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_15 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[133]);
        if (tmp_called_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_inds == NULL) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_inds;
        if (var_valid == NULL) {
            Py_DECREF(tmp_called_name_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_1 = var_valid;
        tmp_args_element_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_1);
        if (tmp_args_element_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_15);

            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 428;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_18);
        Py_DECREF(tmp_called_name_15);
        Py_DECREF(tmp_args_element_name_18);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indexer == NULL);
        var_indexer = tmp_assign_source_30;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_16;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_20;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_args_element_name_21;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_16 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[134]);
        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_inds == NULL) {
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = var_inds;
        if (var_invalid == NULL) {
            Py_DECREF(tmp_called_name_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_2 = var_invalid;
        tmp_args_element_name_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_2);
        if (tmp_args_element_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_inds == NULL) {
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = var_inds;
        if (var_valid == NULL) {
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_3 = var_valid;
        tmp_expression_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_3);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indexer);
        tmp_subscript_name_4 = var_indexer;
        tmp_args_element_name_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_4);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_args_element_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_yvalues == NULL) {
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = par_yvalues;
        if (var_valid == NULL) {
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_20);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_5 = var_valid;
        tmp_expression_name_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_5);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_20);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indexer);
        tmp_subscript_name_6 = var_indexer;
        tmp_args_element_name_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_6);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_args_element_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_16);
            Py_DECREF(tmp_args_element_name_19);
            Py_DECREF(tmp_args_element_name_20);

            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_77fe8c5b84dca956d6a594d577677aaa->m_frame.f_lineno = 429;
        {
            PyObject *call_args[] = {tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_16, call_args);
        }

        Py_DECREF(tmp_called_name_16);
        Py_DECREF(tmp_args_element_name_19);
        Py_DECREF(tmp_args_element_name_20);
        Py_DECREF(tmp_args_element_name_21);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_ass_subscribed_1 = var_result;
        if (var_invalid == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_1 = var_invalid;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_inds == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_22 = var_inds;
        if (var_valid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_name_7 = var_valid;
        tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_7);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_23;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_expression_name_24;
            PyObject *tmp_subscript_name_9;
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_6);
            if (par_yvalues == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 435;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_23 = par_yvalues;
            if (var_valid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 435;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_subscript_name_8 = var_valid;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_8);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 435;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_6);
            if (var_inds == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[132]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 436;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_name_24 = var_inds;
            if (var_invalid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 436;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_subscript_name_9 = var_invalid;
            tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_24, tmp_subscript_name_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "ooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_dict_key_3 = mod_consts[31];
        CHECK_OBJECT(par_method);
        tmp_dict_value_3 = par_method;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[72];
        CHECK_OBJECT(par_fill_value);
        tmp_dict_value_3 = par_fill_value;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[86];
        CHECK_OBJECT(par_bounds_error);
        tmp_dict_value_3 = par_bounds_error;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[136];
        CHECK_OBJECT(par_order);
        tmp_dict_value_3 = par_order;
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_ass_subvalue_2 = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_result);
        tmp_ass_subscribed_2 = var_result;
        if (var_invalid == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_2 = var_invalid;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_18:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[91]);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_result == NULL) {
            Py_DECREF(tmp_ass_subvalue_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = var_result;
        CHECK_OBJECT(var_preserve_nans);
        tmp_ass_subscript_3 = var_preserve_nans;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (var_result == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 445;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77fe8c5b84dca956d6a594d577677aaa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_77fe8c5b84dca956d6a594d577677aaa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_77fe8c5b84dca956d6a594d577677aaa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_77fe8c5b84dca956d6a594d577677aaa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_77fe8c5b84dca956d6a594d577677aaa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_77fe8c5b84dca956d6a594d577677aaa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_77fe8c5b84dca956d6a594d577677aaa,
        type_description_1,
        par_xvalues,
        par_yvalues,
        par_method,
        par_limit,
        par_limit_direction,
        par_limit_area,
        par_fill_value,
        par_bounds_error,
        par_order,
        par_kwargs,
        var_preserve_nans,
        var_invalid,
        var_valid,
        var_result,
        var_valid_limit_directions,
        var_valid_limit_areas,
        var_all_nans,
        var_first_valid_index,
        var_start_nans,
        var_last_valid_index,
        var_end_nans,
        var_mid_nans,
        var_xarr,
        var_inds,
        var_indexer
    );


    // Release cached frame if used for exception.
    if (frame_77fe8c5b84dca956d6a594d577677aaa == cache_frame_77fe8c5b84dca956d6a594d577677aaa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_77fe8c5b84dca956d6a594d577677aaa);
        cache_frame_77fe8c5b84dca956d6a594d577677aaa = NULL;
    }

    assertFrameObject(frame_77fe8c5b84dca956d6a594d577677aaa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_xvalues);
    par_xvalues = NULL;
    Py_XDECREF(par_yvalues);
    par_yvalues = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_direction);
    Py_DECREF(par_limit_direction);
    par_limit_direction = NULL;
    Py_XDECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_bounds_error);
    Py_DECREF(par_bounds_error);
    par_bounds_error = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_preserve_nans);
    var_preserve_nans = NULL;
    Py_XDECREF(var_invalid);
    var_invalid = NULL;
    Py_XDECREF(var_valid);
    var_valid = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_valid_limit_directions);
    var_valid_limit_directions = NULL;
    Py_XDECREF(var_valid_limit_areas);
    var_valid_limit_areas = NULL;
    Py_XDECREF(var_all_nans);
    var_all_nans = NULL;
    Py_XDECREF(var_first_valid_index);
    var_first_valid_index = NULL;
    Py_XDECREF(var_start_nans);
    var_start_nans = NULL;
    Py_XDECREF(var_last_valid_index);
    var_last_valid_index = NULL;
    Py_XDECREF(var_end_nans);
    var_end_nans = NULL;
    Py_XDECREF(var_mid_nans);
    var_mid_nans = NULL;
    Py_XDECREF(var_xarr);
    var_xarr = NULL;
    Py_XDECREF(var_inds);
    var_inds = NULL;
    Py_XDECREF(var_indexer);
    var_indexer = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_xvalues);
    par_xvalues = NULL;
    Py_XDECREF(par_yvalues);
    par_yvalues = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_limit_direction);
    par_limit_direction = NULL;
    Py_XDECREF(par_limit_area);
    par_limit_area = NULL;
    CHECK_OBJECT(par_fill_value);
    Py_DECREF(par_fill_value);
    par_fill_value = NULL;
    CHECK_OBJECT(par_bounds_error);
    Py_DECREF(par_bounds_error);
    par_bounds_error = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_preserve_nans);
    var_preserve_nans = NULL;
    Py_XDECREF(var_invalid);
    var_invalid = NULL;
    Py_XDECREF(var_valid);
    var_valid = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_valid_limit_directions);
    var_valid_limit_directions = NULL;
    Py_XDECREF(var_valid_limit_areas);
    var_valid_limit_areas = NULL;
    Py_XDECREF(var_all_nans);
    var_all_nans = NULL;
    Py_XDECREF(var_first_valid_index);
    var_first_valid_index = NULL;
    Py_XDECREF(var_start_nans);
    var_start_nans = NULL;
    Py_XDECREF(var_last_valid_index);
    var_last_valid_index = NULL;
    Py_XDECREF(var_end_nans);
    var_end_nans = NULL;
    Py_XDECREF(var_mid_nans);
    var_mid_nans = NULL;
    Py_XDECREF(var_xarr);
    var_xarr = NULL;
    Py_XDECREF(var_inds);
    var_inds = NULL;
    Py_XDECREF(var_indexer);
    var_indexer = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__9__interpolate_scipy_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *par_y = python_pars[1];
    PyObject *par_new_x = python_pars[2];
    PyObject *par_method = python_pars[3];
    PyObject *par_fill_value = python_pars[4];
    PyObject *par_bounds_error = python_pars[5];
    PyObject *par_order = python_pars[6];
    PyObject *par_kwargs = python_pars[7];
    PyObject *var_extra = NULL;
    PyObject *var_interpolate = NULL;
    PyObject *var_alt_methods = NULL;
    PyObject *var_interp1d_methods = NULL;
    PyObject *var_terp = NULL;
    PyObject *var_new_y = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_599b4d37f8ef02956c43766c0eaa0654;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_599b4d37f8ef02956c43766c0eaa0654 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_599b4d37f8ef02956c43766c0eaa0654)) {
        Py_XDECREF(cache_frame_599b4d37f8ef02956c43766c0eaa0654);

#if _DEBUG_REFCOUNTS
        if (cache_frame_599b4d37f8ef02956c43766c0eaa0654 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_599b4d37f8ef02956c43766c0eaa0654 = MAKE_FUNCTION_FRAME(codeobj_599b4d37f8ef02956c43766c0eaa0654, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_599b4d37f8ef02956c43766c0eaa0654->m_type_description == NULL);
    frame_599b4d37f8ef02956c43766c0eaa0654 = cache_frame_599b4d37f8ef02956c43766c0eaa0654;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_599b4d37f8ef02956c43766c0eaa0654);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_599b4d37f8ef02956c43766c0eaa0654) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_method);
        tmp_format_value_1 = par_method;
        tmp_format_spec_1 = mod_consts[3];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[138];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extra == NULL);
        var_extra = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[140];
        tmp_dict_key_1 = mod_consts[141];
        CHECK_OBJECT(var_extra);
        tmp_dict_value_1 = var_extra;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 457;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[142];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[143];
        tmp_level_name_1 = mod_consts[48];
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 458;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[144],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interpolate == NULL);
        var_interpolate = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_new_x);
        tmp_args_element_name_1 = par_new_x;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 460;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[127], tmp_args_element_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_new_x;
            par_new_x = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_1;
        tmp_dict_key_2 = mod_consts[145];
        CHECK_OBJECT(var_interpolate);
        tmp_expression_name_1 = var_interpolate;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[146]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_2;
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[147];
            if (var_interpolate == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 465;
                type_description_1 = "oooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_name_2 = var_interpolate;
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[148]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "oooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[149];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 466;
                type_description_1 = "oooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[151];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_1 = "oooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_4, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_alt_methods == NULL);
        var_alt_methods = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_x);
        tmp_getattr_target_1 = par_x;
        tmp_getattr_attr_1 = mod_consts[152];
        tmp_getattr_default_1 = Py_False;
        tmp_capi_result_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_capi_result_1);

            exception_lineno = 470;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(par_x);
        tmp_expression_name_3 = par_x;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[122]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 472;
        tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[153],
            &PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = PyTuple_New(2);
        {
            PyObject *tmp_called_instance_3;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_new_x);
            tmp_called_instance_3 = par_new_x;
            frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 472;
            tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1(
                tmp_called_instance_3,
                mod_consts[153],
                &PyTuple_GET_ITEM(mod_consts[125], 0)
            );

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 472;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_5 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_1);
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 472;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 472;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 472;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_8;
            Py_INCREF(par_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_new_x;
            par_new_x = tmp_assign_source_9;
            Py_INCREF(par_new_x);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_1 = par_method;
        tmp_compexpr_right_1 = mod_consts[154];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 474;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_expression_name_4;
        if (var_interpolate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 475;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_interpolate;
        tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[155]);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_alt_methods);
        tmp_dictset_dict = var_alt_methods;
        tmp_dictset_key = mod_consts[154];
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_2 = par_method;
        tmp_compexpr_right_2 = mod_consts[156];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 476;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[157]);

    if (unlikely(tmp_dictset_value == NULL)) {
        tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
    }

    if (tmp_dictset_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 477;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    CHECK_OBJECT(var_alt_methods);
    tmp_dictset_dict = var_alt_methods;
    tmp_dictset_key = mod_consts[156];
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_3 = par_method;
        tmp_compexpr_right_3 = mod_consts[158];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 478;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[159]);

    if (unlikely(tmp_dictset_value == NULL)) {
        tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[159]);
    }

    if (tmp_dictset_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 479;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    CHECK_OBJECT(var_alt_methods);
    tmp_dictset_dict = var_alt_methods;
    tmp_dictset_key = mod_consts[158];
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LIST_COPY(mod_consts[160]);
        assert(var_interp1d_methods == NULL);
        var_interp1d_methods = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_4 = par_method;
        CHECK_OBJECT(var_interp1d_methods);
        tmp_compexpr_right_4 = var_interp1d_methods;
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_5 = par_method;
        tmp_compexpr_right_5 = mod_consts[161];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 490;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(par_order);
        tmp_assign_source_11 = par_order;
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_11;
            Py_INCREF(par_method);
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        if (var_interpolate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 492;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = var_interpolate;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[162]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_3 = par_x;
        tmp_args_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_3 = par_y;
        PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
        tmp_dict_key_3 = mod_consts[163];
        CHECK_OBJECT(par_method);
        tmp_dict_value_3 = par_method;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[72];
        CHECK_OBJECT(par_fill_value);
        tmp_dict_value_3 = par_fill_value;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[86];
        CHECK_OBJECT(par_bounds_error);
        tmp_dict_value_3 = par_bounds_error;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 492;
        tmp_assign_source_12 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_terp == NULL);
        var_terp = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT(var_terp);
        tmp_called_name_3 = var_terp;
        CHECK_OBJECT(par_new_x);
        tmp_args_element_name_2 = par_new_x;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 495;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_y == NULL);
        var_new_y = tmp_assign_source_13;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_6 = par_method;
        tmp_compexpr_right_6 = mod_consts[164];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 496;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_7_object_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        int tmp_truth_name_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_8;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_order);
        tmp_args_element_name_3 = par_order;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 498;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_order);
        tmp_compexpr_left_7 = par_order;
        tmp_compexpr_right_7 = mod_consts[48];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_7, tmp_compexpr_right_7);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 498;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_8 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[165];
        tmp_string_concat_values_2 = PyTuple_New(2);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_order);
            tmp_format_value_2 = par_order;
            tmp_format_spec_2 = mod_consts[3];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 500;
                type_description_1 = "oooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[3], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 499;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 499;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dircall_arg4_1;
        if (var_interpolate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[144]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = var_interpolate;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[166]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_tuple_element_5 = par_x;
        tmp_dircall_arg2_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_5);
        CHECK_OBJECT(par_y);
        tmp_tuple_element_5 = par_y;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_5);
        tmp_dict_key_4 = mod_consts[167];
        CHECK_OBJECT(par_order);
        tmp_dict_value_4 = par_order;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_14 = impl___main__$$$function__8_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_terp == NULL);
        var_terp = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT(var_terp);
        tmp_called_name_5 = var_terp;
        CHECK_OBJECT(par_new_x);
        tmp_args_element_name_4 = par_new_x;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 503;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_y == NULL);
        var_new_y = tmp_assign_source_15;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        CHECK_OBJECT(par_x);
        tmp_expression_name_8 = par_x;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[168]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[169]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_4;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = par_x;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 508;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[121]);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        CHECK_OBJECT(par_y);
        tmp_expression_name_10 = par_y;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[168]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[169]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_operand_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_instance_5;
        if (par_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[171]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 510;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = par_y;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 510;
        tmp_assign_source_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[121]);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_y;
            par_y = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(par_new_x);
        tmp_expression_name_12 = par_new_x;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[168]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[169]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_6;
        if (par_new_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[172]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = par_new_x;
        frame_599b4d37f8ef02956c43766c0eaa0654->m_frame.f_lineno = 512;
        tmp_assign_source_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[121]);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_new_x;
            par_new_x = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_1;
        if (var_alt_methods == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[173]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = var_alt_methods;
        CHECK_OBJECT(par_method);
        tmp_subscript_name_1 = par_method;
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_dircall_arg3_2;
        CHECK_OBJECT(par_method);
        tmp_dircall_arg1_2 = par_method;
        if (par_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = par_x;
        tmp_dircall_arg2_2 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 0, tmp_tuple_element_6);
        if (par_y == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[171]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = par_y;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 1, tmp_tuple_element_6);
        if (par_new_x == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[172]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "oooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = par_new_x;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_2, 2, tmp_tuple_element_6);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_dircall_arg2_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_2 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg3_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
            tmp_assign_source_20 = impl___main__$$$function__6_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_y == NULL);
        var_new_y = tmp_assign_source_20;
    }
    branch_end_7:;
    branch_end_5:;
    if (var_new_y == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 515;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_new_y;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_599b4d37f8ef02956c43766c0eaa0654);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_599b4d37f8ef02956c43766c0eaa0654);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_599b4d37f8ef02956c43766c0eaa0654);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_599b4d37f8ef02956c43766c0eaa0654, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_599b4d37f8ef02956c43766c0eaa0654->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_599b4d37f8ef02956c43766c0eaa0654, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_599b4d37f8ef02956c43766c0eaa0654,
        type_description_1,
        par_x,
        par_y,
        par_new_x,
        par_method,
        par_fill_value,
        par_bounds_error,
        par_order,
        par_kwargs,
        var_extra,
        var_interpolate,
        var_alt_methods,
        var_interp1d_methods,
        var_terp,
        var_new_y
    );


    // Release cached frame if used for exception.
    if (frame_599b4d37f8ef02956c43766c0eaa0654 == cache_frame_599b4d37f8ef02956c43766c0eaa0654) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_599b4d37f8ef02956c43766c0eaa0654);
        cache_frame_599b4d37f8ef02956c43766c0eaa0654 = NULL;
    }

    assertFrameObject(frame_599b4d37f8ef02956c43766c0eaa0654);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(par_new_x);
    par_new_x = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_fill_value);
    par_fill_value = NULL;
    Py_XDECREF(par_bounds_error);
    par_bounds_error = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    CHECK_OBJECT(var_extra);
    Py_DECREF(var_extra);
    var_extra = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    Py_XDECREF(var_alt_methods);
    var_alt_methods = NULL;
    CHECK_OBJECT(var_interp1d_methods);
    Py_DECREF(var_interp1d_methods);
    var_interp1d_methods = NULL;
    Py_XDECREF(var_terp);
    var_terp = NULL;
    Py_XDECREF(var_new_y);
    var_new_y = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_y);
    par_y = NULL;
    Py_XDECREF(par_new_x);
    par_new_x = NULL;
    Py_XDECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_fill_value);
    par_fill_value = NULL;
    Py_XDECREF(par_bounds_error);
    par_bounds_error = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_extra);
    var_extra = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    Py_XDECREF(var_alt_methods);
    var_alt_methods = NULL;
    Py_XDECREF(var_interp1d_methods);
    var_interp1d_methods = NULL;
    Py_XDECREF(var_terp);
    var_terp = NULL;
    Py_XDECREF(var_new_y);
    var_new_y = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__10__from_derivatives(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xi = python_pars[0];
    PyObject *par_yi = python_pars[1];
    PyObject *par_x = python_pars[2];
    PyObject *par_order = python_pars[3];
    PyObject *par_der = python_pars[4];
    PyObject *par_extrapolate = python_pars[5];
    PyObject *var_interpolate = NULL;
    PyObject *var_method = NULL;
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_6283547709c5128ab98c53d250bf8fbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6283547709c5128ab98c53d250bf8fbf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6283547709c5128ab98c53d250bf8fbf)) {
        Py_XDECREF(cache_frame_6283547709c5128ab98c53d250bf8fbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6283547709c5128ab98c53d250bf8fbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6283547709c5128ab98c53d250bf8fbf = MAKE_FUNCTION_FRAME(codeobj_6283547709c5128ab98c53d250bf8fbf, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6283547709c5128ab98c53d250bf8fbf->m_type_description == NULL);
    frame_6283547709c5128ab98c53d250bf8fbf = cache_frame_6283547709c5128ab98c53d250bf8fbf;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6283547709c5128ab98c53d250bf8fbf);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6283547709c5128ab98c53d250bf8fbf) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[142];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[143];
        tmp_level_name_1 = mod_consts[48];
        frame_6283547709c5128ab98c53d250bf8fbf->m_frame.f_lineno = 552;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[144],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interpolate == NULL);
        var_interpolate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(var_interpolate);
        tmp_expression_name_2 = var_interpolate;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[176]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[149]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_method == NULL);
        var_method = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_method);
        tmp_called_name_1 = var_method;
        CHECK_OBJECT(par_xi);
        tmp_tuple_element_1 = par_xi;
        tmp_args_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_called_instance_1;
            PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_yi);
            tmp_called_instance_1 = par_yi;
            frame_6283547709c5128ab98c53d250bf8fbf->m_frame.f_lineno = 556;
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[177],
                &PyTuple_GET_ITEM(mod_consts[178], 0)
            );

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 556;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_args_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_key_1 = mod_consts[179];
        CHECK_OBJECT(par_order);
        tmp_dict_value_1 = par_order;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[180];
        CHECK_OBJECT(par_extrapolate);
        tmp_dict_value_1 = par_extrapolate;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_6283547709c5128ab98c53d250bf8fbf->m_frame.f_lineno = 556;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_m);
        tmp_called_name_2 = var_m;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_6283547709c5128ab98c53d250bf8fbf->m_frame.f_lineno = 558;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6283547709c5128ab98c53d250bf8fbf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6283547709c5128ab98c53d250bf8fbf);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6283547709c5128ab98c53d250bf8fbf);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6283547709c5128ab98c53d250bf8fbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6283547709c5128ab98c53d250bf8fbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6283547709c5128ab98c53d250bf8fbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6283547709c5128ab98c53d250bf8fbf,
        type_description_1,
        par_xi,
        par_yi,
        par_x,
        par_order,
        par_der,
        par_extrapolate,
        var_interpolate,
        var_method,
        var_m
    );


    // Release cached frame if used for exception.
    if (frame_6283547709c5128ab98c53d250bf8fbf == cache_frame_6283547709c5128ab98c53d250bf8fbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_6283547709c5128ab98c53d250bf8fbf);
        cache_frame_6283547709c5128ab98c53d250bf8fbf = NULL;
    }

    assertFrameObject(frame_6283547709c5128ab98c53d250bf8fbf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_xi);
    Py_DECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_der);
    Py_DECREF(par_der);
    par_der = NULL;
    CHECK_OBJECT(par_extrapolate);
    Py_DECREF(par_extrapolate);
    par_extrapolate = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    CHECK_OBJECT(var_method);
    Py_DECREF(var_method);
    var_method = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_xi);
    Py_DECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_order);
    Py_DECREF(par_order);
    par_order = NULL;
    CHECK_OBJECT(par_der);
    Py_DECREF(par_der);
    par_der = NULL;
    CHECK_OBJECT(par_extrapolate);
    Py_DECREF(par_extrapolate);
    par_extrapolate = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    Py_XDECREF(var_method);
    var_method = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__11__akima_interpolate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xi = python_pars[0];
    PyObject *par_yi = python_pars[1];
    PyObject *par_x = python_pars[2];
    PyObject *par_der = python_pars[3];
    PyObject *par_axis = python_pars[4];
    PyObject *var_interpolate = NULL;
    PyObject *var_P = NULL;
    struct Nuitka_FrameObject *frame_0b73a8f75768b3022cabec135065d776;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b73a8f75768b3022cabec135065d776 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0b73a8f75768b3022cabec135065d776)) {
        Py_XDECREF(cache_frame_0b73a8f75768b3022cabec135065d776);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b73a8f75768b3022cabec135065d776 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b73a8f75768b3022cabec135065d776 = MAKE_FUNCTION_FRAME(codeobj_0b73a8f75768b3022cabec135065d776, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0b73a8f75768b3022cabec135065d776->m_type_description == NULL);
    frame_0b73a8f75768b3022cabec135065d776 = cache_frame_0b73a8f75768b3022cabec135065d776;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0b73a8f75768b3022cabec135065d776);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0b73a8f75768b3022cabec135065d776) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[142];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[143];
        tmp_level_name_1 = mod_consts[48];
        frame_0b73a8f75768b3022cabec135065d776->m_frame.f_lineno = 597;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[144],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interpolate == NULL);
        var_interpolate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_interpolate);
        tmp_expression_name_1 = var_interpolate;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[182]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xi);
        tmp_tuple_element_1 = par_xi;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_yi);
        tmp_tuple_element_1 = par_yi;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(par_axis);
        tmp_dict_value_1 = par_axis;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_0b73a8f75768b3022cabec135065d776->m_frame.f_lineno = 599;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 599;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_P == NULL);
        var_P = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT(var_P);
        tmp_called_name_2 = var_P;
        CHECK_OBJECT(par_x);
        tmp_tuple_element_2 = par_x;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[183];
        CHECK_OBJECT(par_der);
        tmp_dict_value_2 = par_der;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_0b73a8f75768b3022cabec135065d776->m_frame.f_lineno = 601;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 601;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b73a8f75768b3022cabec135065d776);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b73a8f75768b3022cabec135065d776);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0b73a8f75768b3022cabec135065d776);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0b73a8f75768b3022cabec135065d776, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b73a8f75768b3022cabec135065d776->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b73a8f75768b3022cabec135065d776, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b73a8f75768b3022cabec135065d776,
        type_description_1,
        par_xi,
        par_yi,
        par_x,
        par_der,
        par_axis,
        var_interpolate,
        var_P
    );


    // Release cached frame if used for exception.
    if (frame_0b73a8f75768b3022cabec135065d776 == cache_frame_0b73a8f75768b3022cabec135065d776) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0b73a8f75768b3022cabec135065d776);
        cache_frame_0b73a8f75768b3022cabec135065d776 = NULL;
    }

    assertFrameObject(frame_0b73a8f75768b3022cabec135065d776);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_der);
    Py_DECREF(par_der);
    par_der = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    CHECK_OBJECT(var_P);
    Py_DECREF(var_P);
    var_P = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    CHECK_OBJECT(par_der);
    Py_DECREF(par_der);
    par_der = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    Py_XDECREF(var_P);
    var_P = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__12__cubicspline_interpolate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xi = python_pars[0];
    PyObject *par_yi = python_pars[1];
    PyObject *par_x = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_bc_type = python_pars[4];
    PyObject *par_extrapolate = python_pars[5];
    PyObject *var_interpolate = NULL;
    PyObject *var_P = NULL;
    struct Nuitka_FrameObject *frame_3a600349961d3d17149dce7cee72cc71;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3a600349961d3d17149dce7cee72cc71 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3a600349961d3d17149dce7cee72cc71)) {
        Py_XDECREF(cache_frame_3a600349961d3d17149dce7cee72cc71);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3a600349961d3d17149dce7cee72cc71 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3a600349961d3d17149dce7cee72cc71 = MAKE_FUNCTION_FRAME(codeobj_3a600349961d3d17149dce7cee72cc71, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3a600349961d3d17149dce7cee72cc71->m_type_description == NULL);
    frame_3a600349961d3d17149dce7cee72cc71 = cache_frame_3a600349961d3d17149dce7cee72cc71;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3a600349961d3d17149dce7cee72cc71);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3a600349961d3d17149dce7cee72cc71) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[142];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[143];
        tmp_level_name_1 = mod_consts[48];
        frame_3a600349961d3d17149dce7cee72cc71->m_frame.f_lineno = 674;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[144],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[144]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 674;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_interpolate == NULL);
        var_interpolate = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_interpolate);
        tmp_expression_name_1 = var_interpolate;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[185]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xi);
        tmp_tuple_element_1 = par_xi;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_yi);
        tmp_tuple_element_1 = par_yi;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[65];
        CHECK_OBJECT(par_axis);
        tmp_dict_value_1 = par_axis;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[186];
        CHECK_OBJECT(par_bc_type);
        tmp_dict_value_1 = par_bc_type;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[180];
        CHECK_OBJECT(par_extrapolate);
        tmp_dict_value_1 = par_extrapolate;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_3a600349961d3d17149dce7cee72cc71->m_frame.f_lineno = 676;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_P == NULL);
        var_P = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(var_P);
        tmp_called_name_2 = var_P;
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_3a600349961d3d17149dce7cee72cc71->m_frame.f_lineno = 680;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 680;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a600349961d3d17149dce7cee72cc71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a600349961d3d17149dce7cee72cc71);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3a600349961d3d17149dce7cee72cc71);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3a600349961d3d17149dce7cee72cc71, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3a600349961d3d17149dce7cee72cc71->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3a600349961d3d17149dce7cee72cc71, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3a600349961d3d17149dce7cee72cc71,
        type_description_1,
        par_xi,
        par_yi,
        par_x,
        par_axis,
        par_bc_type,
        par_extrapolate,
        var_interpolate,
        var_P
    );


    // Release cached frame if used for exception.
    if (frame_3a600349961d3d17149dce7cee72cc71 == cache_frame_3a600349961d3d17149dce7cee72cc71) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3a600349961d3d17149dce7cee72cc71);
        cache_frame_3a600349961d3d17149dce7cee72cc71 = NULL;
    }

    assertFrameObject(frame_3a600349961d3d17149dce7cee72cc71);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(par_bc_type);
    par_bc_type = NULL;
    Py_XDECREF(par_extrapolate);
    par_extrapolate = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    CHECK_OBJECT(var_P);
    Py_DECREF(var_P);
    var_P = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_xi);
    par_xi = NULL;
    Py_XDECREF(par_yi);
    par_yi = NULL;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    Py_XDECREF(par_bc_type);
    par_bc_type = NULL;
    Py_XDECREF(par_extrapolate);
    par_extrapolate = NULL;
    Py_XDECREF(var_interpolate);
    var_interpolate = NULL;
    Py_XDECREF(var_P);
    var_P = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__13__interpolate_with_limit_area(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_limit = python_pars[2];
    PyObject *par_limit_area = python_pars[3];
    PyObject *var_invalid = NULL;
    PyObject *var_first = NULL;
    PyObject *var_last = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    struct Nuitka_FrameObject *frame_7179385a5a558b7cce7f39d872b182d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7179385a5a558b7cce7f39d872b182d2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7179385a5a558b7cce7f39d872b182d2)) {
        Py_XDECREF(cache_frame_7179385a5a558b7cce7f39d872b182d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7179385a5a558b7cce7f39d872b182d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7179385a5a558b7cce7f39d872b182d2 = MAKE_FUNCTION_FRAME(codeobj_7179385a5a558b7cce7f39d872b182d2, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7179385a5a558b7cce7f39d872b182d2->m_type_description == NULL);
    frame_7179385a5a558b7cce7f39d872b182d2 = cache_frame_7179385a5a558b7cce7f39d872b182d2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7179385a5a558b7cce7f39d872b182d2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7179385a5a558b7cce7f39d872b182d2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        frame_7179385a5a558b7cce7f39d872b182d2->m_frame.f_lineno = 706;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 706;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_invalid == NULL);
        var_invalid = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_invalid);
        tmp_called_instance_1 = var_invalid;
        frame_7179385a5a558b7cce7f39d872b182d2->m_frame.f_lineno = 708;
        tmp_operand_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[94]);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 708;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_tuple_element_1 = par_values;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[111]);
        frame_7179385a5a558b7cce7f39d872b182d2->m_frame.f_lineno = 709;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 709;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_first == NULL);
        var_first = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_first);
        tmp_compexpr_left_1 = var_first;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[48];
        {
            PyObject *old = var_first;
            assert(old != NULL);
            var_first = tmp_assign_source_3;
            Py_INCREF(var_first);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_tuple_element_2 = par_values;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[112]);
        frame_7179385a5a558b7cce7f39d872b182d2->m_frame.f_lineno = 712;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 712;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_last == NULL);
        var_last = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT(var_last);
        tmp_compexpr_left_2 = var_last;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_2 == tmp_compexpr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_values);
        tmp_len_arg_1 = par_values;
        tmp_assign_source_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 714;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_last;
            assert(old != NULL);
            var_last = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 717;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_values;
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_dict_key_1 = mod_consts[31];
        CHECK_OBJECT(par_method);
        tmp_dict_value_1 = par_method;
        tmp_kwargs_name_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_7179385a5a558b7cce7f39d872b182d2->m_frame.f_lineno = 716;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 716;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_values;
            par_values = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_3 = par_limit_area;
        tmp_compexpr_right_3 = mod_consts[117];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 722;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 722;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_ass_subvalue_1 = Py_False;
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 723;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_1 = var_invalid;
        CHECK_OBJECT(var_first);
        tmp_start_name_1 = var_first;
        CHECK_OBJECT(var_last);
        tmp_left_name_1 = var_last;
        tmp_right_name_1 = mod_consts[57];
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_stop_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = MAKE_SLICEOBJ2(tmp_start_name_1, tmp_stop_name_1);
        Py_DECREF(tmp_stop_name_1);
        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 723;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_4 = par_limit_area;
        tmp_compexpr_right_4 = mod_consts[119];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 724;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 724;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        assert(tmp_assign_unpack_1__assign_source == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_stop_name_2;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_2 = var_invalid;
        CHECK_OBJECT(var_first);
        tmp_stop_name_2 = var_first;
        tmp_ass_subscript_2 = MAKE_SLICEOBJ1(tmp_stop_name_2);
        assert(!(tmp_ass_subscript_2 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        PyObject *tmp_start_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_stop_name_3;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_ass_subvalue_3 = tmp_assign_unpack_1__assign_source;
        if (var_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 725;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_3 = var_invalid;
        CHECK_OBJECT(var_last);
        tmp_left_name_2 = var_last;
        tmp_right_name_2 = mod_consts[57];
        tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_2);
        if (tmp_start_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_stop_name_3 = Py_None;
        tmp_ass_subscript_3 = MAKE_SLICEOBJ2(tmp_start_name_2, tmp_stop_name_3);
        Py_DECREF(tmp_start_name_2);
        assert(!(tmp_ass_subscript_3 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscript_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 725;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    branch_no_5:;
    branch_end_4:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[91]);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_ass_subscribed_4 = par_values;
        if (var_invalid == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 727;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = var_invalid;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 727;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    if (par_values == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 729;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_values;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7179385a5a558b7cce7f39d872b182d2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7179385a5a558b7cce7f39d872b182d2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7179385a5a558b7cce7f39d872b182d2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7179385a5a558b7cce7f39d872b182d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7179385a5a558b7cce7f39d872b182d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7179385a5a558b7cce7f39d872b182d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7179385a5a558b7cce7f39d872b182d2,
        type_description_1,
        par_values,
        par_method,
        par_limit,
        par_limit_area,
        var_invalid,
        var_first,
        var_last
    );


    // Release cached frame if used for exception.
    if (frame_7179385a5a558b7cce7f39d872b182d2 == cache_frame_7179385a5a558b7cce7f39d872b182d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7179385a5a558b7cce7f39d872b182d2);
        cache_frame_7179385a5a558b7cce7f39d872b182d2 = NULL;
    }

    assertFrameObject(frame_7179385a5a558b7cce7f39d872b182d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    Py_XDECREF(var_invalid);
    var_invalid = NULL;
    Py_XDECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    Py_XDECREF(var_invalid);
    var_invalid = NULL;
    Py_XDECREF(var_first);
    var_first = NULL;
    Py_XDECREF(var_last);
    var_last = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__14_interpolate_2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_axis = python_pars[2];
    PyObject *par_limit = python_pars[3];
    PyObject *par_limit_area = python_pars[4];
    PyObject *var_transf = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_tvalues = NULL;
    PyObject *var_result = NULL;
    PyObject *var__ = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_9d022052c277b544f4dba9d0640e3370;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_9d022052c277b544f4dba9d0640e3370 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9d022052c277b544f4dba9d0640e3370)) {
        Py_XDECREF(cache_frame_9d022052c277b544f4dba9d0640e3370);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d022052c277b544f4dba9d0640e3370 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d022052c277b544f4dba9d0640e3370 = MAKE_FUNCTION_FRAME(codeobj_9d022052c277b544f4dba9d0640e3370, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9d022052c277b544f4dba9d0640e3370->m_type_description == NULL);
    frame_9d022052c277b544f4dba9d0640e3370 = cache_frame_9d022052c277b544f4dba9d0640e3370;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9d022052c277b544f4dba9d0640e3370);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9d022052c277b544f4dba9d0640e3370) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_limit_area);
        tmp_compexpr_left_1 = par_limit_area;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[81]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[189]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[189]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 763;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 764;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[31];
        CHECK_OBJECT(par_method);
        tmp_dict_value_1 = par_method;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[67];
        CHECK_OBJECT(par_limit_area);
        tmp_dict_value_1 = par_limit_area;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 763;
        tmp_args_element_name_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 763;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_axis);
        tmp_args_element_name_2 = par_axis;
        CHECK_OBJECT(par_values);
        tmp_args_element_name_3 = par_values;
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 762;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 762;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_axis);
        tmp_compexpr_left_2 = par_axis;
        tmp_compexpr_right_2 = mod_consts[48];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 773;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;


        tmp_assign_source_1 = MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda();

        goto condexpr_end_1;
        condexpr_false_1:;


        tmp_assign_source_1 = MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda();

        condexpr_end_1:;
        assert(var_transf == NULL);
        var_transf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_values);
        tmp_expression_name_2 = par_values;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[50]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 776;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ndim == NULL);
        var_ndim = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 777;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_values;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[50]);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = mod_consts[57];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 777;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 777;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_axis);
        tmp_compexpr_left_4 = par_axis;
        tmp_compexpr_right_4 = mod_consts[48];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 778;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 778;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[193];
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 779;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AssertionError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 779;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_expression_name_5;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_values;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[177]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = mod_consts[52];
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_values;
        tmp_right_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[13]);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_arg_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 780;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_4);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 780;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_values;
            par_values = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_args_element_name_5 = par_method;
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 782;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 782;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT(var_transf);
        tmp_called_name_5 = var_transf;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 783;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = par_values;
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 783;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 783;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tvalues == NULL);
        var_tvalues = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(par_method);
        tmp_compexpr_left_5 = par_method;
        tmp_compexpr_right_5 = mod_consts[23];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 784;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 784;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tvalues);
        tmp_tuple_element_2 = var_tvalues;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_2 = par_limit;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 785;
        tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 785;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 785;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 785;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 785;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 785;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_result = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_10);
        var__ = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    goto branch_end_4;
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_tvalues);
        tmp_tuple_element_3 = var_tvalues;
        tmp_args_name_3 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_3);
        tmp_dict_key_3 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_3 = par_limit;
        tmp_kwargs_name_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 787;
        tmp_iter_arg_2 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_args_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 787;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 787;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 787;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooo";
                    exception_lineno = 787;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 787;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_result = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_15);
        var__ = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    branch_end_4:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_8;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT(var_transf);
        tmp_called_name_8 = var_transf;
        CHECK_OBJECT(var_result);
        tmp_args_element_name_7 = var_result;
        frame_9d022052c277b544f4dba9d0640e3370->m_frame.f_lineno = 789;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_16;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_6_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_ndim);
        tmp_compexpr_left_6 = var_ndim;
        tmp_compexpr_right_6 = mod_consts[57];
        tmp_tmp_condition_result_6_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_6_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 791;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_6_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_6_object_1);

            exception_lineno = 791;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_6_object_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_result);
        tmp_expression_name_6 = var_result;
        tmp_subscript_name_1 = mod_consts[48];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_1, 0);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 792;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    branch_no_5:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d022052c277b544f4dba9d0640e3370);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d022052c277b544f4dba9d0640e3370);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9d022052c277b544f4dba9d0640e3370);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d022052c277b544f4dba9d0640e3370, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d022052c277b544f4dba9d0640e3370->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d022052c277b544f4dba9d0640e3370, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d022052c277b544f4dba9d0640e3370,
        type_description_1,
        par_values,
        par_method,
        par_axis,
        par_limit,
        par_limit_area,
        var_transf,
        var_ndim,
        var_tvalues,
        var_result,
        var__
    );


    // Release cached frame if used for exception.
    if (frame_9d022052c277b544f4dba9d0640e3370 == cache_frame_9d022052c277b544f4dba9d0640e3370) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9d022052c277b544f4dba9d0640e3370);
        cache_frame_9d022052c277b544f4dba9d0640e3370 = NULL;
    }

    assertFrameObject(frame_9d022052c277b544f4dba9d0640e3370);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    Py_XDECREF(var_transf);
    var_transf = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    Py_XDECREF(var_tvalues);
    var_tvalues = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    Py_XDECREF(par_axis);
    par_axis = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_limit_area);
    Py_DECREF(par_limit_area);
    par_limit_area = NULL;
    Py_XDECREF(var_transf);
    var_transf = NULL;
    Py_XDECREF(var_ndim);
    var_ndim = NULL;
    Py_XDECREF(var_tvalues);
    var_tvalues = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_9950deb7a3afa5372fb54e4b9953135d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9950deb7a3afa5372fb54e4b9953135d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9950deb7a3afa5372fb54e4b9953135d)) {
        Py_XDECREF(cache_frame_9950deb7a3afa5372fb54e4b9953135d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9950deb7a3afa5372fb54e4b9953135d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9950deb7a3afa5372fb54e4b9953135d = MAKE_FUNCTION_FRAME(codeobj_9950deb7a3afa5372fb54e4b9953135d, module_pandas$core$missing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9950deb7a3afa5372fb54e4b9953135d->m_type_description == NULL);
    frame_9950deb7a3afa5372fb54e4b9953135d = cache_frame_9950deb7a3afa5372fb54e4b9953135d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9950deb7a3afa5372fb54e4b9953135d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9950deb7a3afa5372fb54e4b9953135d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(par_x);
        tmp_expression_name_1 = par_x;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[197]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 773;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9950deb7a3afa5372fb54e4b9953135d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9950deb7a3afa5372fb54e4b9953135d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9950deb7a3afa5372fb54e4b9953135d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9950deb7a3afa5372fb54e4b9953135d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9950deb7a3afa5372fb54e4b9953135d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9950deb7a3afa5372fb54e4b9953135d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9950deb7a3afa5372fb54e4b9953135d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_9950deb7a3afa5372fb54e4b9953135d == cache_frame_9950deb7a3afa5372fb54e4b9953135d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9950deb7a3afa5372fb54e4b9953135d);
        cache_frame_9950deb7a3afa5372fb54e4b9953135d = NULL;
    }

    assertFrameObject(frame_9950deb7a3afa5372fb54e4b9953135d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__15__fillna_prep(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_mask = python_pars[1];
    struct Nuitka_FrameObject *frame_20660df29f5b72efb21702b1276df9aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20660df29f5b72efb21702b1276df9aa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_20660df29f5b72efb21702b1276df9aa)) {
        Py_XDECREF(cache_frame_20660df29f5b72efb21702b1276df9aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20660df29f5b72efb21702b1276df9aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20660df29f5b72efb21702b1276df9aa = MAKE_FUNCTION_FRAME(codeobj_20660df29f5b72efb21702b1276df9aa, module_pandas$core$missing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_20660df29f5b72efb21702b1276df9aa->m_type_description == NULL);
    frame_20660df29f5b72efb21702b1276df9aa = cache_frame_20660df29f5b72efb21702b1276df9aa;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_20660df29f5b72efb21702b1276df9aa);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_20660df29f5b72efb21702b1276df9aa) == 2); // Frame stack

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_mask);
        tmp_compexpr_left_1 = par_mask;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        frame_20660df29f5b72efb21702b1276df9aa->m_frame.f_lineno = 801;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 801;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(par_mask);
        tmp_expression_name_1 = par_mask;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[124]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 803;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[198]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 803;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_20660df29f5b72efb21702b1276df9aa->m_frame.f_lineno = 803;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 803;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            par_mask = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_20660df29f5b72efb21702b1276df9aa);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_20660df29f5b72efb21702b1276df9aa);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_20660df29f5b72efb21702b1276df9aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20660df29f5b72efb21702b1276df9aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20660df29f5b72efb21702b1276df9aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20660df29f5b72efb21702b1276df9aa,
        type_description_1,
        par_values,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_20660df29f5b72efb21702b1276df9aa == cache_frame_20660df29f5b72efb21702b1276df9aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_20660df29f5b72efb21702b1276df9aa);
        cache_frame_20660df29f5b72efb21702b1276df9aa = NULL;
    }

    assertFrameObject(frame_20660df29f5b72efb21702b1276df9aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(par_mask);
    tmp_return_value = par_mask;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    par_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_values);
    Py_DECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__16__datetimelike_compat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_new_func = NULL;
    struct Nuitka_FrameObject *frame_4aa4eaec884c199228ae8f4794af4ef7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4aa4eaec884c199228ae8f4794af4ef7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4aa4eaec884c199228ae8f4794af4ef7)) {
        Py_XDECREF(cache_frame_4aa4eaec884c199228ae8f4794af4ef7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4aa4eaec884c199228ae8f4794af4ef7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4aa4eaec884c199228ae8f4794af4ef7 = MAKE_FUNCTION_FRAME(codeobj_4aa4eaec884c199228ae8f4794af4ef7, module_pandas$core$missing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_4aa4eaec884c199228ae8f4794af4ef7->m_type_description == NULL);
    frame_4aa4eaec884c199228ae8f4794af4ef7 = cache_frame_4aa4eaec884c199228ae8f4794af4ef7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_4aa4eaec884c199228ae8f4794af4ef7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_4aa4eaec884c199228ae8f4794af4ef7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_1;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[199]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[199]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_args_element_name_1 = Nuitka_Cell_GET(par_func);
        frame_4aa4eaec884c199228ae8f4794af4ef7->m_frame.f_lineno = 812;
        tmp_called_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[200];
        Py_INCREF(tmp_defaults_1);

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_name_2 = MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func(tmp_defaults_1, tmp_closure_1);

        frame_4aa4eaec884c199228ae8f4794af4ef7->m_frame.f_lineno = 812;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_new_func == NULL);
        var_new_func = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_args_element_name_3 == NULL)) {
            tmp_args_element_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_new_func);
        tmp_args_element_name_4 = var_new_func;
        frame_4aa4eaec884c199228ae8f4794af4ef7->m_frame.f_lineno = 824;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 824;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4aa4eaec884c199228ae8f4794af4ef7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_4aa4eaec884c199228ae8f4794af4ef7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_4aa4eaec884c199228ae8f4794af4ef7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4aa4eaec884c199228ae8f4794af4ef7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4aa4eaec884c199228ae8f4794af4ef7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4aa4eaec884c199228ae8f4794af4ef7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4aa4eaec884c199228ae8f4794af4ef7,
        type_description_1,
        par_func,
        var_new_func
    );


    // Release cached frame if used for exception.
    if (frame_4aa4eaec884c199228ae8f4794af4ef7 == cache_frame_4aa4eaec884c199228ae8f4794af4ef7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_4aa4eaec884c199228ae8f4794af4ef7);
        cache_frame_4aa4eaec884c199228ae8f4794af4ef7 = NULL;
    }

    assertFrameObject(frame_4aa4eaec884c199228ae8f4794af4ef7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    CHECK_OBJECT(var_new_func);
    Py_DECREF(var_new_func);
    var_new_func = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    par_func = NULL;
    Py_XDECREF(var_new_func);
    var_new_func = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *par_mask = python_pars[2];
    PyObject *var_result = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_95b1cdb510ac1898fe99a62210dacb4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_95b1cdb510ac1898fe99a62210dacb4f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_95b1cdb510ac1898fe99a62210dacb4f)) {
        Py_XDECREF(cache_frame_95b1cdb510ac1898fe99a62210dacb4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_95b1cdb510ac1898fe99a62210dacb4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_95b1cdb510ac1898fe99a62210dacb4f = MAKE_FUNCTION_FRAME(codeobj_95b1cdb510ac1898fe99a62210dacb4f, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_95b1cdb510ac1898fe99a62210dacb4f->m_type_description == NULL);
    frame_95b1cdb510ac1898fe99a62210dacb4f = cache_frame_95b1cdb510ac1898fe99a62210dacb4f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_95b1cdb510ac1898fe99a62210dacb4f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_95b1cdb510ac1898fe99a62210dacb4f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        int tmp_truth_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_expression_name_1 = par_values;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[10]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 814;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 814;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 814;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_mask);
        tmp_compexpr_left_1 = par_mask;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 817;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_values;
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 817;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 817;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 819;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_called_name_3 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 819;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }

        tmp_called_instance_1 = par_values;
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 819;
        tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[124],
            &PyTuple_GET_ITEM(mod_consts[125], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[17];
        CHECK_OBJECT(par_mask);
        tmp_dict_value_1 = par_mask;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 819;
        tmp_iter_arg_1 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 819;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooc";
            exception_lineno = 819;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooc";
            exception_lineno = 819;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooc";
                    exception_lineno = 819;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[7];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooc";
            exception_lineno = 819;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_result == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_result = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_6;
            Py_INCREF(par_mask);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    {
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_result);
        tmp_expression_name_2 = var_result;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[124]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 820;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_values;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[10]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);

            exception_lineno = 820;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 820;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 820;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_mask);
        tmp_tuple_element_2 = par_mask;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 822;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 822;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_values;
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
        tmp_dict_key_2 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_2 = par_limit;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[17];
        CHECK_OBJECT(par_mask);
        tmp_dict_value_2 = par_mask;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame.f_lineno = 822;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 822;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b1cdb510ac1898fe99a62210dacb4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b1cdb510ac1898fe99a62210dacb4f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_95b1cdb510ac1898fe99a62210dacb4f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_95b1cdb510ac1898fe99a62210dacb4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_95b1cdb510ac1898fe99a62210dacb4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_95b1cdb510ac1898fe99a62210dacb4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_95b1cdb510ac1898fe99a62210dacb4f,
        type_description_1,
        par_values,
        par_limit,
        par_mask,
        var_result,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_95b1cdb510ac1898fe99a62210dacb4f == cache_frame_95b1cdb510ac1898fe99a62210dacb4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_95b1cdb510ac1898fe99a62210dacb4f);
        cache_frame_95b1cdb510ac1898fe99a62210dacb4f = NULL;
    }

    assertFrameObject(frame_95b1cdb510ac1898fe99a62210dacb4f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    CHECK_OBJECT(par_mask);
    Py_DECREF(par_mask);
    par_mask = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    CHECK_OBJECT(par_limit);
    Py_DECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__17__pad_1d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *par_mask = python_pars[2];
    struct Nuitka_FrameObject *frame_3eb442ce731d1f9c600f01cd625cb77e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3eb442ce731d1f9c600f01cd625cb77e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3eb442ce731d1f9c600f01cd625cb77e)) {
        Py_XDECREF(cache_frame_3eb442ce731d1f9c600f01cd625cb77e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3eb442ce731d1f9c600f01cd625cb77e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3eb442ce731d1f9c600f01cd625cb77e = MAKE_FUNCTION_FRAME(codeobj_3eb442ce731d1f9c600f01cd625cb77e, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3eb442ce731d1f9c600f01cd625cb77e->m_type_description == NULL);
    frame_3eb442ce731d1f9c600f01cd625cb77e = cache_frame_3eb442ce731d1f9c600f01cd625cb77e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3eb442ce731d1f9c600f01cd625cb77e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3eb442ce731d1f9c600f01cd625cb77e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        CHECK_OBJECT(par_mask);
        tmp_args_element_name_2 = par_mask;
        frame_3eb442ce731d1f9c600f01cd625cb77e->m_frame.f_lineno = 833;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 833;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[207]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_tuple_element_1 = par_values;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mask);
        tmp_tuple_element_1 = par_mask;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_3eb442ce731d1f9c600f01cd625cb77e->m_frame.f_lineno = 834;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 834;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 835;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (par_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 835;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = par_mask;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3eb442ce731d1f9c600f01cd625cb77e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3eb442ce731d1f9c600f01cd625cb77e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3eb442ce731d1f9c600f01cd625cb77e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3eb442ce731d1f9c600f01cd625cb77e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3eb442ce731d1f9c600f01cd625cb77e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3eb442ce731d1f9c600f01cd625cb77e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3eb442ce731d1f9c600f01cd625cb77e,
        type_description_1,
        par_values,
        par_limit,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_3eb442ce731d1f9c600f01cd625cb77e == cache_frame_3eb442ce731d1f9c600f01cd625cb77e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3eb442ce731d1f9c600f01cd625cb77e);
        cache_frame_3eb442ce731d1f9c600f01cd625cb77e = NULL;
    }

    assertFrameObject(frame_3eb442ce731d1f9c600f01cd625cb77e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__18__backfill_1d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *par_mask = python_pars[2];
    struct Nuitka_FrameObject *frame_3cb7d144f883c00f36c0ad574cd095f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3cb7d144f883c00f36c0ad574cd095f8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3cb7d144f883c00f36c0ad574cd095f8)) {
        Py_XDECREF(cache_frame_3cb7d144f883c00f36c0ad574cd095f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3cb7d144f883c00f36c0ad574cd095f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3cb7d144f883c00f36c0ad574cd095f8 = MAKE_FUNCTION_FRAME(codeobj_3cb7d144f883c00f36c0ad574cd095f8, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3cb7d144f883c00f36c0ad574cd095f8->m_type_description == NULL);
    frame_3cb7d144f883c00f36c0ad574cd095f8 = cache_frame_3cb7d144f883c00f36c0ad574cd095f8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3cb7d144f883c00f36c0ad574cd095f8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3cb7d144f883c00f36c0ad574cd095f8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 844;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        CHECK_OBJECT(par_mask);
        tmp_args_element_name_2 = par_mask;
        frame_3cb7d144f883c00f36c0ad574cd095f8->m_frame.f_lineno = 844;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 844;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[208]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_tuple_element_1 = par_values;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mask);
        tmp_tuple_element_1 = par_mask;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_3cb7d144f883c00f36c0ad574cd095f8->m_frame.f_lineno = 845;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 845;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_tuple_element_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 846;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (par_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 846;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = par_mask;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3cb7d144f883c00f36c0ad574cd095f8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3cb7d144f883c00f36c0ad574cd095f8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3cb7d144f883c00f36c0ad574cd095f8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3cb7d144f883c00f36c0ad574cd095f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3cb7d144f883c00f36c0ad574cd095f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3cb7d144f883c00f36c0ad574cd095f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3cb7d144f883c00f36c0ad574cd095f8,
        type_description_1,
        par_values,
        par_limit,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_3cb7d144f883c00f36c0ad574cd095f8 == cache_frame_3cb7d144f883c00f36c0ad574cd095f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3cb7d144f883c00f36c0ad574cd095f8);
        cache_frame_3cb7d144f883c00f36c0ad574cd095f8 = NULL;
    }

    assertFrameObject(frame_3cb7d144f883c00f36c0ad574cd095f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__19__pad_2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *par_mask = python_pars[2];
    struct Nuitka_FrameObject *frame_52050ad3fab795e9530ef94eed88a4d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_52050ad3fab795e9530ef94eed88a4d7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_52050ad3fab795e9530ef94eed88a4d7)) {
        Py_XDECREF(cache_frame_52050ad3fab795e9530ef94eed88a4d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_52050ad3fab795e9530ef94eed88a4d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_52050ad3fab795e9530ef94eed88a4d7 = MAKE_FUNCTION_FRAME(codeobj_52050ad3fab795e9530ef94eed88a4d7, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_52050ad3fab795e9530ef94eed88a4d7->m_type_description == NULL);
    frame_52050ad3fab795e9530ef94eed88a4d7 = cache_frame_52050ad3fab795e9530ef94eed88a4d7;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_52050ad3fab795e9530ef94eed88a4d7);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_52050ad3fab795e9530ef94eed88a4d7) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        CHECK_OBJECT(par_mask);
        tmp_args_element_name_2 = par_mask;
        frame_52050ad3fab795e9530ef94eed88a4d7->m_frame.f_lineno = 851;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 851;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_2;
        int tmp_truth_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[94]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_expression_name_2 = par_values;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 853;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_52050ad3fab795e9530ef94eed88a4d7->m_frame.f_lineno = 853;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 853;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 853;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[209]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 854;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_values;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mask);
        tmp_tuple_element_1 = par_mask;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_52050ad3fab795e9530ef94eed88a4d7->m_frame.f_lineno = 854;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 854;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 858;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (par_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 858;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = par_mask;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52050ad3fab795e9530ef94eed88a4d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_52050ad3fab795e9530ef94eed88a4d7);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_52050ad3fab795e9530ef94eed88a4d7);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_52050ad3fab795e9530ef94eed88a4d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_52050ad3fab795e9530ef94eed88a4d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_52050ad3fab795e9530ef94eed88a4d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_52050ad3fab795e9530ef94eed88a4d7,
        type_description_1,
        par_values,
        par_limit,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_52050ad3fab795e9530ef94eed88a4d7 == cache_frame_52050ad3fab795e9530ef94eed88a4d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_52050ad3fab795e9530ef94eed88a4d7);
        cache_frame_52050ad3fab795e9530ef94eed88a4d7 = NULL;
    }

    assertFrameObject(frame_52050ad3fab795e9530ef94eed88a4d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__20__backfill_2d(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *par_mask = python_pars[2];
    struct Nuitka_FrameObject *frame_c4c83a3e5d7805c1d7465f2986cef087;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c4c83a3e5d7805c1d7465f2986cef087 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c4c83a3e5d7805c1d7465f2986cef087)) {
        Py_XDECREF(cache_frame_c4c83a3e5d7805c1d7465f2986cef087);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c4c83a3e5d7805c1d7465f2986cef087 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c4c83a3e5d7805c1d7465f2986cef087 = MAKE_FUNCTION_FRAME(codeobj_c4c83a3e5d7805c1d7465f2986cef087, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c4c83a3e5d7805c1d7465f2986cef087->m_type_description == NULL);
    frame_c4c83a3e5d7805c1d7465f2986cef087 = cache_frame_c4c83a3e5d7805c1d7465f2986cef087;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c4c83a3e5d7805c1d7465f2986cef087);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c4c83a3e5d7805c1d7465f2986cef087) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[206]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 863;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_args_element_name_1 = par_values;
        CHECK_OBJECT(par_mask);
        tmp_args_element_name_2 = par_mask;
        frame_c4c83a3e5d7805c1d7465f2986cef087->m_frame.f_lineno = 863;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 863;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mask;
            assert(old != NULL);
            par_mask = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_2;
        int tmp_truth_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[94]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_values);
        tmp_expression_name_2 = par_values;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c4c83a3e5d7805c1d7465f2986cef087->m_frame.f_lineno = 865;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_3);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 865;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 866;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[210]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 866;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_values == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 866;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_values;
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_mask);
        tmp_tuple_element_1 = par_mask;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[66];
        CHECK_OBJECT(par_limit);
        tmp_dict_value_1 = par_limit;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_c4c83a3e5d7805c1d7465f2986cef087->m_frame.f_lineno = 866;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 866;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_2;
        if (par_values == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 870;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_values;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (par_mask == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 870;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = par_mask;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4c83a3e5d7805c1d7465f2986cef087);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4c83a3e5d7805c1d7465f2986cef087);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c4c83a3e5d7805c1d7465f2986cef087);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c4c83a3e5d7805c1d7465f2986cef087, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c4c83a3e5d7805c1d7465f2986cef087->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c4c83a3e5d7805c1d7465f2986cef087, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c4c83a3e5d7805c1d7465f2986cef087,
        type_description_1,
        par_values,
        par_limit,
        par_mask
    );


    // Release cached frame if used for exception.
    if (frame_c4c83a3e5d7805c1d7465f2986cef087 == cache_frame_c4c83a3e5d7805c1d7465f2986cef087) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c4c83a3e5d7805c1d7465f2986cef087);
        cache_frame_c4c83a3e5d7805c1d7465f2986cef087 = NULL;
    }

    assertFrameObject(frame_c4c83a3e5d7805c1d7465f2986cef087);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_values);
    par_values = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(par_mask);
    par_mask = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__21_get_fill_func(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    PyObject *par_ndim = python_pars[1];
    struct Nuitka_FrameObject *frame_f4fcf62e19798657d07e72bc5eeaaa99;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f4fcf62e19798657d07e72bc5eeaaa99 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f4fcf62e19798657d07e72bc5eeaaa99)) {
        Py_XDECREF(cache_frame_f4fcf62e19798657d07e72bc5eeaaa99);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f4fcf62e19798657d07e72bc5eeaaa99 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f4fcf62e19798657d07e72bc5eeaaa99 = MAKE_FUNCTION_FRAME(codeobj_f4fcf62e19798657d07e72bc5eeaaa99, module_pandas$core$missing, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f4fcf62e19798657d07e72bc5eeaaa99->m_type_description == NULL);
    frame_f4fcf62e19798657d07e72bc5eeaaa99 = cache_frame_f4fcf62e19798657d07e72bc5eeaaa99;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f4fcf62e19798657d07e72bc5eeaaa99);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f4fcf62e19798657d07e72bc5eeaaa99) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 877;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_args_element_name_1 = par_method;
        frame_f4fcf62e19798657d07e72bc5eeaaa99->m_frame.f_lineno = 877;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 877;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_method;
            assert(old != NULL);
            par_method = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_ndim);
        tmp_compexpr_left_1 = par_ndim;
        tmp_compexpr_right_1 = mod_consts[57];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 878;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 878;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[211]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[211]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_subscript_name_1 = par_method;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 879;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_subscript_name_2;
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[194]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_expression_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;
            type_description_1 = "oo";
            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_expression_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_expression_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        CHECK_OBJECT(par_method);
        tmp_subscript_name_2 = par_method;
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 880;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4fcf62e19798657d07e72bc5eeaaa99);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4fcf62e19798657d07e72bc5eeaaa99);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f4fcf62e19798657d07e72bc5eeaaa99);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f4fcf62e19798657d07e72bc5eeaaa99, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f4fcf62e19798657d07e72bc5eeaaa99->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f4fcf62e19798657d07e72bc5eeaaa99, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f4fcf62e19798657d07e72bc5eeaaa99,
        type_description_1,
        par_method,
        par_ndim
    );


    // Release cached frame if used for exception.
    if (frame_f4fcf62e19798657d07e72bc5eeaaa99 == cache_frame_f4fcf62e19798657d07e72bc5eeaaa99) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f4fcf62e19798657d07e72bc5eeaaa99);
        cache_frame_f4fcf62e19798657d07e72bc5eeaaa99 = NULL;
    }

    assertFrameObject(frame_f4fcf62e19798657d07e72bc5eeaaa99);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_ndim);
    Py_DECREF(par_ndim);
    par_ndim = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_ndim);
    Py_DECREF(par_ndim);
    par_ndim = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__22_clean_reindex_fill_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_method = python_pars[0];
    struct Nuitka_FrameObject *frame_28994b15360adb2fa92a028fcbf896ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_28994b15360adb2fa92a028fcbf896ad = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_28994b15360adb2fa92a028fcbf896ad)) {
        Py_XDECREF(cache_frame_28994b15360adb2fa92a028fcbf896ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_28994b15360adb2fa92a028fcbf896ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_28994b15360adb2fa92a028fcbf896ad = MAKE_FUNCTION_FRAME(codeobj_28994b15360adb2fa92a028fcbf896ad, module_pandas$core$missing, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_28994b15360adb2fa92a028fcbf896ad->m_type_description == NULL);
    frame_28994b15360adb2fa92a028fcbf896ad = cache_frame_28994b15360adb2fa92a028fcbf896ad;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_28994b15360adb2fa92a028fcbf896ad);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_28994b15360adb2fa92a028fcbf896ad) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_tuple_element_1 = par_method;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[212]);
        frame_28994b15360adb2fa92a028fcbf896ad->m_frame.f_lineno = 884;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 884;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28994b15360adb2fa92a028fcbf896ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_28994b15360adb2fa92a028fcbf896ad);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_28994b15360adb2fa92a028fcbf896ad);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_28994b15360adb2fa92a028fcbf896ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_28994b15360adb2fa92a028fcbf896ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_28994b15360adb2fa92a028fcbf896ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_28994b15360adb2fa92a028fcbf896ad,
        type_description_1,
        par_method
    );


    // Release cached frame if used for exception.
    if (frame_28994b15360adb2fa92a028fcbf896ad == cache_frame_28994b15360adb2fa92a028fcbf896ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_28994b15360adb2fa92a028fcbf896ad);
        cache_frame_28994b15360adb2fa92a028fcbf896ad = NULL;
    }

    assertFrameObject(frame_28994b15360adb2fa92a028fcbf896ad);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__23__interp_limit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_invalid = python_pars[0];
    PyObject *par_fw_limit = python_pars[1];
    PyObject *par_bw_limit = python_pars[2];
    struct Nuitka_CellObject *var_N = Nuitka_Cell_Empty();
    PyObject *var_f_idx = NULL;
    PyObject *var_b_idx = NULL;
    PyObject *var_inner = NULL;
    PyObject *var_b_idx_inv = NULL;
    struct Nuitka_FrameObject *frame_0f1c6e0c3a024362d64f9c87a21aef7d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d)) {
        Py_XDECREF(cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d = MAKE_FUNCTION_FRAME(codeobj_0f1c6e0c3a024362d64f9c87a21aef7d, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_type_description == NULL);
    frame_0f1c6e0c3a024362d64f9c87a21aef7d = cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0f1c6e0c3a024362d64f9c87a21aef7d);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0f1c6e0c3a024362d64f9c87a21aef7d) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_invalid);
        tmp_len_arg_1 = par_invalid;
        tmp_assign_source_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 918;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_N) == NULL);
        PyCell_SET(var_N, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PySet_New(NULL);
        assert(var_f_idx == NULL);
        var_f_idx = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PySet_New(NULL);
        assert(var_b_idx == NULL);
        var_b_idx = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_N;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner(tmp_closure_1);

        assert(var_inner == NULL);
        var_inner = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_fw_limit);
        tmp_compexpr_left_1 = par_fw_limit;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_fw_limit);
        tmp_compexpr_left_2 = par_fw_limit;
        tmp_compexpr_right_2 = mod_consts[48];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 932;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 932;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[215]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        if (par_invalid == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = par_invalid;
        frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_frame.f_lineno = 933;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[48];
        tmp_set_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 933;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_idx;
            assert(old != NULL);
            var_f_idx = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT(var_inner);
        tmp_called_name_2 = var_inner;
        if (par_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 935;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_invalid;
        CHECK_OBJECT(par_fw_limit);
        tmp_args_element_name_3 = par_fw_limit;
        frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_frame.f_lineno = 935;
        {
            PyObject *call_args[] = {tmp_args_element_name_2, tmp_args_element_name_3};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 935;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_f_idx;
            assert(old != NULL);
            var_f_idx = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_bw_limit);
        tmp_compexpr_left_3 = par_bw_limit;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_bw_limit);
        tmp_compexpr_left_4 = par_bw_limit;
        tmp_compexpr_right_4 = mod_consts[48];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 939;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 939;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    if (var_f_idx == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[216]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 942;
        type_description_1 = "ooocoooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_f_idx;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT(var_inner);
        tmp_called_name_3 = var_inner;
        if (par_invalid == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 944;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_invalid;
        tmp_subscript_name_2 = mod_consts[58];
        tmp_args_element_name_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 944;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_bw_limit);
        tmp_args_element_name_5 = par_bw_limit;
        frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_frame.f_lineno = 944;
        {
            PyObject *call_args[] = {tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 944;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 944;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        assert(var_b_idx_inv == NULL);
        var_b_idx_inv = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_6;
        if (Nuitka_Cell_GET(var_N) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[217]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = Nuitka_Cell_GET(var_N);
        tmp_right_name_1 = mod_consts[57];
        tmp_left_name_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_b_idx_inv);
        tmp_args_element_name_6 = var_b_idx_inv;
        frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_frame.f_lineno = 945;
        tmp_right_name_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[127], tmp_args_element_name_6);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_2);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_2);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 945;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_b_idx;
            assert(old != NULL);
            var_b_idx = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(par_fw_limit);
        tmp_compexpr_left_5 = par_fw_limit;
        tmp_compexpr_right_5 = mod_consts[48];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 946;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 946;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(var_b_idx);
    tmp_return_value = var_b_idx;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_5:;
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        if (var_f_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[216]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 949;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_3 = var_f_idx;
        if (var_b_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[218]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 949;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_3 = var_b_idx;
        tmp_return_value = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 949;
            type_description_1 = "ooocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f1c6e0c3a024362d64f9c87a21aef7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f1c6e0c3a024362d64f9c87a21aef7d);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0f1c6e0c3a024362d64f9c87a21aef7d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f1c6e0c3a024362d64f9c87a21aef7d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f1c6e0c3a024362d64f9c87a21aef7d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f1c6e0c3a024362d64f9c87a21aef7d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f1c6e0c3a024362d64f9c87a21aef7d,
        type_description_1,
        par_invalid,
        par_fw_limit,
        par_bw_limit,
        var_N,
        var_f_idx,
        var_b_idx,
        var_inner,
        var_b_idx_inv
    );


    // Release cached frame if used for exception.
    if (frame_0f1c6e0c3a024362d64f9c87a21aef7d == cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d);
        cache_frame_0f1c6e0c3a024362d64f9c87a21aef7d = NULL;
    }

    assertFrameObject(frame_0f1c6e0c3a024362d64f9c87a21aef7d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_invalid);
    par_invalid = NULL;
    CHECK_OBJECT(par_fw_limit);
    Py_DECREF(par_fw_limit);
    par_fw_limit = NULL;
    CHECK_OBJECT(par_bw_limit);
    Py_DECREF(par_bw_limit);
    par_bw_limit = NULL;
    CHECK_OBJECT(var_N);
    Py_DECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_f_idx);
    var_f_idx = NULL;
    Py_XDECREF(var_b_idx);
    var_b_idx = NULL;
    CHECK_OBJECT(var_inner);
    Py_DECREF(var_inner);
    var_inner = NULL;
    Py_XDECREF(var_b_idx_inv);
    var_b_idx_inv = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_invalid);
    par_invalid = NULL;
    CHECK_OBJECT(par_fw_limit);
    Py_DECREF(par_fw_limit);
    par_fw_limit = NULL;
    CHECK_OBJECT(par_bw_limit);
    Py_DECREF(par_bw_limit);
    par_bw_limit = NULL;
    CHECK_OBJECT(var_N);
    Py_DECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_f_idx);
    var_f_idx = NULL;
    Py_XDECREF(var_b_idx);
    var_b_idx = NULL;
    Py_XDECREF(var_inner);
    var_inner = NULL;
    Py_XDECREF(var_b_idx_inv);
    var_b_idx_inv = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_invalid = python_pars[0];
    PyObject *par_limit = python_pars[1];
    PyObject *var_windowed = NULL;
    PyObject *var_idx = NULL;
    struct Nuitka_FrameObject *frame_24f5e5f661d2fb9086c3bcce1644ac3e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e)) {
        Py_XDECREF(cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e = MAKE_FUNCTION_FRAME(codeobj_24f5e5f661d2fb9086c3bcce1644ac3e, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_type_description == NULL);
    frame_24f5e5f661d2fb9086c3bcce1644ac3e = cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_24f5e5f661d2fb9086c3bcce1644ac3e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_24f5e5f661d2fb9086c3bcce1644ac3e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[220]);
        assert(tmp_called_name_1 != NULL);
        CHECK_OBJECT(par_limit);
        tmp_args_element_name_1 = par_limit;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[217]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 923;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 923;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 923;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_limit;
            assert(old != NULL);
            par_limit = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[221]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[221]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_invalid);
        tmp_args_element_name_3 = par_invalid;
        CHECK_OBJECT(par_limit);
        tmp_left_name_1 = par_limit;
        tmp_right_name_1 = mod_consts[57];
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_1, tmp_right_name_1);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 924;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_args_element_name_4);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 924;
        tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[94],
            &PyTuple_GET_ITEM(mod_consts[52], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 924;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        assert(var_windowed == NULL);
        var_windowed = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_subscript_name_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_windowed);
        tmp_args_element_name_5 = var_windowed;
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 925;
        tmp_expression_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[215], tmp_args_element_name_5);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[48];
        tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        if (par_limit == NULL) {
            Py_DECREF(tmp_left_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_right_name_2 = par_limit;
        tmp_set_arg_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[215]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_invalid);
        tmp_expression_name_4 = par_invalid;
        if (par_limit == NULL) {
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_left_name_4 = par_limit;
        tmp_right_name_4 = mod_consts[57];
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_4, tmp_right_name_4);
        if (tmp_stop_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = MAKE_SLICEOBJ1(tmp_stop_name_1);
        Py_DECREF(tmp_stop_name_1);
        assert(!(tmp_subscript_name_2 == NULL));
        tmp_operand_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 926;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[222]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[48];
        tmp_args_element_name_6 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame.f_lineno = 926;
        tmp_expression_name_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[48];
        tmp_set_arg_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_2, tmp_subscript_name_3, 0);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 926;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_2);

            exception_lineno = 925;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        Py_DECREF(tmp_right_name_3);
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_24f5e5f661d2fb9086c3bcce1644ac3e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_24f5e5f661d2fb9086c3bcce1644ac3e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24f5e5f661d2fb9086c3bcce1644ac3e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24f5e5f661d2fb9086c3bcce1644ac3e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24f5e5f661d2fb9086c3bcce1644ac3e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24f5e5f661d2fb9086c3bcce1644ac3e,
        type_description_1,
        par_invalid,
        par_limit,
        var_windowed,
        var_idx,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_24f5e5f661d2fb9086c3bcce1644ac3e == cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e);
        cache_frame_24f5e5f661d2fb9086c3bcce1644ac3e = NULL;
    }

    assertFrameObject(frame_24f5e5f661d2fb9086c3bcce1644ac3e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_idx);
    tmp_return_value = var_idx;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_invalid);
    Py_DECREF(par_invalid);
    par_invalid = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(var_windowed);
    var_windowed = NULL;
    CHECK_OBJECT(var_idx);
    Py_DECREF(var_idx);
    var_idx = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_invalid);
    Py_DECREF(par_invalid);
    par_invalid = NULL;
    Py_XDECREF(par_limit);
    par_limit = NULL;
    Py_XDECREF(var_windowed);
    var_windowed = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$missing$$$function__24__rolling_window(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[0];
    PyObject *par_window = python_pars[1];
    PyObject *var_shape = NULL;
    PyObject *var_strides = NULL;
    struct Nuitka_FrameObject *frame_79e5ee2734aa28f61acd1ff8e4346b4a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a)) {
        Py_XDECREF(cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a = MAKE_FUNCTION_FRAME(codeobj_79e5ee2734aa28f61acd1ff8e4346b4a, module_pandas$core$missing, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a->m_type_description == NULL);
    frame_79e5ee2734aa28f61acd1ff8e4346b4a = cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_79e5ee2734aa28f61acd1ff8e4346b4a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_79e5ee2734aa28f61acd1ff8e4346b4a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT(par_a);
        tmp_expression_name_2 = par_a;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[13]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[223];
        tmp_left_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_a == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[224]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_a;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[13]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[225];
        tmp_left_name_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, -1);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_window);
        tmp_right_name_2 = par_window;
        tmp_left_name_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_2);
        Py_DECREF(tmp_left_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = mod_consts[57];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_1);
        if (par_window == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[226]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 964;
            type_description_1 = "oooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_window;
        PyTuple_SET_ITEM0(tmp_right_name_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 964;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_shape == NULL);
        var_shape = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_3;
        if (par_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[224]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_a;
        tmp_left_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[227]);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_a == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[224]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_a;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[227]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[225];
        tmp_tuple_element_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_3, -1);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_2);
        tmp_assign_source_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 965;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_strides == NULL);
        var_strides = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[130]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[228]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[229]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        if (par_a == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[224]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_a;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_3);
        tmp_dict_key_1 = mod_consts[13];
        CHECK_OBJECT(var_shape);
        tmp_dict_value_1 = var_shape;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[227];
        CHECK_OBJECT(var_strides);
        tmp_dict_value_1 = var_strides;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_79e5ee2734aa28f61acd1ff8e4346b4a->m_frame.f_lineno = 966;
        tmp_return_value = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 966;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5ee2734aa28f61acd1ff8e4346b4a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5ee2734aa28f61acd1ff8e4346b4a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_79e5ee2734aa28f61acd1ff8e4346b4a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_79e5ee2734aa28f61acd1ff8e4346b4a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79e5ee2734aa28f61acd1ff8e4346b4a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79e5ee2734aa28f61acd1ff8e4346b4a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79e5ee2734aa28f61acd1ff8e4346b4a,
        type_description_1,
        par_a,
        par_window,
        var_shape,
        var_strides
    );


    // Release cached frame if used for exception.
    if (frame_79e5ee2734aa28f61acd1ff8e4346b4a == cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a);
        cache_frame_79e5ee2734aa28f61acd1ff8e4346b4a = NULL;
    }

    assertFrameObject(frame_79e5ee2734aa28f61acd1ff8e4346b4a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_a);
    par_a = NULL;
    Py_XDECREF(par_window);
    par_window = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_strides);
    var_strides = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_a);
    par_a = NULL;
    Py_XDECREF(par_window);
    par_window = NULL;
    Py_XDECREF(var_shape);
    var_shape = NULL;
    Py_XDECREF(var_strides);
    var_strides = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__10__from_derivatives(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__10__from_derivatives,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6283547709c5128ab98c53d250bf8fbf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        mod_consts[181],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__11__akima_interpolate(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__11__akima_interpolate,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b73a8f75768b3022cabec135065d776,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        mod_consts[184],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__12__cubicspline_interpolate(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__12__cubicspline_interpolate,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3a600349961d3d17149dce7cee72cc71,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        mod_consts[187],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__13__interpolate_with_limit_area(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__13__interpolate_with_limit_area,
        mod_consts[190],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7179385a5a558b7cce7f39d872b182d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[188],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__14_interpolate_2d,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9d022052c277b544f4dba9d0640e3370,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[196],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_9950deb7a3afa5372fb54e4b9953135d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_9950deb7a3afa5372fb54e4b9953135d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__15__fillna_prep(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__15__fillna_prep,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_20660df29f5b72efb21702b1276df9aa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__16__datetimelike_compat,
        mod_consts[290],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4aa4eaec884c199228ae8f4794af4ef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[205],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func(PyObject *defaults, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        mod_consts[202],
#endif
        codeobj_95b1cdb510ac1898fe99a62210dacb4f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__17__pad_1d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__17__pad_1d,
        mod_consts[292],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3eb442ce731d1f9c600f01cd625cb77e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__18__backfill_1d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__18__backfill_1d,
        mod_consts[293],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3cb7d144f883c00f36c0ad574cd095f8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__19__pad_2d(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__19__pad_2d,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_52050ad3fab795e9530ef94eed88a4d7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__1_check_value_size(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__1_check_value_size,
        mod_consts[264],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9efc12c8316a154384819e07dcd05c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__20__backfill_2d(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__20__backfill_2d,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c4c83a3e5d7805c1d7465f2986cef087,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__21_get_fill_func(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__21_get_fill_func,
        mod_consts[295],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f4fcf62e19798657d07e72bc5eeaaa99,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__22_clean_reindex_fill_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__22_clean_reindex_fill_method,
        mod_consts[296],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_28994b15360adb2fa92a028fcbf896ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__23__interp_limit,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f1c6e0c3a024362d64f9c87a21aef7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[219],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        mod_consts[214],
#endif
        codeobj_24f5e5f661d2fb9086c3bcce1644ac3e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__24__rolling_window(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__24__rolling_window,
        mod_consts[221],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79e5ee2734aa28f61acd1ff8e4346b4a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[230],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__2_mask_missing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__2_mask_missing,
        mod_consts[266],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d619189908e0ebb656ba8ca6d4bf0a27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__3_clean_fill_method(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__3_clean_fill_method,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77c23a9c190758d79fa0fd87ac1f3cff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__4_clean_interp_method(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__4_clean_interp_method,
        mod_consts[74],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d88539d8237ab96b08e4150e15370c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__5_find_valid_index(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__5_find_valid_index,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a25e3031a5add7f40aa9ee45e483f95c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[60],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__6_interpolate_array_2d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__6_interpolate_array_2d,
        mod_consts[275],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c7346184e4a7f819a6ef7e09b6049a26,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96837d8c26f4eb30667dac7dcc749d49,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[82],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_b97d5605c3b43c5df15c5603c4c3355b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        NULL,
        closure,
        7
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__8_interpolate_1d(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__8_interpolate_1d,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_77fe8c5b84dca956d6a594d577677aaa,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$missing,
        mod_consts[137],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$missing$$$function__9__interpolate_scipy_wrapper(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$missing$$$function__9__interpolate_scipy_wrapper,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_599b4d37f8ef02956c43766c0eaa0654,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$missing,
        mod_consts[175],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pandas$core$missing[] = {
    impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill$$$function__1_func,
    impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__1_lambda,
    impl_pandas$core$missing$$$function__14_interpolate_2d$$$function__2_lambda,
    impl_pandas$core$missing$$$function__16__datetimelike_compat$$$function__1_new_func,
    impl_pandas$core$missing$$$function__23__interp_limit$$$function__1_inner,
    impl_pandas$core$missing$$$function__1_check_value_size,
    impl_pandas$core$missing$$$function__2_mask_missing,
    impl_pandas$core$missing$$$function__3_clean_fill_method,
    impl_pandas$core$missing$$$function__4_clean_interp_method,
    impl_pandas$core$missing$$$function__5_find_valid_index,
    impl_pandas$core$missing$$$function__6_interpolate_array_2d,
    impl_pandas$core$missing$$$function__7_interpolate_2d_with_fill,
    impl_pandas$core$missing$$$function__8_interpolate_1d,
    impl_pandas$core$missing$$$function__9__interpolate_scipy_wrapper,
    impl_pandas$core$missing$$$function__10__from_derivatives,
    impl_pandas$core$missing$$$function__11__akima_interpolate,
    impl_pandas$core$missing$$$function__12__cubicspline_interpolate,
    impl_pandas$core$missing$$$function__13__interpolate_with_limit_area,
    impl_pandas$core$missing$$$function__14_interpolate_2d,
    impl_pandas$core$missing$$$function__15__fillna_prep,
    impl_pandas$core$missing$$$function__16__datetimelike_compat,
    impl_pandas$core$missing$$$function__17__pad_1d,
    impl_pandas$core$missing$$$function__18__backfill_1d,
    impl_pandas$core$missing$$$function__19__pad_2d,
    impl_pandas$core$missing$$$function__20__backfill_2d,
    impl_pandas$core$missing$$$function__21_get_fill_func,
    impl_pandas$core$missing$$$function__22_clean_reindex_fill_method,
    impl_pandas$core$missing$$$function__23__interp_limit,
    impl_pandas$core$missing$$$function__24__rolling_window,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pandas$core$missing;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pandas$core$missing) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pandas$core$missing[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pandas$core$missing,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pandas$core$missing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pandas$core$missing = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.missing: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.missing: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.missing: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpandas$core$missing\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pandas$core$missing = MODULE_DICT(module_pandas$core$missing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$missing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$missing,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$missing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$missing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$missing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$missing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$missing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_8a538f77904a6426902f00397732322b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_8a538f77904a6426902f00397732322b = MAKE_MODULE_FRAME(codeobj_8a538f77904a6426902f00397732322b, module_pandas$core$missing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_8a538f77904a6426902f00397732322b);
    assert(Py_REFCNT(frame_8a538f77904a6426902f00397732322b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[234]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[235], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[234]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[234]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[236], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[238]);
        }

        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[239];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[240];
        tmp_level_name_1 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 6;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[189],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[189]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[199],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[199]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[241];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[242];
        tmp_level_name_2 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 10;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_3 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[243],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[243]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[244],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[244]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[203],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[203]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_11);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[245];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 16;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[246];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[247];
        tmp_level_name_4 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 18;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_6 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[106],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[106]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_7 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[130],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[130]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_15);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[248];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = mod_consts[249];
        tmp_level_name_5 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 22;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_8 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[250],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[250]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[250], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_9 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[251],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[251]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[204],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[204]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_19);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[252];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[253];
        tmp_level_name_6 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 27;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[139],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[254];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[255];
        tmp_level_name_7 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 29;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[6],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[256];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[257];
        tmp_level_name_8 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 30;
        tmp_assign_source_22 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_22;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_13 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[0]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_14 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[15],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[15]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[96],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[96]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_25);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[258];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[259];
        tmp_level_name_9 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 35;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_16 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[75],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[75]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_17 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[11],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[11]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_18 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[76],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[76]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_29);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[260];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_pandas$core$missing;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[261];
        tmp_level_name_10 = mod_consts[48];
        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 42;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$core$missing,
                mod_consts[262],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[262]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[262], tmp_assign_source_30);
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[263]);


        tmp_assign_source_31 = MAKE_FUNCTION_pandas$core$missing$$$function__1_check_value_size(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = PyDict_Copy(mod_consts[265]);


        tmp_assign_source_32 = MAKE_FUNCTION_pandas$core$missing$$$function__2_mask_missing(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[266], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_3;
        tmp_defaults_1 = mod_consts[267];
        tmp_annotations_3 = PyDict_Copy(mod_consts[268]);
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_33 = MAKE_FUNCTION_pandas$core$missing$$$function__3_clean_fill_method(tmp_defaults_1, tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = LIST_COPY(mod_consts[269]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = LIST_COPY(mod_consts[270]);
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_annotations_4;
        tmp_annotations_4 = PyDict_Copy(mod_consts[271]);


        tmp_assign_source_36 = MAKE_FUNCTION_pandas$core$missing$$$function__4_clean_interp_method(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_annotations_5;
        tmp_annotations_5 = PyDict_Copy(mod_consts[272]);


        tmp_assign_source_37 = MAKE_FUNCTION_pandas$core$missing$$$function__5_find_valid_index(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_6;
        tmp_defaults_2 = mod_consts[273];
        tmp_annotations_6 = PyDict_Copy(mod_consts[274]);
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_38 = MAKE_FUNCTION_pandas$core$missing$$$function__6_interpolate_array_2d(tmp_defaults_2, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_7;
        tmp_defaults_3 = mod_consts[276];
        tmp_annotations_7 = PyDict_Copy(mod_consts[277]);
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_39 = MAKE_FUNCTION_pandas$core$missing$$$function__7_interpolate_2d_with_fill(tmp_defaults_3, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_8;
        tmp_defaults_4 = mod_consts[278];
        tmp_annotations_8 = PyDict_Copy(mod_consts[279]);
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_40 = MAKE_FUNCTION_pandas$core$missing$$$function__8_interpolate_1d(tmp_defaults_4, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[280];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_41 = MAKE_FUNCTION_pandas$core$missing$$$function__9__interpolate_scipy_wrapper(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[281];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_42 = MAKE_FUNCTION_pandas$core$missing$$$function__10__from_derivatives(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[282];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_43 = MAKE_FUNCTION_pandas$core$missing$$$function__11__akima_interpolate(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_defaults_8;
        tmp_defaults_8 = mod_consts[283];
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_44 = MAKE_FUNCTION_pandas$core$missing$$$function__12__cubicspline_interpolate(tmp_defaults_8);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_9;
        tmp_annotations_9 = PyDict_Copy(mod_consts[284]);


        tmp_assign_source_45 = MAKE_FUNCTION_pandas$core$missing$$$function__13__interpolate_with_limit_area(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_9;
        PyObject *tmp_annotations_10;
        tmp_defaults_9 = mod_consts[285];
        tmp_annotations_10 = PyDict_Copy(mod_consts[286]);
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_46 = MAKE_FUNCTION_pandas$core$missing$$$function__14_interpolate_2d(tmp_defaults_9, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_11;
        tmp_defaults_10 = mod_consts[287];
        tmp_annotations_11 = PyDict_Copy(mod_consts[288]);
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_47 = MAKE_FUNCTION_pandas$core$missing$$$function__15__fillna_prep(tmp_defaults_10, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_12;
        tmp_annotations_12 = PyDict_Copy(mod_consts[289]);


        tmp_assign_source_48 = MAKE_FUNCTION_pandas$core$missing$$$function__16__datetimelike_compat(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_13;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
        }

        assert(!(tmp_called_name_1 == NULL));
        tmp_defaults_11 = mod_consts[200];
        tmp_annotations_13 = PyDict_Copy(mod_consts[291]);
        Py_INCREF(tmp_defaults_11);


        tmp_args_element_name_1 = MAKE_FUNCTION_pandas$core$missing$$$function__17__pad_1d(tmp_defaults_11, tmp_annotations_13);

        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 827;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 827;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_14;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;

            goto frame_exception_exit_1;
        }
        tmp_defaults_12 = mod_consts[200];
        tmp_annotations_14 = PyDict_Copy(mod_consts[291]);
        Py_INCREF(tmp_defaults_12);


        tmp_args_element_name_2 = MAKE_FUNCTION_pandas$core$missing$$$function__18__backfill_1d(tmp_defaults_12, tmp_annotations_14);

        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 838;
        tmp_assign_source_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 838;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[293], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_defaults_13;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 849;

            goto frame_exception_exit_1;
        }
        tmp_defaults_13 = mod_consts[200];
        Py_INCREF(tmp_defaults_13);


        tmp_args_element_name_3 = MAKE_FUNCTION_pandas$core$missing$$$function__19__pad_2d(tmp_defaults_13);

        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 849;
        tmp_assign_source_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 849;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_defaults_14;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[290]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;

            goto frame_exception_exit_1;
        }
        tmp_defaults_14 = mod_consts[200];
        Py_INCREF(tmp_defaults_14);


        tmp_args_element_name_4 = MAKE_FUNCTION_pandas$core$missing$$$function__20__backfill_2d(tmp_defaults_14);

        frame_8a538f77904a6426902f00397732322b->m_frame.f_lineno = 861;
        tmp_assign_source_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 861;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[23];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[292]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[292]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 873;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[25];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[293]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[293]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 873;

            goto dict_build_exception_1;
        }
        tmp_res = PyDict_SetItem(tmp_assign_source_53, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_53);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_53);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a538f77904a6426902f00397732322b);
#endif
    popFrameStack();

    assertFrameObject(frame_8a538f77904a6426902f00397732322b);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_8a538f77904a6426902f00397732322b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8a538f77904a6426902f00397732322b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8a538f77904a6426902f00397732322b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8a538f77904a6426902f00397732322b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_15;
        tmp_defaults_15 = mod_consts[52];
        tmp_annotations_15 = PyDict_Copy(mod_consts[294]);
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_54 = MAKE_FUNCTION_pandas$core$missing$$$function__21_get_fill_func(tmp_defaults_15, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_pandas$core$missing$$$function__22_clean_reindex_fill_method();

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_16;
        tmp_annotations_16 = PyDict_Copy(mod_consts[297]);


        tmp_assign_source_56 = MAKE_FUNCTION_pandas$core$missing$$$function__23__interp_limit(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_17;
        tmp_annotations_17 = PyDict_Copy(mod_consts[298]);


        tmp_assign_source_57 = MAKE_FUNCTION_pandas$core$missing$$$function__24__rolling_window(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_pandas$core$missing, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_57);
    }

    return module_pandas$core$missing;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

