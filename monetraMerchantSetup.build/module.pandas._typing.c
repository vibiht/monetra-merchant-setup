/* Generated code for Python module 'pandas._typing'
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

/* The "module_pandas$_typing" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$_typing;
PyDictObject *moduledict_pandas$_typing;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[176];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas._typing"));
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
void checkModuleConstants_pandas$_typing(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "pandas._typing");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0204c838f7ac9dbca9217f649af20224;
static PyCodeObject *codeobj_0e500ac31c03f048610850f729dc1e28;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[173]); CHECK_OBJECT(module_filename_obj);
    codeobj_0204c838f7ac9dbca9217f649af20224 = MAKE_CODEOBJECT(module_filename_obj, 77, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[174], NULL, 1, 0, 0);
    codeobj_0e500ac31c03f048610850f729dc1e28 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pandas$_typing$$$function__1_lambda();


// The module function definitions.
static PyObject *impl_pandas$_typing$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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



static PyObject *MAKE_FUNCTION_pandas$_typing$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$_typing$$$function__1_lambda,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0204c838f7ac9dbca9217f649af20224,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$_typing,
        NULL,
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

function_impl_code functable_pandas$_typing[] = {
    impl_pandas$_typing$$$function__1_lambda,
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

    function_impl_code *current = functable_pandas$_typing;
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

    if (offset > sizeof(functable_pandas$_typing) || offset < 0) {
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
        functable_pandas$_typing[offset],
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
        module_pandas$_typing,
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
PyObject *modulecode_pandas$_typing(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_pandas$_typing = module;

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
    PRINT_STRING("pandas._typing: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas._typing: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("pandas._typing: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initpandas$_typing\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_pandas$_typing = MODULE_DICT(module_pandas$_typing);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$_typing,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$_typing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$_typing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$_typing);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$_typing);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_import_from_7__module = NULL;
    struct Nuitka_FrameObject *frame_0e500ac31c03f048610850f729dc1e28;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_0e500ac31c03f048610850f729dc1e28 = MAKE_MODULE_FRAME(codeobj_0e500ac31c03f048610850f729dc1e28, module_pandas$_typing);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_0e500ac31c03f048610850f729dc1e28);
    assert(Py_REFCNT(frame_0e500ac31c03f048610850f729dc1e28) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[3], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[4], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[6];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[7];
        tmp_level_name_1 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[6],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[6]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[9],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[9]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[10],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[10]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
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
        tmp_name_name_2 = mod_consts[11];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[12];
        tmp_level_name_2 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[13],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[13]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[14],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[14]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[15],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[15]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[16],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[16]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[17];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[18];
        tmp_level_name_3 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 12;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_import_name_from_8 == NULL));
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[17],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[17]);
        }

        Py_DECREF(tmp_import_name_from_8);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 13;
        tmp_import_name_from_9 = IMPORT_HARD_OS();
        assert(!(tmp_import_name_from_9 == NULL));
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[19],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[19]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[20];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[21];
        tmp_level_name_4 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 14;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[22],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[22]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[23],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[23]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_12 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[24],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[24]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_13 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[25],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[25]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_14 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[26],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[26]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_15 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[27],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[27]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_16 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[28],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[28]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[29],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[29]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[30],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[30]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[31],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[31]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[32],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[32]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[33],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[33]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[34],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[34]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[35],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[35]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[37],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[37]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[38],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[38]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[39];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 33;
        tmp_assign_source_32 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_32);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

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
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[20];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[41];
        tmp_level_name_6 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 39;
        tmp_assign_source_33 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_33;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_26 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[42],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[42]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_27 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[43],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[43]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_28 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[44],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[44]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_36);
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
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[45];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[46];
        tmp_level_name_7 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 45;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_29 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[47],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[47]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_30 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[48],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[48]);
        }

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_31 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[49],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[49]);
        }

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_40);
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
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[50];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[51];
        tmp_level_name_8 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 51;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[52],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[53];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[54];
        tmp_level_name_9 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 53;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[55],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[56];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[57];
        tmp_level_name_10 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 54;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[58],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_arg_name_11;
        PyObject *tmp_locals_arg_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = mod_consts[59];
        tmp_globals_arg_name_11 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_11 = Py_None;
        tmp_fromlist_name_11 = mod_consts[60];
        tmp_level_name_11 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 55;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_name_11, tmp_globals_arg_name_11, tmp_locals_arg_name_11, tmp_fromlist_name_11, tmp_level_name_11);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[61],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_arg_name_12;
        PyObject *tmp_locals_arg_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = mod_consts[62];
        tmp_globals_arg_name_12 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_12 = Py_None;
        tmp_fromlist_name_12 = mod_consts[63];
        tmp_level_name_12 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 56;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_name_12, tmp_globals_arg_name_12, tmp_locals_arg_name_12, tmp_fromlist_name_12, tmp_level_name_12);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[64],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_arg_name_13;
        PyObject *tmp_locals_arg_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = mod_consts[65];
        tmp_globals_arg_name_13 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_13 = Py_None;
        tmp_fromlist_name_13 = mod_consts[66];
        tmp_level_name_13 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 57;
        tmp_assign_source_46 = IMPORT_MODULE5(tmp_name_name_13, tmp_globals_arg_name_13, tmp_locals_arg_name_13, tmp_fromlist_name_13, tmp_level_name_13);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_37 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[67],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[67]);
        }

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_38 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[68],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_48 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[68]);
        }

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_39 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[69],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_49 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[69]);
        }

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_49);
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
        PyObject *tmp_assign_source_50;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_arg_name_14;
        PyObject *tmp_locals_arg_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = mod_consts[70];
        tmp_globals_arg_name_14 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_14 = Py_None;
        tmp_fromlist_name_14 = mod_consts[71];
        tmp_level_name_14 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 62;
        tmp_import_name_from_40 = IMPORT_MODULE5(tmp_name_name_14, tmp_globals_arg_name_14, tmp_locals_arg_name_14, tmp_fromlist_name_14, tmp_level_name_14);
        if (tmp_import_name_from_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[72],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_50 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_40);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_arg_name_15;
        PyObject *tmp_locals_arg_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = mod_consts[73];
        tmp_globals_arg_name_15 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_15 = Py_None;
        tmp_fromlist_name_15 = mod_consts[74];
        tmp_level_name_15 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 63;
        tmp_assign_source_51 = IMPORT_MODULE5(tmp_name_name_15, tmp_globals_arg_name_15, tmp_locals_arg_name_15, tmp_fromlist_name_15, tmp_level_name_15);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_51;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_import_name_from_41;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_41 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[75],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_52 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[75]);
        }

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_import_name_from_42;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_42 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_42)) {
            tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_42,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[76],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_53 = IMPORT_NAME(tmp_import_name_from_42, mod_consts[76]);
        }

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_import_name_from_43;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_43 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_43)) {
            tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_43,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[77],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_54 = IMPORT_NAME(tmp_import_name_from_43, mod_consts[77]);
        }

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_import_name_from_44;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_44 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_44)) {
            tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_44,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[78],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_55 = IMPORT_NAME(tmp_import_name_from_44, mod_consts[78]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_55);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_import_name_from_45;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_arg_name_16;
        PyObject *tmp_locals_arg_name_16;
        PyObject *tmp_fromlist_name_16;
        PyObject *tmp_level_name_16;
        tmp_name_name_16 = mod_consts[79];
        tmp_globals_arg_name_16 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_16 = Py_None;
        tmp_fromlist_name_16 = mod_consts[80];
        tmp_level_name_16 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 69;
        tmp_import_name_from_45 = IMPORT_MODULE5(tmp_name_name_16, tmp_globals_arg_name_16, tmp_locals_arg_name_16, tmp_fromlist_name_16, tmp_level_name_16);
        if (tmp_import_name_from_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_45)) {
            tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_45,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[81],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_56 = IMPORT_NAME(tmp_import_name_from_45, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_45);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_import_name_from_46;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_arg_name_17;
        PyObject *tmp_locals_arg_name_17;
        PyObject *tmp_fromlist_name_17;
        PyObject *tmp_level_name_17;
        tmp_name_name_17 = mod_consts[82];
        tmp_globals_arg_name_17 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_17 = Py_None;
        tmp_fromlist_name_17 = mod_consts[83];
        tmp_level_name_17 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 70;
        tmp_import_name_from_46 = IMPORT_MODULE5(tmp_name_name_17, tmp_globals_arg_name_17, tmp_locals_arg_name_17, tmp_fromlist_name_17, tmp_level_name_17);
        if (tmp_import_name_from_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_46)) {
            tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_46,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[84],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_57 = IMPORT_NAME(tmp_import_name_from_46, mod_consts[84]);
        }

        Py_DECREF(tmp_import_name_from_46);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_import_name_from_47;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_arg_name_18;
        PyObject *tmp_locals_arg_name_18;
        PyObject *tmp_fromlist_name_18;
        PyObject *tmp_level_name_18;
        tmp_name_name_18 = mod_consts[85];
        tmp_globals_arg_name_18 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_18 = Py_None;
        tmp_fromlist_name_18 = mod_consts[86];
        tmp_level_name_18 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 71;
        tmp_import_name_from_47 = IMPORT_MODULE5(tmp_name_name_18, tmp_globals_arg_name_18, tmp_locals_arg_name_18, tmp_fromlist_name_18, tmp_level_name_18);
        if (tmp_import_name_from_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_47)) {
            tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_47,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[87],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_58 = IMPORT_NAME(tmp_import_name_from_47, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_47);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_import_name_from_48;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_arg_name_19;
        PyObject *tmp_locals_arg_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_19;
        tmp_name_name_19 = mod_consts[88];
        tmp_globals_arg_name_19 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_19 = Py_None;
        tmp_fromlist_name_19 = mod_consts[89];
        tmp_level_name_19 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 73;
        tmp_import_name_from_48 = IMPORT_MODULE5(tmp_name_name_19, tmp_globals_arg_name_19, tmp_locals_arg_name_19, tmp_fromlist_name_19, tmp_level_name_19);
        if (tmp_import_name_from_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_48)) {
            tmp_assign_source_59 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_48,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[90],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_59 = IMPORT_NAME(tmp_import_name_from_48, mod_consts[90]);
        }

        Py_DECREF(tmp_import_name_from_48);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_import_name_from_49;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_arg_name_20;
        PyObject *tmp_locals_arg_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_20;
        tmp_name_name_20 = mod_consts[91];
        tmp_globals_arg_name_20 = (PyObject *)moduledict_pandas$_typing;
        tmp_locals_arg_name_20 = Py_None;
        tmp_fromlist_name_20 = mod_consts[92];
        tmp_level_name_20 = mod_consts[8];
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 74;
        tmp_import_name_from_49 = IMPORT_MODULE5(tmp_name_name_20, tmp_globals_arg_name_20, tmp_locals_arg_name_20, tmp_fromlist_name_20, tmp_level_name_20);
        if (tmp_import_name_from_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_49)) {
            tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_49,
                (PyObject *)moduledict_pandas$_typing,
                mod_consts[93],
                mod_consts[8]
            );
        } else {
            tmp_assign_source_60 = IMPORT_NAME(tmp_import_name_from_49, mod_consts[93]);
        }

        Py_DECREF(tmp_import_name_from_49);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_60);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_61;


        tmp_assign_source_61 = MAKE_FUNCTION_pandas$_typing$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = (PyObject *)&PyDict_Type;
        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_62);
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[58];
        tmp_subscript_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_2;
            PyTuple_SET_ITEM0(tmp_subscript_name_1, 0, tmp_tuple_element_1);
            tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_2 == NULL)) {
                tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[95]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_name_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_63 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_subscript_name_1);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_3 == NULL)) {
            tmp_expression_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        assert(!(tmp_tuple_element_2 == NULL));
        tmp_subscript_name_2 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_subscript_name_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[72];
        PyTuple_SET_ITEM0(tmp_subscript_name_2, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[84];
        PyTuple_SET_ITEM0(tmp_subscript_name_2, 2, tmp_tuple_element_2);
        tmp_assign_source_64 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_3;
        tmp_expression_name_4 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_4 == NULL)) {
            tmp_expression_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[98];
        tmp_assign_source_65 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_3);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_4;
        tmp_expression_name_5 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_5 == NULL)) {
            tmp_expression_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_4 = mod_consts[100];
        tmp_assign_source_66 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_4);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_5;
        tmp_expression_name_6 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_6 == NULL)) {
            tmp_expression_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_5 = mod_consts[102];
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_5);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_tuple_element_3;
        tmp_expression_name_7 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_7 == NULL)) {
            tmp_expression_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_6 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_6, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        assert(!(tmp_tuple_element_3 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_name_6, 1, tmp_tuple_element_3);
        tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_6);
        Py_DECREF(tmp_subscript_name_6);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_7;
        PyObject *tmp_tuple_element_4;
        tmp_expression_name_8 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_8 == NULL)) {
            tmp_expression_name_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = mod_consts[49];
        tmp_subscript_name_7 = PyTuple_New(7);
        {
            PyObject *tmp_expression_name_9;
            PyObject *tmp_expression_name_10;
            PyTuple_SET_ITEM0(tmp_subscript_name_7, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_7, 1, tmp_tuple_element_4);
            tmp_expression_name_9 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_9 == NULL)) {
                tmp_expression_name_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[105]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_7, 2, tmp_tuple_element_4);
            tmp_tuple_element_4 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_7, 3, tmp_tuple_element_4);
            tmp_expression_name_10 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_10 == NULL)) {
                tmp_expression_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[106]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_7, 4, tmp_tuple_element_4);
            tmp_tuple_element_4 = (PyObject *)&PyFloat_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_7, 5, tmp_tuple_element_4);
            tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_7, 6, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_7);
        Py_DECREF(tmp_subscript_name_7);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_8;
        PyObject *tmp_tuple_element_5;
        tmp_expression_name_11 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_11 == NULL)) {
            tmp_expression_name_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = mod_consts[48];
        tmp_subscript_name_8 = PyTuple_New(7);
        {
            PyObject *tmp_expression_name_12;
            PyObject *tmp_expression_name_13;
            PyTuple_SET_ITEM0(tmp_subscript_name_8, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_8, 1, tmp_tuple_element_5);
            tmp_expression_name_12 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_12 == NULL)) {
                tmp_expression_name_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[108]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_8, 2, tmp_tuple_element_5);
            tmp_tuple_element_5 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_8, 3, tmp_tuple_element_5);
            tmp_expression_name_13 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_13 == NULL)) {
                tmp_expression_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[106]);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_8, 4, tmp_tuple_element_5);
            tmp_tuple_element_5 = (PyObject *)&PyFloat_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_8, 5, tmp_tuple_element_5);
            tmp_tuple_element_5 = (PyObject *)&PyUnicode_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_8, 6, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_name_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_70 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_8);
        Py_DECREF(tmp_subscript_name_8);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_9;
        PyObject *tmp_tuple_element_6;
        tmp_expression_name_14 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_14 == NULL)) {
            tmp_expression_name_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_9 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_9, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_9, 1, tmp_tuple_element_6);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_name_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_71 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_9);
        Py_DECREF(tmp_subscript_name_9);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_10;
        tmp_expression_name_15 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_15 == NULL)) {
            tmp_expression_name_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_10 = mod_consts[111];
        tmp_assign_source_72 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_10);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[113];
        tmp_kwargs_name_1 = PyDict_Copy(mod_consts[114]);
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 114;
        tmp_assign_source_73 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_subscript_name_11;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_11 = mod_consts[116];
        tmp_assign_source_74 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_11);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_12;
        PyObject *tmp_tuple_element_7;
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_12 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_18;
            PyObject *tmp_subscript_name_13;
            PyTuple_SET_ITEM0(tmp_subscript_name_12, 0, tmp_tuple_element_7);
            tmp_expression_name_18 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_18 == NULL)) {
                tmp_expression_name_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_5;
            }
            tmp_subscript_name_13 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_subscript_name_13 == NULL)) {
                tmp_subscript_name_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_subscript_name_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_5;
            }
            tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_13);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_12, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_name_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_75 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_12);
        Py_DECREF(tmp_subscript_name_12);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_14;
        PyObject *tmp_tuple_element_8;
        tmp_expression_name_19 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_19 == NULL)) {
            tmp_expression_name_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_14 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_14, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_name_14, 1, tmp_tuple_element_8);
        tmp_assign_source_76 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_14);
        Py_DECREF(tmp_subscript_name_14);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_subscript_name_15;
        tmp_expression_name_20 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_20 == NULL)) {
            tmp_expression_name_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_15 = mod_consts[120];
        tmp_assign_source_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_15);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_16;
        tmp_expression_name_21 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_name_21 == NULL)) {
            tmp_expression_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_16 = mod_consts[122];
        tmp_assign_source_78 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_16);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_17;
        tmp_expression_name_22 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_22 == NULL)) {
            tmp_expression_name_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_17 = (PyObject *)&PyBool_Type;
        tmp_assign_source_79 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_17);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_18;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_subscript_name_19;
        PyObject *tmp_tuple_element_9;
        tmp_expression_name_23 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_23 == NULL)) {
            tmp_expression_name_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_24 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_24 == NULL)) {
            tmp_expression_name_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[99]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_19 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_subscript_name_19, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_19, 1, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_19, 2, tmp_tuple_element_9);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_name_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_subscript_name_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_24, tmp_subscript_name_19);
        Py_DECREF(tmp_subscript_name_19);
        if (tmp_subscript_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_18);
        Py_DECREF(tmp_subscript_name_18);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_subscript_name_20;
        tmp_expression_name_25 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_25 == NULL)) {
            tmp_expression_name_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_20 = mod_consts[126];
        tmp_assign_source_81 = LOOKUP_SUBSCRIPT(tmp_expression_name_25, tmp_subscript_name_20);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_subscript_name_21;
        tmp_expression_name_26 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_name_26 == NULL)) {
            tmp_expression_name_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_21 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_subscript_name_21 == NULL)) {
            tmp_subscript_name_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_subscript_name_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = LOOKUP_SUBSCRIPT(tmp_expression_name_26, tmp_subscript_name_21);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_subscript_name_22;
        PyObject *tmp_tuple_element_10;
        tmp_expression_name_27 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_27 == NULL)) {
            tmp_expression_name_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_22 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_28;
            PyTuple_SET_ITEM0(tmp_subscript_name_22, 0, tmp_tuple_element_10);
            tmp_expression_name_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_28 == NULL)) {
                tmp_expression_name_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_7;
            }
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[129]);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_22, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_name_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_83 = LOOKUP_SUBSCRIPT(tmp_expression_name_27, tmp_subscript_name_22);
        Py_DECREF(tmp_subscript_name_22);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_subscript_name_23;
        PyObject *tmp_tuple_element_11;
        tmp_expression_name_29 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_29 == NULL)) {
            tmp_expression_name_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = mod_consts[52];
        tmp_subscript_name_23 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_30;
            PyObject *tmp_subscript_name_24;
            PyObject *tmp_expression_name_31;
            PyObject *tmp_subscript_name_25;
            PyTuple_SET_ITEM0(tmp_subscript_name_23, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[130]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
            }

            assert(!(tmp_tuple_element_11 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_name_23, 1, tmp_tuple_element_11);
            tmp_expression_name_30 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_expression_name_30 == NULL)) {
                tmp_expression_name_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
            }

            if (tmp_expression_name_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_8;
            }
            tmp_expression_name_31 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_31 == NULL)) {
                tmp_expression_name_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_8;
            }
            tmp_subscript_name_25 = mod_consts[131];
            tmp_subscript_name_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_31, tmp_subscript_name_25);
            if (tmp_subscript_name_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_8;
            }
            tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_30, tmp_subscript_name_24);
            Py_DECREF(tmp_subscript_name_24);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_23, 2, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_name_23);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_84 = LOOKUP_SUBSCRIPT(tmp_expression_name_29, tmp_subscript_name_23);
        Py_DECREF(tmp_subscript_name_23);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_subscript_name_26;
        PyObject *tmp_tuple_element_12;
        tmp_expression_name_32 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_32 == NULL)) {
            tmp_expression_name_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[132]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
        }

        assert(!(tmp_tuple_element_12 == NULL));
        tmp_subscript_name_26 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_33;
            PyObject *tmp_subscript_name_27;
            PyObject *tmp_tuple_element_13;
            PyTuple_SET_ITEM0(tmp_subscript_name_26, 0, tmp_tuple_element_12);
            tmp_expression_name_33 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28]);

            if (unlikely(tmp_expression_name_33 == NULL)) {
                tmp_expression_name_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
            }

            if (tmp_expression_name_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_9;
            }
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_9;
            }
            tmp_subscript_name_27 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_27, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[132]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[132]);
            }

            assert(!(tmp_tuple_element_13 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_name_27, 1, tmp_tuple_element_13);
            tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_33, tmp_subscript_name_27);
            Py_DECREF(tmp_subscript_name_27);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_26, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_name_26);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assign_source_85 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_26);
        Py_DECREF(tmp_subscript_name_26);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_28;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_expression_name_35;
        tmp_expression_name_34 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_34 == NULL)) {
            tmp_expression_name_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_35 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_name_35 == NULL)) {
            tmp_expression_name_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_name_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[129]);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_28 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_name_28, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = mod_consts[52];
        PyTuple_SET_ITEM0(tmp_subscript_name_28, 1, tmp_tuple_element_14);
        tmp_assign_source_86 = LOOKUP_SUBSCRIPT(tmp_expression_name_34, tmp_subscript_name_28);
        Py_DECREF(tmp_subscript_name_28);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_subscript_name_29;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_subscript_name_30;
        PyObject *tmp_tuple_element_16;
        tmp_expression_name_36 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_36 == NULL)) {
            tmp_expression_name_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_37 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_name_37 == NULL)) {
            tmp_expression_name_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_30 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_30, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_30, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_name_30);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_37, tmp_subscript_name_30);
        Py_DECREF(tmp_subscript_name_30);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_29 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_38;
            PyObject *tmp_subscript_name_31;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_list_element_1;
            PyTuple_SET_ITEM(tmp_subscript_name_29, 0, tmp_tuple_element_15);
            tmp_expression_name_38 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_expression_name_38 == NULL)) {
                tmp_expression_name_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_expression_name_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_11;
            }
            tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_list_element_1 == NULL)) {
                tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_11;
            }
            tmp_tuple_element_17 = PyList_New(1);
            PyList_SET_ITEM0(tmp_tuple_element_17, 0, tmp_list_element_1);
            tmp_subscript_name_31 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_name_31, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_31, 1, tmp_tuple_element_17);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_subscript_name_31);
            goto tuple_build_exception_11;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_tuple_element_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_38, tmp_subscript_name_31);
            Py_DECREF(tmp_subscript_name_31);
            if (tmp_tuple_element_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_29, 1, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_name_29);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assign_source_87 = LOOKUP_SUBSCRIPT(tmp_expression_name_36, tmp_subscript_name_29);
        Py_DECREF(tmp_subscript_name_29);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 139;
        tmp_assign_source_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[136]);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_subscript_name_32;
        PyObject *tmp_tuple_element_18;
        tmp_expression_name_39 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_39 == NULL)) {
            tmp_expression_name_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = Py_Ellipsis;
        tmp_subscript_name_32 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_32, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto tuple_build_exception_13;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_32, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_subscript_name_32);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_assign_source_89 = LOOKUP_SUBSCRIPT(tmp_expression_name_39, tmp_subscript_name_32);
        Py_DECREF(tmp_subscript_name_32);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_name_2;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = mod_consts[138];
        tmp_dict_key_1 = mod_consts[139];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_0e500ac31c03f048610850f729dc1e28->m_frame.f_lineno = 144;
        tmp_assign_source_90 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_assign_source_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_subscript_name_33;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_subscript_name_34;
        PyObject *tmp_tuple_element_19;
        tmp_expression_name_40 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_40 == NULL)) {
            tmp_expression_name_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_41 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_41 == NULL)) {
            tmp_expression_name_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = LIST_COPY(mod_consts[141]);
        tmp_subscript_name_34 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_42;
            PyObject *tmp_subscript_name_35;
            PyObject *tmp_tuple_element_20;
            PyTuple_SET_ITEM(tmp_subscript_name_34, 0, tmp_tuple_element_19);
            tmp_expression_name_42 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_42 == NULL)) {
                tmp_expression_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_14;
            }
            tmp_tuple_element_20 = mod_consts[84];
            tmp_subscript_name_35 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_35, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_35, 1, tmp_tuple_element_20);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_subscript_name_35);
            goto tuple_build_exception_14;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_42, tmp_subscript_name_35);
            Py_DECREF(tmp_subscript_name_35);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_34, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_name_34);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_subscript_name_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_41, tmp_subscript_name_34);
        Py_DECREF(tmp_subscript_name_34);
        if (tmp_subscript_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_91 = LOOKUP_SUBSCRIPT(tmp_expression_name_40, tmp_subscript_name_33);
        Py_DECREF(tmp_subscript_name_33);
        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_subscript_name_36;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_subscript_name_37;
        PyObject *tmp_tuple_element_21;
        tmp_expression_name_43 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_43 == NULL)) {
            tmp_expression_name_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_44 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_44 == NULL)) {
            tmp_expression_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = LIST_COPY(mod_consts[143]);
        tmp_subscript_name_37 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_45;
            PyObject *tmp_subscript_name_38;
            PyObject *tmp_tuple_element_22;
            PyTuple_SET_ITEM(tmp_subscript_name_37, 0, tmp_tuple_element_21);
            tmp_expression_name_45 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_45 == NULL)) {
                tmp_expression_name_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_16;
            }
            tmp_tuple_element_22 = mod_consts[72];
            tmp_subscript_name_38 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_38, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_38, 1, tmp_tuple_element_22);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_subscript_name_38);
            goto tuple_build_exception_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_45, tmp_subscript_name_38);
            Py_DECREF(tmp_subscript_name_38);
            if (tmp_tuple_element_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 149;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_37, 1, tmp_tuple_element_21);
        }
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_name_37);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_subscript_name_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_44, tmp_subscript_name_37);
        Py_DECREF(tmp_subscript_name_37);
        if (tmp_subscript_name_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_92 = LOOKUP_SUBSCRIPT(tmp_expression_name_43, tmp_subscript_name_36);
        Py_DECREF(tmp_subscript_name_36);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_subscript_name_39;
        PyObject *tmp_tuple_element_23;
        tmp_expression_name_46 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_46 == NULL)) {
            tmp_expression_name_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_23 == NULL)) {
            tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_39 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_39, 0, tmp_tuple_element_23);
        tmp_tuple_element_23 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_name_39, 1, tmp_tuple_element_23);
        tmp_assign_source_93 = LOOKUP_SUBSCRIPT(tmp_expression_name_46, tmp_subscript_name_39);
        Py_DECREF(tmp_subscript_name_39);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_subscript_name_40;
        PyObject *tmp_tuple_element_24;
        tmp_expression_name_47 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_47 == NULL)) {
            tmp_expression_name_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_24 == NULL)) {
            tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_40 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_48;
            PyObject *tmp_subscript_name_41;
            PyObject *tmp_tuple_element_25;
            PyTuple_SET_ITEM0(tmp_subscript_name_40, 0, tmp_tuple_element_24);
            tmp_expression_name_48 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_48 == NULL)) {
                tmp_expression_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_18;
            }
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[145]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
            }

            assert(!(tmp_tuple_element_25 == NULL));
            tmp_subscript_name_41 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_49;
                PyObject *tmp_subscript_name_42;
                PyTuple_SET_ITEM0(tmp_subscript_name_41, 0, tmp_tuple_element_25);
                tmp_expression_name_49 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[30]);

                if (unlikely(tmp_expression_name_49 == NULL)) {
                    tmp_expression_name_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
                }

                if (tmp_expression_name_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto tuple_build_exception_19;
                }
                tmp_subscript_name_42 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[145]);

                if (unlikely(tmp_subscript_name_42 == NULL)) {
                    tmp_subscript_name_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
                }

                assert(!(tmp_subscript_name_42 == NULL));
                tmp_tuple_element_25 = LOOKUP_SUBSCRIPT(tmp_expression_name_49, tmp_subscript_name_42);
                if (tmp_tuple_element_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 153;

                    goto tuple_build_exception_19;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_41, 1, tmp_tuple_element_25);
            }
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_subscript_name_41);
            goto tuple_build_exception_18;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_tuple_element_24 = LOOKUP_SUBSCRIPT(tmp_expression_name_48, tmp_subscript_name_41);
            Py_DECREF(tmp_subscript_name_41);
            if (tmp_tuple_element_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_40, 1, tmp_tuple_element_24);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_name_40);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_assign_source_94 = LOOKUP_SUBSCRIPT(tmp_expression_name_47, tmp_subscript_name_40);
        Py_DECREF(tmp_subscript_name_40);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_subscript_name_43;
        PyObject *tmp_tuple_element_26;
        tmp_expression_name_50 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_50 == NULL)) {
            tmp_expression_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_tuple_element_26 == NULL)) {
            tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_43 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_51;
            PyObject *tmp_subscript_name_44;
            PyTuple_SET_ITEM0(tmp_subscript_name_43, 0, tmp_tuple_element_26);
            tmp_expression_name_51 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[30]);

            if (unlikely(tmp_expression_name_51 == NULL)) {
                tmp_expression_name_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
            }

            if (tmp_expression_name_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_20;
            }
            tmp_subscript_name_44 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[145]);

            if (unlikely(tmp_subscript_name_44 == NULL)) {
                tmp_subscript_name_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
            }

            if (tmp_subscript_name_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_20;
            }
            tmp_tuple_element_26 = LOOKUP_SUBSCRIPT(tmp_expression_name_51, tmp_subscript_name_44);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_43, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_43, 2, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_20;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_20:;
        Py_DECREF(tmp_subscript_name_43);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_20:;
        tmp_assign_source_95 = LOOKUP_SUBSCRIPT(tmp_expression_name_50, tmp_subscript_name_43);
        Py_DECREF(tmp_subscript_name_43);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[147], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_expression_name_52;
        PyObject *tmp_subscript_name_45;
        tmp_expression_name_52 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_52 == NULL)) {
            tmp_expression_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_45 = mod_consts[148];
        tmp_assign_source_96 = LOOKUP_SUBSCRIPT(tmp_expression_name_52, tmp_subscript_name_45);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_expression_name_53;
        PyObject *tmp_subscript_name_46;
        PyObject *tmp_tuple_element_27;
        PyObject *tmp_list_element_2;
        tmp_expression_name_53 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_expression_name_53 == NULL)) {
            tmp_expression_name_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_expression_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_list_element_2 == NULL)) {
            tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_27 = PyList_New(1);
        PyList_SET_ITEM0(tmp_tuple_element_27, 0, tmp_list_element_2);
        tmp_subscript_name_46 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_subscript_name_46, 0, tmp_tuple_element_27);
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_27 == NULL)) {
            tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto tuple_build_exception_21;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_46, 1, tmp_tuple_element_27);
        goto tuple_build_noexception_21;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_21:;
        Py_DECREF(tmp_subscript_name_46);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_21:;
        tmp_assign_source_97 = LOOKUP_SUBSCRIPT(tmp_expression_name_53, tmp_subscript_name_46);
        Py_DECREF(tmp_subscript_name_46);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_expression_name_54;
        PyObject *tmp_subscript_name_47;
        PyObject *tmp_tuple_element_28;
        PyObject *tmp_expression_name_55;
        PyObject *tmp_subscript_name_48;
        tmp_expression_name_54 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_54 == NULL)) {
            tmp_expression_name_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_55 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_name_55 == NULL)) {
            tmp_expression_name_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_name_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_48 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_subscript_name_48 == NULL)) {
            tmp_subscript_name_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_subscript_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_55, tmp_subscript_name_48);
        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_47 = PyTuple_New(6);
        PyTuple_SET_ITEM(tmp_subscript_name_47, 0, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_47, 1, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_47, 2, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_47, 3, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_47, 4, tmp_tuple_element_28);
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_tuple_element_28 == NULL)) {
            tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_tuple_element_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto tuple_build_exception_22;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_47, 5, tmp_tuple_element_28);
        goto tuple_build_noexception_22;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_22:;
        Py_DECREF(tmp_subscript_name_47);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_22:;
        tmp_assign_source_98 = LOOKUP_SUBSCRIPT(tmp_expression_name_54, tmp_subscript_name_47);
        Py_DECREF(tmp_subscript_name_47);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_expression_name_56;
        PyObject *tmp_subscript_name_49;
        PyObject *tmp_tuple_element_29;
        tmp_expression_name_56 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_56 == NULL)) {
            tmp_expression_name_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_29 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_49 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_57;
            PyObject *tmp_subscript_name_50;
            PyTuple_SET_ITEM0(tmp_subscript_name_49, 0, tmp_tuple_element_29);
            tmp_expression_name_57 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[151]);

            if (unlikely(tmp_expression_name_57 == NULL)) {
                tmp_expression_name_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
            }

            assert(!(tmp_expression_name_57 == NULL));
            tmp_subscript_name_50 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_name_50 == NULL)) {
                tmp_subscript_name_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_name_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_23;
            }
            tmp_tuple_element_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_57, tmp_subscript_name_50);
            if (tmp_tuple_element_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_49, 1, tmp_tuple_element_29);
        }
        goto tuple_build_noexception_23;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_23:;
        Py_DECREF(tmp_subscript_name_49);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_23:;
        tmp_assign_source_99 = LOOKUP_SUBSCRIPT(tmp_expression_name_56, tmp_subscript_name_49);
        Py_DECREF(tmp_subscript_name_49);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_expression_name_58;
        PyObject *tmp_subscript_name_51;
        PyObject *tmp_tuple_element_30;
        tmp_expression_name_58 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_58 == NULL)) {
            tmp_expression_name_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_30 = mod_consts[153];
        tmp_subscript_name_51 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_59;
            PyObject *tmp_subscript_name_52;
            PyTuple_SET_ITEM0(tmp_subscript_name_51, 0, tmp_tuple_element_30);
            tmp_expression_name_59 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_expression_name_59 == NULL)) {
                tmp_expression_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
            }

            assert(!(tmp_expression_name_59 == NULL));
            tmp_subscript_name_52 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[25]);

            if (unlikely(tmp_subscript_name_52 == NULL)) {
                tmp_subscript_name_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
            }

            if (tmp_subscript_name_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_24;
            }
            tmp_tuple_element_30 = LOOKUP_SUBSCRIPT(tmp_expression_name_59, tmp_subscript_name_52);
            if (tmp_tuple_element_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_51, 1, tmp_tuple_element_30);
        }
        goto tuple_build_noexception_24;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_24:;
        Py_DECREF(tmp_subscript_name_51);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_24:;
        tmp_assign_source_100 = LOOKUP_SUBSCRIPT(tmp_expression_name_58, tmp_subscript_name_51);
        Py_DECREF(tmp_subscript_name_51);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_expression_name_60;
        PyObject *tmp_subscript_name_53;
        PyObject *tmp_expression_name_61;
        PyObject *tmp_subscript_name_54;
        PyObject *tmp_tuple_element_31;
        tmp_expression_name_60 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_60 == NULL)) {
            tmp_expression_name_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_61 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_61 == NULL)) {
            tmp_expression_name_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_31 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_54 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_54, 0, tmp_tuple_element_31);
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_31 == NULL)) {
            tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto tuple_build_exception_25;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_54, 1, tmp_tuple_element_31);
        goto tuple_build_noexception_25;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_25:;
        Py_DECREF(tmp_subscript_name_54);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_25:;
        tmp_subscript_name_53 = LOOKUP_SUBSCRIPT(tmp_expression_name_61, tmp_subscript_name_54);
        Py_DECREF(tmp_subscript_name_54);
        if (tmp_subscript_name_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_101 = LOOKUP_SUBSCRIPT(tmp_expression_name_60, tmp_subscript_name_53);
        Py_DECREF(tmp_subscript_name_53);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_expression_name_62;
        PyObject *tmp_subscript_name_55;
        PyObject *tmp_tuple_element_32;
        tmp_expression_name_62 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_name_62 == NULL)) {
            tmp_expression_name_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_expression_name_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_32 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_55 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_55, 0, tmp_tuple_element_32);
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_tuple_element_32 == NULL)) {
            tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_tuple_element_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto tuple_build_exception_26;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_55, 1, tmp_tuple_element_32);
        goto tuple_build_noexception_26;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_26:;
        Py_DECREF(tmp_subscript_name_55);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_26:;
        tmp_assign_source_102 = LOOKUP_SUBSCRIPT(tmp_expression_name_62, tmp_subscript_name_55);
        Py_DECREF(tmp_subscript_name_55);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_expression_name_63;
        PyObject *tmp_subscript_name_56;
        PyObject *tmp_expression_name_64;
        PyObject *tmp_subscript_name_57;
        PyObject *tmp_tuple_element_33;
        tmp_expression_name_63 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_expression_name_63 == NULL)) {
            tmp_expression_name_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_expression_name_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_64 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_64 == NULL)) {
            tmp_expression_name_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_33 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_57 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_subscript_name_57, 0, tmp_tuple_element_33);
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_tuple_element_33 == NULL)) {
            tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        assert(!(tmp_tuple_element_33 == NULL));
        PyTuple_SET_ITEM0(tmp_subscript_name_57, 1, tmp_tuple_element_33);
        tmp_subscript_name_56 = LOOKUP_SUBSCRIPT(tmp_expression_name_64, tmp_subscript_name_57);
        Py_DECREF(tmp_subscript_name_57);
        if (tmp_subscript_name_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_103 = LOOKUP_SUBSCRIPT(tmp_expression_name_63, tmp_subscript_name_56);
        Py_DECREF(tmp_subscript_name_56);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_expression_name_65;
        PyObject *tmp_subscript_name_58;
        PyObject *tmp_tuple_element_34;
        PyObject *tmp_expression_name_66;
        PyObject *tmp_subscript_name_59;
        tmp_expression_name_65 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_65 == NULL)) {
            tmp_expression_name_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_expression_name_66 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_expression_name_66 == NULL)) {
            tmp_expression_name_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_expression_name_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_59 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_subscript_name_59 == NULL)) {
            tmp_subscript_name_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_subscript_name_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_66, tmp_subscript_name_59);
        if (tmp_tuple_element_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_58 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_67;
            PyObject *tmp_subscript_name_60;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_expression_name_68;
            PyObject *tmp_subscript_name_61;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_expression_name_69;
            PyObject *tmp_subscript_name_62;
            PyTuple_SET_ITEM(tmp_subscript_name_58, 0, tmp_tuple_element_34);
            tmp_expression_name_67 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_name_67 == NULL)) {
                tmp_expression_name_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_name_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            tmp_subscript_name_60 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_60, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = Py_Ellipsis;
            PyTuple_SET_ITEM0(tmp_subscript_name_60, 1, tmp_tuple_element_35);
            tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_67, tmp_subscript_name_60);
            Py_DECREF(tmp_subscript_name_60);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_58, 1, tmp_tuple_element_34);
            tmp_expression_name_68 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_name_68 == NULL)) {
                tmp_expression_name_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_name_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            tmp_expression_name_69 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_69 == NULL)) {
                tmp_expression_name_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            tmp_subscript_name_62 = mod_consts[116];
            tmp_tuple_element_36 = LOOKUP_SUBSCRIPT(tmp_expression_name_69, tmp_subscript_name_62);
            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            tmp_subscript_name_61 = PyTuple_New(2);
            PyTuple_SET_ITEM(tmp_subscript_name_61, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_subscript_name_61, 1, tmp_tuple_element_36);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_subscript_name_61);
            goto tuple_build_exception_27;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_tuple_element_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_68, tmp_subscript_name_61);
            Py_DECREF(tmp_subscript_name_61);
            if (tmp_tuple_element_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_58, 2, tmp_tuple_element_34);
        }
        goto tuple_build_noexception_28;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_27:;
        Py_DECREF(tmp_subscript_name_58);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_28:;
        tmp_assign_source_104 = LOOKUP_SUBSCRIPT(tmp_expression_name_65, tmp_subscript_name_58);
        Py_DECREF(tmp_subscript_name_58);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_expression_name_70;
        PyObject *tmp_subscript_name_63;
        PyObject *tmp_tuple_element_37;
        tmp_expression_name_70 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_name_70 == NULL)) {
            tmp_expression_name_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_name_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_tuple_element_37 == NULL)) {
            tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_tuple_element_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_63 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_71;
            PyObject *tmp_subscript_name_64;
            PyTuple_SET_ITEM0(tmp_subscript_name_63, 0, tmp_tuple_element_37);
            tmp_expression_name_71 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_71 == NULL)) {
                tmp_expression_name_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto tuple_build_exception_29;
            }
            tmp_subscript_name_64 = mod_consts[116];
            tmp_tuple_element_37 = LOOKUP_SUBSCRIPT(tmp_expression_name_71, tmp_subscript_name_64);
            if (tmp_tuple_element_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_63, 1, tmp_tuple_element_37);
        }
        goto tuple_build_noexception_29;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_29:;
        Py_DECREF(tmp_subscript_name_63);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_29:;
        tmp_assign_source_105 = LOOKUP_SUBSCRIPT(tmp_expression_name_70, tmp_subscript_name_63);
        Py_DECREF(tmp_subscript_name_63);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_expression_name_72;
        PyObject *tmp_subscript_name_65;
        PyObject *tmp_tuple_element_38;
        tmp_expression_name_72 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_72 == NULL)) {
            tmp_expression_name_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_38 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_65 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_subscript_name_65, 0, tmp_tuple_element_38);
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_tuple_element_38 == NULL)) {
            tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_tuple_element_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto tuple_build_exception_30;
        }
        PyTuple_SET_ITEM0(tmp_subscript_name_65, 1, tmp_tuple_element_38);
        tmp_tuple_element_38 = mod_consts[90];
        PyTuple_SET_ITEM0(tmp_subscript_name_65, 2, tmp_tuple_element_38);
        goto tuple_build_noexception_30;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_30:;
        Py_DECREF(tmp_subscript_name_65);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_30:;
        tmp_assign_source_106 = LOOKUP_SUBSCRIPT(tmp_expression_name_72, tmp_subscript_name_65);
        Py_DECREF(tmp_subscript_name_65);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_expression_name_73;
        PyObject *tmp_subscript_name_66;
        PyObject *tmp_tuple_element_39;
        tmp_expression_name_73 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_73 == NULL)) {
            tmp_expression_name_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_39 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_name_66 = PyTuple_New(4);
        {
            PyObject *tmp_expression_name_74;
            PyObject *tmp_subscript_name_67;
            PyObject *tmp_expression_name_75;
            PyObject *tmp_subscript_name_68;
            PyObject *tmp_expression_name_76;
            PyObject *tmp_subscript_name_69;
            PyObject *tmp_tuple_element_40;
            PyTuple_SET_ITEM0(tmp_subscript_name_66, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = (PyObject *)&PyLong_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_66, 1, tmp_tuple_element_39);
            tmp_expression_name_74 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_74 == NULL)) {
                tmp_expression_name_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            tmp_expression_name_75 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_name_75 == NULL)) {
                tmp_expression_name_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_name_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            tmp_subscript_name_68 = mod_consts[116];
            tmp_subscript_name_67 = LOOKUP_SUBSCRIPT(tmp_expression_name_75, tmp_subscript_name_68);
            if (tmp_subscript_name_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_name_74, tmp_subscript_name_67);
            Py_DECREF(tmp_subscript_name_67);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_66, 2, tmp_tuple_element_39);
            tmp_expression_name_76 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[31]);

            if (unlikely(tmp_expression_name_76 == NULL)) {
                tmp_expression_name_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
            }

            if (tmp_expression_name_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[29]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            tmp_subscript_name_69 = PyTuple_New(2);
            {
                PyObject *tmp_expression_name_77;
                PyObject *tmp_subscript_name_70;
                PyTuple_SET_ITEM0(tmp_subscript_name_69, 0, tmp_tuple_element_40);
                tmp_expression_name_77 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

                if (unlikely(tmp_expression_name_77 == NULL)) {
                    tmp_expression_name_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
                }

                if (tmp_expression_name_77 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_32;
                }
                tmp_subscript_name_70 = mod_consts[116];
                tmp_tuple_element_40 = LOOKUP_SUBSCRIPT(tmp_expression_name_77, tmp_subscript_name_70);
                if (tmp_tuple_element_40 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;

                    goto tuple_build_exception_32;
                }
                PyTuple_SET_ITEM(tmp_subscript_name_69, 1, tmp_tuple_element_40);
            }
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_subscript_name_69);
            goto tuple_build_exception_31;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_tuple_element_39 = LOOKUP_SUBSCRIPT(tmp_expression_name_76, tmp_subscript_name_69);
            Py_DECREF(tmp_subscript_name_69);
            if (tmp_tuple_element_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 192;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_66, 3, tmp_tuple_element_39);
        }
        goto tuple_build_noexception_32;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_31:;
        Py_DECREF(tmp_subscript_name_66);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_32:;
        tmp_assign_source_107 = LOOKUP_SUBSCRIPT(tmp_expression_name_73, tmp_subscript_name_66);
        Py_DECREF(tmp_subscript_name_66);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_107);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_name_78;
        PyObject *tmp_subscript_name_71;
        tmp_expression_name_78 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_expression_name_78 == NULL)) {
            tmp_expression_name_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_expression_name_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_71 = mod_consts[162];
        tmp_assign_source_108 = LOOKUP_SUBSCRIPT(tmp_expression_name_78, tmp_subscript_name_71);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_108);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_109);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_expression_name_79;
        PyObject *tmp_subscript_name_72;
        tmp_expression_name_79 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_79 == NULL)) {
            tmp_expression_name_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_72 = mod_consts[164];
        tmp_assign_source_110 = LOOKUP_SUBSCRIPT(tmp_expression_name_79, tmp_subscript_name_72);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_expression_name_80;
        PyObject *tmp_subscript_name_73;
        tmp_expression_name_80 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_80 == NULL)) {
            tmp_expression_name_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_73 = mod_consts[166];
        tmp_assign_source_111 = LOOKUP_SUBSCRIPT(tmp_expression_name_80, tmp_subscript_name_73);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        PyObject *tmp_expression_name_81;
        PyObject *tmp_subscript_name_74;
        tmp_expression_name_81 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_81 == NULL)) {
            tmp_expression_name_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_74 = mod_consts[168];
        tmp_assign_source_112 = LOOKUP_SUBSCRIPT(tmp_expression_name_81, tmp_subscript_name_74);
        if (tmp_assign_source_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_expression_name_82;
        PyObject *tmp_subscript_name_75;
        PyObject *tmp_tuple_element_41;
        tmp_expression_name_82 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_82 == NULL)) {
            tmp_expression_name_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_41 = (PyObject *)&PyLong_Type;
        tmp_subscript_name_75 = PyTuple_New(5);
        {
            PyObject *tmp_expression_name_83;
            PyObject *tmp_expression_name_84;
            PyObject *tmp_subscript_name_76;
            PyObject *tmp_expression_name_85;
            PyTuple_SET_ITEM0(tmp_subscript_name_75, 0, tmp_tuple_element_41);
            tmp_expression_name_83 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_83 == NULL)) {
                tmp_expression_name_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_83, mod_consts[170]);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_75, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = (PyObject *)&PySlice_Type;
            PyTuple_SET_ITEM0(tmp_subscript_name_75, 2, tmp_tuple_element_41);
            tmp_expression_name_84 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[33]);

            if (unlikely(tmp_expression_name_84 == NULL)) {
                tmp_expression_name_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
            }

            if (tmp_expression_name_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            tmp_subscript_name_76 = (PyObject *)&PyLong_Type;
            tmp_tuple_element_41 = LOOKUP_SUBSCRIPT(tmp_expression_name_84, tmp_subscript_name_76);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_75, 3, tmp_tuple_element_41);
            tmp_expression_name_85 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_expression_name_85 == NULL)) {
                tmp_expression_name_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_expression_name_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tmp_expression_name_85, mod_consts[95]);
            if (tmp_tuple_element_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 214;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_75, 4, tmp_tuple_element_41);
        }
        goto tuple_build_noexception_33;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_33:;
        Py_DECREF(tmp_subscript_name_75);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_33:;
        tmp_assign_source_113 = LOOKUP_SUBSCRIPT(tmp_expression_name_82, tmp_subscript_name_75);
        Py_DECREF(tmp_subscript_name_75);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_name_86;
        PyObject *tmp_subscript_name_77;
        PyObject *tmp_tuple_element_42;
        tmp_expression_name_86 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_name_86 == NULL)) {
            tmp_expression_name_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_name_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[171]);

        if (unlikely(tmp_tuple_element_42 == NULL)) {
            tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
        }

        assert(!(tmp_tuple_element_42 == NULL));
        tmp_subscript_name_77 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_87;
            PyObject *tmp_subscript_name_78;
            PyObject *tmp_tuple_element_43;
            PyTuple_SET_ITEM0(tmp_subscript_name_77, 0, tmp_tuple_element_42);
            tmp_expression_name_87 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_expression_name_87 == NULL)) {
                tmp_expression_name_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_expression_name_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto tuple_build_exception_34;
            }
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
            }

            assert(!(tmp_tuple_element_43 == NULL));
            tmp_subscript_name_78 = PyTuple_New(2);
            PyTuple_SET_ITEM0(tmp_subscript_name_78, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[171]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[171]);
            }

            assert(!(tmp_tuple_element_43 == NULL));
            PyTuple_SET_ITEM0(tmp_subscript_name_78, 1, tmp_tuple_element_43);
            tmp_tuple_element_42 = LOOKUP_SUBSCRIPT(tmp_expression_name_87, tmp_subscript_name_78);
            Py_DECREF(tmp_subscript_name_78);
            if (tmp_tuple_element_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM(tmp_subscript_name_77, 1, tmp_tuple_element_42);
        }
        goto tuple_build_noexception_34;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_34:;
        Py_DECREF(tmp_subscript_name_77);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_34:;
        tmp_assign_source_114 = LOOKUP_SUBSCRIPT(tmp_expression_name_86, tmp_subscript_name_77);
        Py_DECREF(tmp_subscript_name_77);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$_typing, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_114);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e500ac31c03f048610850f729dc1e28);
#endif
    popFrameStack();

    assertFrameObject(frame_0e500ac31c03f048610850f729dc1e28);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0e500ac31c03f048610850f729dc1e28);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e500ac31c03f048610850f729dc1e28, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e500ac31c03f048610850f729dc1e28->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e500ac31c03f048610850f729dc1e28, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

    return module_pandas$_typing;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

