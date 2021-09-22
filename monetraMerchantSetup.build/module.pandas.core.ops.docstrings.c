/* Generated code for Python module 'pandas.core.ops.docstrings'
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

/* The "module_pandas$core$ops$docstrings" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$ops$docstrings;
PyDictObject *moduledict_pandas$core$ops$docstrings;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[146];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.ops.docstrings"));
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
void checkModuleConstants_pandas$core$ops$docstrings(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pandas.core.ops.docstrings");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9e3d4c6d64d2d445d12728955230569b;
static PyCodeObject *codeobj_17bd01e41e3f865998f5dc2ecaf71b27;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[143]); CHECK_OBJECT(module_filename_obj);
    codeobj_9e3d4c6d64d2d445d12728955230569b = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[144], NULL, NULL, 0, 0, 0);
    codeobj_17bd01e41e3f865998f5dc2ecaf71b27 = MAKE_CODEOBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ANNOTATIONS, mod_consts[40], mod_consts[145], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$core$ops$docstrings$$$function__1_make_flex_doc(PyObject *annotations);


// The module function definitions.
static PyObject *impl_pandas$core$ops$docstrings$$$function__1_make_flex_doc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_op_name = python_pars[0];
    PyObject *par_typ = python_pars[1];
    PyObject *var_op_desc = NULL;
    PyObject *var_op_desc_op = NULL;
    PyObject *var_equiv = NULL;
    PyObject *var_base_doc = NULL;
    PyObject *var_doc_no_examples = NULL;
    PyObject *var_ser_example = NULL;
    PyObject *var_doc = NULL;
    struct Nuitka_FrameObject *frame_17bd01e41e3f865998f5dc2ecaf71b27;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_17bd01e41e3f865998f5dc2ecaf71b27 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_17bd01e41e3f865998f5dc2ecaf71b27)) {
        Py_XDECREF(cache_frame_17bd01e41e3f865998f5dc2ecaf71b27);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17bd01e41e3f865998f5dc2ecaf71b27 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17bd01e41e3f865998f5dc2ecaf71b27 = MAKE_FUNCTION_FRAME(codeobj_17bd01e41e3f865998f5dc2ecaf71b27, module_pandas$core$ops$docstrings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_17bd01e41e3f865998f5dc2ecaf71b27->m_type_description == NULL);
    frame_17bd01e41e3f865998f5dc2ecaf71b27 = cache_frame_17bd01e41e3f865998f5dc2ecaf71b27;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_17bd01e41e3f865998f5dc2ecaf71b27);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_17bd01e41e3f865998f5dc2ecaf71b27) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_op_name);
        tmp_called_instance_1 = par_op_name;
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 22;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_op_name;
            par_op_name = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_op_name);
        tmp_subscript_name_1 = par_op_name;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_op_desc == NULL);
        var_op_desc = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_2 = var_op_desc;
        tmp_subscript_name_2 = mod_consts[3];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_op_desc_op == NULL);
        var_op_desc_op = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_op_desc_op);
        tmp_compexpr_left_1 = var_op_desc_op;
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
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 26;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_op_name);
        tmp_called_instance_2 = par_op_name;
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 27;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[4],
            &PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 27;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = mod_consts[6];
        CHECK_OBJECT(var_op_desc_op);
        tmp_right_name_1 = var_op_desc_op;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[7];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_typ);
        tmp_right_name_3 = par_typ;
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
        Py_DECREF(tmp_left_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_equiv == NULL);
        var_equiv = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_2;
        if (par_op_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_2 = par_op_name;
        tmp_compexpr_right_2 = mod_consts[9];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 29;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        if (par_op_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_format_value_1 = par_op_name;
        tmp_format_spec_1 = mod_consts[10];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[11];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_typ);
            tmp_format_value_2 = par_typ;
            tmp_format_spec_2 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[12];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_5 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_equiv == NULL);
        var_equiv = tmp_assign_source_5;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT(par_typ);
        tmp_left_name_6 = par_typ;
        tmp_right_name_4 = mod_consts[7];
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_4);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_op_desc_op);
        tmp_right_name_5 = var_op_desc_op;
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_5);
        Py_DECREF(tmp_left_name_5);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = mod_consts[13];
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_6);
        Py_DECREF(tmp_left_name_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_equiv == NULL);
        var_equiv = tmp_assign_source_6;
    }
    branch_end_3:;
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_3;
        if (par_typ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_3 = par_typ;
        tmp_compexpr_right_3 = mod_consts[15];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_assign_source_7 == NULL)) {
            tmp_assign_source_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_doc == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_base_doc = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_3 = var_op_desc;
        tmp_subscript_name_3 = mod_consts[17];
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_subscript_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_subscript_result_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_subscript_result_1);

            exception_lineno = 36;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_subscript_result_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_base_doc);
        tmp_left_name_7 = var_base_doc;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[19]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = mod_consts[17];
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_5 = var_op_desc;
        tmp_subscript_name_4 = mod_consts[17];
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_4);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 38;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_name_6;
            PyObject *tmp_subscript_name_5;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[20];
            CHECK_OBJECT(var_op_desc);
            tmp_expression_name_6 = var_op_desc;
            tmp_subscript_name_5 = mod_consts[20];
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 37;
        tmp_right_name_7 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = tmp_left_name_7;
        var_base_doc = tmp_assign_source_8;

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_base_doc);
        tmp_expression_name_7 = var_base_doc;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[19]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[21];
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_8 = var_op_desc;
        tmp_subscript_name_6 = mod_consts[21];
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_6);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 41;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_2 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_subscript_name_7;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[8];
            if (par_op_name == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 42;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_op_name;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[22];
            if (var_equiv == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 43;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = var_equiv;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[23];
            CHECK_OBJECT(var_op_desc);
            tmp_expression_name_9 = var_op_desc;
            tmp_subscript_name_7 = mod_consts[23];
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_7);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 40;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_doc_no_examples == NULL);
        var_doc_no_examples = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_10 = var_op_desc;
        tmp_subscript_name_8 = mod_consts[24];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_8);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ser_example == NULL);
        var_ser_example = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_5;
        CHECK_OBJECT(var_ser_example);
        tmp_truth_name_5 = CHECK_IF_TRUE(var_ser_example);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT(var_doc_no_examples);
        tmp_left_name_8 = var_doc_no_examples;
        CHECK_OBJECT(var_ser_example);
        tmp_right_name_8 = var_ser_example;
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_8);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_doc == NULL);
        var_doc = tmp_assign_source_11;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(var_doc_no_examples);
        tmp_assign_source_12 = var_doc_no_examples;
        assert(var_doc == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_doc = tmp_assign_source_12;
    }
    branch_end_6:;
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_7_object_1;
        int tmp_truth_name_6;
        if (par_typ == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[14]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 51;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = par_typ;
        tmp_compexpr_right_4 = mod_consts[25];
        tmp_tmp_condition_result_7_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_7_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_tmp_condition_result_7_object_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_7_object_1);

            exception_lineno = 51;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_assign_source_13 == NULL)) {
            tmp_assign_source_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base_doc == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_base_doc = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_9;
        CHECK_OBJECT(var_base_doc);
        tmp_expression_name_11 = var_base_doc;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[19]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = mod_consts[21];
        CHECK_OBJECT(var_op_desc);
        tmp_expression_name_12 = var_op_desc;
        tmp_subscript_name_9 = mod_consts[21];
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_9);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 54;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_3 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_name_13;
            PyObject *tmp_subscript_name_10;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[8];
            if (par_op_name == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 55;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_op_name;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[22];
            if (var_equiv == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[22]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 56;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = var_equiv;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[17];
            CHECK_OBJECT(var_op_desc);
            tmp_expression_name_13 = var_op_desc;
            tmp_subscript_name_10 = mod_consts[17];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_10);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;
                type_description_1 = "ooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 53;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_doc == NULL);
        var_doc = tmp_assign_source_14;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[27];
        frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame.f_lineno = 60;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_AssertionError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 60;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    branch_end_4:;
    if (var_doc == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 61;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_doc;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17bd01e41e3f865998f5dc2ecaf71b27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_17bd01e41e3f865998f5dc2ecaf71b27);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_17bd01e41e3f865998f5dc2ecaf71b27);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17bd01e41e3f865998f5dc2ecaf71b27, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17bd01e41e3f865998f5dc2ecaf71b27->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17bd01e41e3f865998f5dc2ecaf71b27, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17bd01e41e3f865998f5dc2ecaf71b27,
        type_description_1,
        par_op_name,
        par_typ,
        var_op_desc,
        var_op_desc_op,
        var_equiv,
        var_base_doc,
        var_doc_no_examples,
        var_ser_example,
        var_doc
    );


    // Release cached frame if used for exception.
    if (frame_17bd01e41e3f865998f5dc2ecaf71b27 == cache_frame_17bd01e41e3f865998f5dc2ecaf71b27) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_17bd01e41e3f865998f5dc2ecaf71b27);
        cache_frame_17bd01e41e3f865998f5dc2ecaf71b27 = NULL;
    }

    assertFrameObject(frame_17bd01e41e3f865998f5dc2ecaf71b27);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_op_name);
    par_op_name = NULL;
    Py_XDECREF(par_typ);
    par_typ = NULL;
    CHECK_OBJECT(var_op_desc);
    Py_DECREF(var_op_desc);
    var_op_desc = NULL;
    Py_XDECREF(var_op_desc_op);
    var_op_desc_op = NULL;
    Py_XDECREF(var_equiv);
    var_equiv = NULL;
    Py_XDECREF(var_base_doc);
    var_base_doc = NULL;
    Py_XDECREF(var_doc_no_examples);
    var_doc_no_examples = NULL;
    Py_XDECREF(var_ser_example);
    var_ser_example = NULL;
    Py_XDECREF(var_doc);
    var_doc = NULL;
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

    Py_XDECREF(par_op_name);
    par_op_name = NULL;
    Py_XDECREF(par_typ);
    par_typ = NULL;
    Py_XDECREF(var_op_desc);
    var_op_desc = NULL;
    Py_XDECREF(var_op_desc_op);
    var_op_desc_op = NULL;
    Py_XDECREF(var_equiv);
    var_equiv = NULL;
    Py_XDECREF(var_base_doc);
    var_base_doc = NULL;
    Py_XDECREF(var_doc_no_examples);
    var_doc_no_examples = NULL;
    Py_XDECREF(var_ser_example);
    var_ser_example = NULL;
    Py_XDECREF(var_doc);
    var_doc = NULL;
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



static PyObject *MAKE_FUNCTION_pandas$core$ops$docstrings$$$function__1_make_flex_doc(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$ops$docstrings$$$function__1_make_flex_doc,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_17bd01e41e3f865998f5dc2ecaf71b27,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$ops$docstrings,
        mod_consts[29],
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

function_impl_code functable_pandas$core$ops$docstrings[] = {
    impl_pandas$core$ops$docstrings$$$function__1_make_flex_doc,
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

    function_impl_code *current = functable_pandas$core$ops$docstrings;
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

    if (offset > sizeof(functable_pandas$core$ops$docstrings) || offset < 0) {
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
        functable_pandas$core$ops$docstrings[offset],
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
        module_pandas$core$ops$docstrings,
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
PyObject *modulecode_pandas$core$ops$docstrings(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pandas$core$ops$docstrings = module;

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
    PRINT_STRING("pandas.core.ops.docstrings: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.ops.docstrings: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas.core.ops.docstrings: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpandas$core$ops$docstrings\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pandas$core$ops$docstrings = MODULE_DICT(module_pandas$core$ops$docstrings);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$ops$docstrings,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$docstrings,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$ops$docstrings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$docstrings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$ops$docstrings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$ops$docstrings);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$ops$docstrings);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9e3d4c6d64d2d445d12728955230569b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[30];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_9e3d4c6d64d2d445d12728955230569b = MAKE_MODULE_FRAME(codeobj_9e3d4c6d64d2d445d12728955230569b, module_pandas$core$ops$docstrings);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_9e3d4c6d64d2d445d12728955230569b);
    assert(Py_REFCNT(frame_9e3d4c6d64d2d445d12728955230569b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[35], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = PyDict_New();
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        frame_9e3d4c6d64d2d445d12728955230569b->m_frame.f_lineno = 4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[38]);
        }

        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = PyDict_Copy(mod_consts[39]);


        tmp_assign_source_6 = MAKE_FUNCTION_pandas$core$ops$docstrings$$$function__1_make_flex_doc(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_1 == NULL)) {
            tmp_left_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_1 == NULL));
        tmp_right_name_1 = mod_consts[45];
        tmp_assign_source_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_1, tmp_right_name_1);
        assert(!(tmp_assign_source_9 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        tmp_left_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_2 == NULL)) {
            tmp_left_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_2 == NULL));
        tmp_right_name_2 = mod_consts[47];
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_2, tmp_right_name_2);
        assert(!(tmp_assign_source_10 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        tmp_left_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_3 == NULL)) {
            tmp_left_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_3 == NULL));
        tmp_right_name_3 = mod_consts[49];
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_3, tmp_right_name_3);
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        tmp_left_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_4 == NULL)) {
            tmp_left_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_4 == NULL));
        tmp_right_name_4 = mod_consts[51];
        tmp_assign_source_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_4, tmp_right_name_4);
        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        tmp_left_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_5 == NULL)) {
            tmp_left_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_5 == NULL));
        tmp_right_name_5 = mod_consts[53];
        tmp_assign_source_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_5, tmp_right_name_5);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        tmp_left_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_6 == NULL)) {
            tmp_left_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_6 == NULL));
        tmp_right_name_6 = mod_consts[55];
        tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_6, tmp_right_name_6);
        assert(!(tmp_assign_source_14 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        tmp_left_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_7 == NULL)) {
            tmp_left_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_7 == NULL));
        tmp_right_name_7 = mod_consts[57];
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_7, tmp_right_name_7);
        assert(!(tmp_assign_source_15 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        tmp_left_name_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_8 == NULL)) {
            tmp_left_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_8 == NULL));
        tmp_right_name_8 = mod_consts[59];
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_8, tmp_right_name_8);
        assert(!(tmp_assign_source_16 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        tmp_left_name_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_9 == NULL)) {
            tmp_left_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_9 == NULL));
        tmp_right_name_9 = mod_consts[61];
        tmp_assign_source_17 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_9, tmp_right_name_9);
        assert(!(tmp_assign_source_17 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        tmp_left_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_left_name_10 == NULL)) {
            tmp_left_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        assert(!(tmp_left_name_10 == NULL));
        tmp_right_name_10 = mod_consts[63];
        tmp_assign_source_18 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_10, tmp_right_name_10);
        assert(!(tmp_assign_source_18 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        tmp_left_name_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_left_name_11 == NULL)) {
            tmp_left_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_left_name_11 == NULL));
        tmp_right_name_11 = mod_consts[65];
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_11, tmp_right_name_11);
        assert(!(tmp_assign_source_19 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        tmp_left_name_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_left_name_12 == NULL)) {
            tmp_left_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_left_name_12 == NULL));
        tmp_right_name_12 = mod_consts[67];
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_12, tmp_right_name_12);
        assert(!(tmp_assign_source_20 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        tmp_left_name_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_left_name_13 == NULL)) {
            tmp_left_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_left_name_13 == NULL));
        tmp_right_name_13 = mod_consts[69];
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_13, tmp_right_name_13);
        assert(!(tmp_assign_source_21 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        tmp_left_name_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_left_name_14 == NULL)) {
            tmp_left_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        assert(!(tmp_left_name_14 == NULL));
        tmp_right_name_14 = mod_consts[71];
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_left_name_14, tmp_right_name_14);
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[75];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_1 = mod_consts[77];
        tmp_dict_key_2 = mod_consts[3];
        tmp_dict_value_2 = mod_consts[78];
        tmp_dict_value_1 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[21];
        tmp_dict_value_2 = mod_consts[79];
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[17];
        tmp_dict_value_2 = mod_consts[80];
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[24];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[23];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_assign_source_25 = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[81];
            tmp_dict_key_3 = mod_consts[3];
            tmp_dict_value_3 = mod_consts[82];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[21];
            tmp_dict_value_3 = mod_consts[83];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[17];
            tmp_dict_value_3 = mod_consts[84];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[24];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[48]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
            }

            assert(!(tmp_dict_value_3 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[23];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_3 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[85];
            tmp_dict_key_4 = mod_consts[3];
            tmp_dict_value_4 = mod_consts[86];
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[21];
            tmp_dict_value_4 = mod_consts[87];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[17];
            tmp_dict_value_4 = mod_consts[88];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            assert(!(tmp_dict_value_4 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[23];
            tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_4 == NULL)) {
                tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_4 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[89];
            tmp_dict_value_4 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[90];
            tmp_dict_key_5 = mod_consts[3];
            tmp_dict_value_5 = mod_consts[91];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[21];
            tmp_dict_value_5 = mod_consts[92];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[17];
            tmp_dict_value_5 = mod_consts[93];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[24];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            assert(!(tmp_dict_value_5 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[23];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_5 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            tmp_dict_key_6 = mod_consts[3];
            tmp_dict_value_6 = mod_consts[95];
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[21];
            tmp_dict_value_6 = mod_consts[96];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[17];
            tmp_dict_value_6 = mod_consts[97];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[24];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            assert(!(tmp_dict_value_6 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[23];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_6 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[89];
            tmp_dict_value_6 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_6, tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            tmp_dict_key_7 = mod_consts[3];
            tmp_dict_value_7 = mod_consts[99];
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[21];
            tmp_dict_value_7 = mod_consts[100];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[17];
            tmp_dict_value_7 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[24];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            assert(!(tmp_dict_value_7 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[23];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_7 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[89];
            tmp_dict_value_7 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_dict_key_8 = mod_consts[3];
            tmp_dict_value_8 = mod_consts[103];
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[21];
            tmp_dict_value_8 = mod_consts[104];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[17];
            tmp_dict_value_8 = mod_consts[105];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[24];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            assert(!(tmp_dict_value_8 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[23];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_8 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[89];
            tmp_dict_value_8 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[9];
            tmp_dict_key_9 = mod_consts[3];
            tmp_dict_value_9 = mod_consts[9];
            tmp_dict_value_1 = _PyDict_NewPresized( 6 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[21];
            tmp_dict_value_9 = mod_consts[106];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[17];
            tmp_dict_value_9 = mod_consts[107];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[24];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            assert(!(tmp_dict_value_9 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[23];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            assert(!(tmp_dict_value_9 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[89];
            tmp_dict_value_9 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[108];
            tmp_dict_key_10 = mod_consts[3];
            tmp_dict_value_10 = mod_consts[109];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[21];
            tmp_dict_value_10 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[17];
            tmp_dict_value_10 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[24];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            assert(!(tmp_dict_value_10 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[23];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_10 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[111];
            tmp_dict_key_11 = mod_consts[3];
            tmp_dict_value_11 = mod_consts[112];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[21];
            tmp_dict_value_11 = mod_consts[113];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[17];
            tmp_dict_value_11 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[24];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[23];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[114];
            tmp_dict_key_12 = mod_consts[3];
            tmp_dict_value_12 = mod_consts[115];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[21];
            tmp_dict_value_12 = mod_consts[116];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[17];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[24];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            assert(!(tmp_dict_value_12 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[23];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_12 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[117];
            tmp_dict_key_13 = mod_consts[3];
            tmp_dict_value_13 = mod_consts[118];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[21];
            tmp_dict_value_13 = mod_consts[119];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[17];
            tmp_dict_value_13 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[24];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            assert(!(tmp_dict_value_13 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[23];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_13 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[120];
            tmp_dict_key_14 = mod_consts[3];
            tmp_dict_value_14 = mod_consts[121];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[21];
            tmp_dict_value_14 = mod_consts[122];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[17];
            tmp_dict_value_14 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[24];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            assert(!(tmp_dict_value_14 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[23];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_14 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[123];
            tmp_dict_key_15 = mod_consts[3];
            tmp_dict_value_15 = mod_consts[124];
            tmp_dict_value_1 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[21];
            tmp_dict_value_15 = mod_consts[125];
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[17];
            tmp_dict_value_15 = Py_None;
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[24];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
            }

            assert(!(tmp_dict_value_15 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[23];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            assert(!(tmp_dict_value_15 == NULL));
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_25, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_25);
    }
    tmp_dictset_value = mod_consts[126];
    tmp_dictset_dict = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[37]);

    if (unlikely(tmp_dictset_dict == NULL)) {
        tmp_dictset_dict = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
    }

    assert(!(tmp_dictset_dict == NULL));
    tmp_dictset_key = mod_consts[2];
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);
    assert(!(tmp_res != 0));
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[127];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        frame_9e3d4c6d64d2d445d12728955230569b->m_frame.f_lineno = 409;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[129]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_iter_arg_1 == NULL)) {
            tmp_iter_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        assert(!(tmp_iter_arg_1 == NULL));
        tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 410;
                goto try_except_handler_1;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_30 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_1;
        }
        tmp_subscript_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_subscript_name_1 == NULL)) {
            tmp_subscript_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        assert(!(tmp_subscript_name_1 == NULL));
        tmp_expression_name_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_1;
        }
        tmp_subscript_name_2 = mod_consts[17];
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_31);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_compexpr_left_1 == NULL)) {
            tmp_compexpr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_compexpr_left_1 == NULL));
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_1;
        }
        tmp_subscript_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_subscript_name_3 == NULL)) {
            tmp_subscript_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_subscript_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_1;
        }
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_1;
        }
        frame_9e3d4c6d64d2d445d12728955230569b->m_frame.f_lineno = 413;
        tmp_ass_subvalue_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[133]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 413;

            goto try_except_handler_1;
        }
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 413;

            goto try_except_handler_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_ass_subvalue_2 == NULL)) {
            tmp_ass_subvalue_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_1;
        }
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_1;
        }
        tmp_subscript_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_subscript_name_4 == NULL)) {
            tmp_subscript_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_subscript_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_1;
        }
        tmp_ass_subscript_2 = mod_consts[17];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_ass_subscript_3;
        tmp_tuple_element_1 = mod_consts[134];
        tmp_string_concat_values_1 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_name_5;
            PyObject *tmp_expression_name_6;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_6 == NULL)) {
                tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            tmp_subscript_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_subscript_name_5 == NULL)) {
                tmp_subscript_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_subscript_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            tmp_expression_name_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
            if (tmp_expression_name_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            tmp_subscript_name_6 = mod_consts[21];
            tmp_format_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_6);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[135];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_format_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_format_value_2 == NULL)) {
                tmp_format_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[10];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_ass_subvalue_3 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto try_except_handler_1;
        }
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 415;

            goto try_except_handler_1;
        }
        tmp_subscript_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

        if (unlikely(tmp_subscript_name_7 == NULL)) {
            tmp_subscript_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
        }

        if (tmp_subscript_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 415;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 415;

            goto try_except_handler_1;
        }
        tmp_ass_subscript_3 = mod_consts[20];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto try_except_handler_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_10;
        PyObject *tmp_ass_subscript_4;
        tmp_tuple_element_2 = mod_consts[136];
        tmp_string_concat_values_2 = PyTuple_New(4);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_name_8;
            PyObject *tmp_expression_name_9;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_subscript_name_9;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_expression_name_9 == NULL)) {
                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            tmp_subscript_name_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[131]);

            if (unlikely(tmp_subscript_name_8 == NULL)) {
                tmp_subscript_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[131]);
            }

            if (tmp_subscript_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            tmp_expression_name_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_8);
            if (tmp_expression_name_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            tmp_subscript_name_9 = mod_consts[21];
            tmp_format_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_9);
            Py_DECREF(tmp_expression_name_8);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[10];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[137];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            tmp_format_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_format_value_4 == NULL)) {
                tmp_format_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            tmp_format_spec_4 = mod_consts[10];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_ass_subvalue_4 = PyUnicode_Join(mod_consts[10], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto try_except_handler_1;
        }
        tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_name_10 == NULL)) {
            tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 418;

            goto try_except_handler_1;
        }
        tmp_subscript_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_subscript_name_10 == NULL)) {
            tmp_subscript_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        if (tmp_subscript_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 418;

            goto try_except_handler_1;
        }
        tmp_ass_subscribed_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 418;

            goto try_except_handler_1;
        }
        tmp_ass_subscript_4 = mod_consts[20];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subscribed_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto try_except_handler_1;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 410;

        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e3d4c6d64d2d445d12728955230569b);
#endif
    popFrameStack();

    assertFrameObject(frame_9e3d4c6d64d2d445d12728955230569b);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_9e3d4c6d64d2d445d12728955230569b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9e3d4c6d64d2d445d12728955230569b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e3d4c6d64d2d445d12728955230569b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e3d4c6d64d2d445d12728955230569b, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[138];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[140];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_pandas$core$ops$docstrings, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_35);
    }

    return module_pandas$core$ops$docstrings;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

