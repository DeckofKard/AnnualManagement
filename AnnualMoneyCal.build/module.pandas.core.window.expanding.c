/* Generated code for Python module 'pandas.core.window.expanding'
 * created by Nuitka version 1.6.3
 *
 * This code is in part copyright 2023 Kay Hayen.
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

/* The "module_pandas$core$window$expanding" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pandas$core$window$expanding;
PyDictObject *moduledict_pandas$core$window$expanding;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[203];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[203];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pandas.core.window.expanding"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 203; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pandas$core$window$expanding(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 203; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_09133c0f352811827f43c45613c3b7a8;
static PyCodeObject *codeobj_3e7f872e1784f0931f7df9cb32853a34;
static PyCodeObject *codeobj_951162f56ad18620b4dcb5320e64f1c5;
static PyCodeObject *codeobj_4f0f882c3565df122c3aa7d77ecf9358;
static PyCodeObject *codeobj_56d76f4a1bd95c2e2353c2f1a791ad35;
static PyCodeObject *codeobj_e768e0303b615c1f02813e4f8decb500;
static PyCodeObject *codeobj_0bf830f130558bb4349658fdac3a2c89;
static PyCodeObject *codeobj_945928fb7be1b48cc997d05c57a75a03;
static PyCodeObject *codeobj_22bebd964da7a04061f80271d45adc14;
static PyCodeObject *codeobj_ad69c5203ee5ac87ae8d95c8ffe35c60;
static PyCodeObject *codeobj_9151d26133960f4845d5d25885c6298c;
static PyCodeObject *codeobj_17090665d61fc1f5151cd81dd573597a;
static PyCodeObject *codeobj_f8630cc3649b2cfe7d91e8944fef528f;
static PyCodeObject *codeobj_712b611f914922c87362904d2b72fdc7;
static PyCodeObject *codeobj_f69d081d208f68562600ce0fcb068739;
static PyCodeObject *codeobj_4ec96866d28b1df7069ad228739fac8e;
static PyCodeObject *codeobj_a7bd2da149eb3ca8d630df7dc4393860;
static PyCodeObject *codeobj_27f4d721b155645f6af8423c703e70c9;
static PyCodeObject *codeobj_363c464dac8e7e18842345b64f9be162;
static PyCodeObject *codeobj_87f0697463fa7a61fa03c70a142d1bcf;
static PyCodeObject *codeobj_4ef2aca4d25cdf974b7f57108a1dbb3f;
static PyCodeObject *codeobj_c62c77aeeae26999e402eada227a726d;
static PyCodeObject *codeobj_000d68c2cf6b436b6720c3654dc8b15a;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[188]); CHECK_OBJECT(module_filename_obj);
    codeobj_09133c0f352811827f43c45613c3b7a8 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[189], mod_consts[189], NULL, NULL, 0, 0, 0);
    codeobj_3e7f872e1784f0931f7df9cb32853a34 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_FUTURE_ANNOTATIONS, mod_consts[76], mod_consts[76], mod_consts[190], NULL, 0, 0, 0);
    codeobj_951162f56ad18620b4dcb5320e64f1c5 = MAKE_CODE_OBJECT(module_filename_obj, 797, CO_FUTURE_ANNOTATIONS, mod_consts[184], mod_consts[184], mod_consts[190], NULL, 0, 0, 0);
    codeobj_4f0f882c3565df122c3aa7d77ecf9358 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[1], mod_consts[1], mod_consts[191], mod_consts[190], 6, 0, 0);
    codeobj_56d76f4a1bd95c2e2353c2f1a791ad35 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[95], mod_consts[95], mod_consts[192], NULL, 1, 0, 0);
    codeobj_e768e0303b615c1f02813e4f8decb500 = MAKE_CODE_OBJECT(module_filename_obj, 804, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[95], mod_consts[95], mod_consts[193], NULL, 1, 0, 0);
    codeobj_0bf830f130558bb4349658fdac3a2c89 = MAKE_CODE_OBJECT(module_filename_obj, 170, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ANNOTATIONS, mod_consts[5], mod_consts[5], mod_consts[194], mod_consts[190], 2, 0, 0);
    codeobj_945928fb7be1b48cc997d05c57a75a03 = MAKE_CODE_OBJECT(module_filename_obj, 200, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[8], mod_consts[8], mod_consts[195], mod_consts[190], 7, 0, 0);
    codeobj_22bebd964da7a04061f80271d45adc14 = MAKE_CODE_OBJECT(module_filename_obj, 782, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[29], mod_consts[29], mod_consts[196], mod_consts[190], 5, 0, 0);
    codeobj_ad69c5203ee5ac87ae8d95c8ffe35c60 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[197], mod_consts[190], 2, 0, 0);
    codeobj_9151d26133960f4845d5d25885c6298c = MAKE_CODE_OBJECT(module_filename_obj, 712, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[27], mod_consts[27], mod_consts[196], mod_consts[190], 5, 0, 0);
    codeobj_17090665d61fc1f5151cd81dd573597a = MAKE_CODE_OBJECT(module_filename_obj, 565, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[22], mod_consts[22], mod_consts[197], mod_consts[190], 2, 0, 0);
    codeobj_f8630cc3649b2cfe7d91e8944fef528f = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[12], mod_consts[12], mod_consts[198], mod_consts[190], 4, 0, 0);
    codeobj_712b611f914922c87362904d2b72fdc7 = MAKE_CODE_OBJECT(module_filename_obj, 314, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[14], mod_consts[14], mod_consts[198], mod_consts[190], 4, 0, 0);
    codeobj_f69d081d208f68562600ce0fcb068739 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[198], mod_consts[190], 4, 0, 0);
    codeobj_4ec96866d28b1df7069ad228739fac8e = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[13], mod_consts[13], mod_consts[198], mod_consts[190], 4, 0, 0);
    codeobj_a7bd2da149eb3ca8d630df7dc4393860 = MAKE_CODE_OBJECT(module_filename_obj, 596, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[23], mod_consts[23], mod_consts[199], mod_consts[190], 4, 0, 0);
    codeobj_27f4d721b155645f6af8423c703e70c9 = MAKE_CODE_OBJECT(module_filename_obj, 669, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[25], mod_consts[25], mod_consts[200], mod_consts[190], 5, 0, 0);
    codeobj_363c464dac8e7e18842345b64f9be162 = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[201], mod_consts[190], 3, 0, 0);
    codeobj_87f0697463fa7a61fa03c70a142d1bcf = MAKE_CODE_OBJECT(module_filename_obj, 525, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[21], mod_consts[21], mod_consts[197], mod_consts[190], 2, 0, 0);
    codeobj_4ef2aca4d25cdf974b7f57108a1dbb3f = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[16], mod_consts[16], mod_consts[202], mod_consts[190], 5, 0, 0);
    codeobj_c62c77aeeae26999e402eada227a726d = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[10], mod_consts[10], mod_consts[198], mod_consts[190], 4, 0, 0);
    codeobj_000d68c2cf6b436b6720c3654dc8b15a = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[18], mod_consts[18], mod_consts[202], mod_consts[190], 5, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__9_complex_call_helper_pos_star_list_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_pandas$core$window$expanding$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_min_periods = python_pars[2];
    PyObject *par_axis = python_pars[3];
    PyObject *par_method = python_pars[4];
    PyObject *par_selection = python_pars[5];
    struct Nuitka_FrameObject *frame_4f0f882c3565df122c3aa7d77ecf9358;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4f0f882c3565df122c3aa7d77ecf9358 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4f0f882c3565df122c3aa7d77ecf9358)) {
        Py_XDECREF(cache_frame_4f0f882c3565df122c3aa7d77ecf9358);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4f0f882c3565df122c3aa7d77ecf9358 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4f0f882c3565df122c3aa7d77ecf9358 = MAKE_FUNCTION_FRAME(codeobj_4f0f882c3565df122c3aa7d77ecf9358, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4f0f882c3565df122c3aa7d77ecf9358->m_type_description == NULL);
    frame_4f0f882c3565df122c3aa7d77ecf9358 = cache_frame_4f0f882c3565df122c3aa7d77ecf9358;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4f0f882c3565df122c3aa7d77ecf9358);
    assert(Py_REFCNT(frame_4f0f882c3565df122c3aa7d77ecf9358) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_kw_call_value_0_1 = par_obj;
        CHECK_OBJECT(par_min_periods);
        tmp_kw_call_value_1_1 = par_min_periods;
        CHECK_OBJECT(par_axis);
        tmp_kw_call_value_2_1 = par_axis;
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_3_1 = par_method;
        CHECK_OBJECT(par_selection);
        tmp_kw_call_value_4_1 = par_selection;
        frame_4f0f882c3565df122c3aa7d77ecf9358->m_frame.f_lineno = 125;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[2]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4f0f882c3565df122c3aa7d77ecf9358, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4f0f882c3565df122c3aa7d77ecf9358->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4f0f882c3565df122c3aa7d77ecf9358, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4f0f882c3565df122c3aa7d77ecf9358,
        type_description_1,
        par_self,
        par_obj,
        par_min_periods,
        par_axis,
        par_method,
        par_selection,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4f0f882c3565df122c3aa7d77ecf9358 == cache_frame_4f0f882c3565df122c3aa7d77ecf9358) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4f0f882c3565df122c3aa7d77ecf9358);
        cache_frame_4f0f882c3565df122c3aa7d77ecf9358 = NULL;
    }

    assertFrameObject(frame_4f0f882c3565df122c3aa7d77ecf9358);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_min_periods);
    Py_DECREF(par_min_periods);
    CHECK_OBJECT(par_axis);
    Py_DECREF(par_axis);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_selection);
    Py_DECREF(par_selection);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__2__get_window_indexer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_56d76f4a1bd95c2e2353c2f1a791ad35;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35)) {
        Py_XDECREF(cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35);

#if _DEBUG_REFCOUNTS
        if (cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35 = MAKE_FUNCTION_FRAME(codeobj_56d76f4a1bd95c2e2353c2f1a791ad35, module_pandas$core$window$expanding, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35->m_type_description == NULL);
    frame_56d76f4a1bd95c2e2353c2f1a791ad35 = cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_56d76f4a1bd95c2e2353c2f1a791ad35);
    assert(Py_REFCNT(frame_56d76f4a1bd95c2e2353c2f1a791ad35) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_56d76f4a1bd95c2e2353c2f1a791ad35->m_frame.f_lineno = 137;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_56d76f4a1bd95c2e2353c2f1a791ad35, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_56d76f4a1bd95c2e2353c2f1a791ad35->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_56d76f4a1bd95c2e2353c2f1a791ad35, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_56d76f4a1bd95c2e2353c2f1a791ad35,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_56d76f4a1bd95c2e2353c2f1a791ad35 == cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35);
        cache_frame_56d76f4a1bd95c2e2353c2f1a791ad35 = NULL;
    }

    assertFrameObject(frame_56d76f4a1bd95c2e2353c2f1a791ad35);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_args = python_pars[2];
    PyObject *par_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_0bf830f130558bb4349658fdac3a2c89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0bf830f130558bb4349658fdac3a2c89 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0bf830f130558bb4349658fdac3a2c89)) {
        Py_XDECREF(cache_frame_0bf830f130558bb4349658fdac3a2c89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0bf830f130558bb4349658fdac3a2c89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0bf830f130558bb4349658fdac3a2c89 = MAKE_FUNCTION_FRAME(codeobj_0bf830f130558bb4349658fdac3a2c89, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0bf830f130558bb4349658fdac3a2c89->m_type_description == NULL);
    frame_0bf830f130558bb4349658fdac3a2c89 = cache_frame_0bf830f130558bb4349658fdac3a2c89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0bf830f130558bb4349658fdac3a2c89);
    assert(Py_REFCNT(frame_0bf830f130558bb4349658fdac3a2c89) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_tuple_element_1 = par_func;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_return_value = impl___main__$$$function__9_complex_call_helper_pos_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0bf830f130558bb4349658fdac3a2c89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0bf830f130558bb4349658fdac3a2c89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0bf830f130558bb4349658fdac3a2c89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0bf830f130558bb4349658fdac3a2c89,
        type_description_1,
        par_self,
        par_func,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0bf830f130558bb4349658fdac3a2c89 == cache_frame_0bf830f130558bb4349658fdac3a2c89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0bf830f130558bb4349658fdac3a2c89);
        cache_frame_0bf830f130558bb4349658fdac3a2c89 = NULL;
    }

    assertFrameObject(frame_0bf830f130558bb4349658fdac3a2c89);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__4_count(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_ad69c5203ee5ac87ae8d95c8ffe35c60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60)) {
        Py_XDECREF(cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60 = MAKE_FUNCTION_FRAME(codeobj_ad69c5203ee5ac87ae8d95c8ffe35c60, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60->m_type_description == NULL);
    frame_ad69c5203ee5ac87ae8d95c8ffe35c60 = cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad69c5203ee5ac87ae8d95c8ffe35c60);
    assert(Py_REFCNT(frame_ad69c5203ee5ac87ae8d95c8ffe35c60) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_ad69c5203ee5ac87ae8d95c8ffe35c60->m_frame.f_lineno = 186;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ad69c5203ee5ac87ae8d95c8ffe35c60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad69c5203ee5ac87ae8d95c8ffe35c60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad69c5203ee5ac87ae8d95c8ffe35c60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad69c5203ee5ac87ae8d95c8ffe35c60,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ad69c5203ee5ac87ae8d95c8ffe35c60 == cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60);
        cache_frame_ad69c5203ee5ac87ae8d95c8ffe35c60 = NULL;
    }

    assertFrameObject(frame_ad69c5203ee5ac87ae8d95c8ffe35c60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__5_apply(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_func = python_pars[1];
    PyObject *par_raw = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    PyObject *par_args = python_pars[5];
    PyObject *par_kwargs = python_pars[6];
    struct Nuitka_FrameObject *frame_945928fb7be1b48cc997d05c57a75a03;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_945928fb7be1b48cc997d05c57a75a03 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_945928fb7be1b48cc997d05c57a75a03)) {
        Py_XDECREF(cache_frame_945928fb7be1b48cc997d05c57a75a03);

#if _DEBUG_REFCOUNTS
        if (cache_frame_945928fb7be1b48cc997d05c57a75a03 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_945928fb7be1b48cc997d05c57a75a03 = MAKE_FUNCTION_FRAME(codeobj_945928fb7be1b48cc997d05c57a75a03, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_945928fb7be1b48cc997d05c57a75a03->m_type_description == NULL);
    frame_945928fb7be1b48cc997d05c57a75a03 = cache_frame_945928fb7be1b48cc997d05c57a75a03;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_945928fb7be1b48cc997d05c57a75a03);
    assert(Py_REFCNT(frame_945928fb7be1b48cc997d05c57a75a03) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_func);
        tmp_kw_call_arg_value_0_1 = par_func;
        CHECK_OBJECT(par_raw);
        tmp_kw_call_dict_value_0_1 = par_raw;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_dict_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_dict_value_2_1 = par_engine_kwargs;
        CHECK_OBJECT(par_args);
        tmp_kw_call_dict_value_3_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_kw_call_dict_value_4_1 = par_kwargs;
        frame_945928fb7be1b48cc997d05c57a75a03->m_frame.f_lineno = 209;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_945928fb7be1b48cc997d05c57a75a03, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_945928fb7be1b48cc997d05c57a75a03->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_945928fb7be1b48cc997d05c57a75a03, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_945928fb7be1b48cc997d05c57a75a03,
        type_description_1,
        par_self,
        par_func,
        par_raw,
        par_engine,
        par_engine_kwargs,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_945928fb7be1b48cc997d05c57a75a03 == cache_frame_945928fb7be1b48cc997d05c57a75a03) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_945928fb7be1b48cc997d05c57a75a03);
        cache_frame_945928fb7be1b48cc997d05c57a75a03 = NULL;
    }

    assertFrameObject(frame_945928fb7be1b48cc997d05c57a75a03);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_raw);
    Py_DECREF(par_raw);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__6_sum(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_c62c77aeeae26999e402eada227a726d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c62c77aeeae26999e402eada227a726d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c62c77aeeae26999e402eada227a726d)) {
        Py_XDECREF(cache_frame_c62c77aeeae26999e402eada227a726d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c62c77aeeae26999e402eada227a726d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c62c77aeeae26999e402eada227a726d = MAKE_FUNCTION_FRAME(codeobj_c62c77aeeae26999e402eada227a726d, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c62c77aeeae26999e402eada227a726d->m_type_description == NULL);
    frame_c62c77aeeae26999e402eada227a726d = cache_frame_c62c77aeeae26999e402eada227a726d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c62c77aeeae26999e402eada227a726d);
    assert(Py_REFCNT(frame_c62c77aeeae26999e402eada227a726d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[10]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_c62c77aeeae26999e402eada227a726d->m_frame.f_lineno = 239;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c62c77aeeae26999e402eada227a726d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c62c77aeeae26999e402eada227a726d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c62c77aeeae26999e402eada227a726d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c62c77aeeae26999e402eada227a726d,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_c62c77aeeae26999e402eada227a726d == cache_frame_c62c77aeeae26999e402eada227a726d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c62c77aeeae26999e402eada227a726d);
        cache_frame_c62c77aeeae26999e402eada227a726d = NULL;
    }

    assertFrameObject(frame_c62c77aeeae26999e402eada227a726d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__7_max(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_f8630cc3649b2cfe7d91e8944fef528f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f8630cc3649b2cfe7d91e8944fef528f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f8630cc3649b2cfe7d91e8944fef528f)) {
        Py_XDECREF(cache_frame_f8630cc3649b2cfe7d91e8944fef528f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f8630cc3649b2cfe7d91e8944fef528f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f8630cc3649b2cfe7d91e8944fef528f = MAKE_FUNCTION_FRAME(codeobj_f8630cc3649b2cfe7d91e8944fef528f, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f8630cc3649b2cfe7d91e8944fef528f->m_type_description == NULL);
    frame_f8630cc3649b2cfe7d91e8944fef528f = cache_frame_f8630cc3649b2cfe7d91e8944fef528f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f8630cc3649b2cfe7d91e8944fef528f);
    assert(Py_REFCNT(frame_f8630cc3649b2cfe7d91e8944fef528f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 266;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_f8630cc3649b2cfe7d91e8944fef528f->m_frame.f_lineno = 266;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f8630cc3649b2cfe7d91e8944fef528f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f8630cc3649b2cfe7d91e8944fef528f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f8630cc3649b2cfe7d91e8944fef528f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f8630cc3649b2cfe7d91e8944fef528f,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f8630cc3649b2cfe7d91e8944fef528f == cache_frame_f8630cc3649b2cfe7d91e8944fef528f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f8630cc3649b2cfe7d91e8944fef528f);
        cache_frame_f8630cc3649b2cfe7d91e8944fef528f = NULL;
    }

    assertFrameObject(frame_f8630cc3649b2cfe7d91e8944fef528f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__8_min(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_4ec96866d28b1df7069ad228739fac8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ec96866d28b1df7069ad228739fac8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ec96866d28b1df7069ad228739fac8e)) {
        Py_XDECREF(cache_frame_4ec96866d28b1df7069ad228739fac8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ec96866d28b1df7069ad228739fac8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ec96866d28b1df7069ad228739fac8e = MAKE_FUNCTION_FRAME(codeobj_4ec96866d28b1df7069ad228739fac8e, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ec96866d28b1df7069ad228739fac8e->m_type_description == NULL);
    frame_4ec96866d28b1df7069ad228739fac8e = cache_frame_4ec96866d28b1df7069ad228739fac8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ec96866d28b1df7069ad228739fac8e);
    assert(Py_REFCNT(frame_4ec96866d28b1df7069ad228739fac8e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_4ec96866d28b1df7069ad228739fac8e->m_frame.f_lineno = 293;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ec96866d28b1df7069ad228739fac8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ec96866d28b1df7069ad228739fac8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ec96866d28b1df7069ad228739fac8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ec96866d28b1df7069ad228739fac8e,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4ec96866d28b1df7069ad228739fac8e == cache_frame_4ec96866d28b1df7069ad228739fac8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ec96866d28b1df7069ad228739fac8e);
        cache_frame_4ec96866d28b1df7069ad228739fac8e = NULL;
    }

    assertFrameObject(frame_4ec96866d28b1df7069ad228739fac8e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__9_mean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_712b611f914922c87362904d2b72fdc7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_712b611f914922c87362904d2b72fdc7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_712b611f914922c87362904d2b72fdc7)) {
        Py_XDECREF(cache_frame_712b611f914922c87362904d2b72fdc7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_712b611f914922c87362904d2b72fdc7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_712b611f914922c87362904d2b72fdc7 = MAKE_FUNCTION_FRAME(codeobj_712b611f914922c87362904d2b72fdc7, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_712b611f914922c87362904d2b72fdc7->m_type_description == NULL);
    frame_712b611f914922c87362904d2b72fdc7 = cache_frame_712b611f914922c87362904d2b72fdc7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_712b611f914922c87362904d2b72fdc7);
    assert(Py_REFCNT(frame_712b611f914922c87362904d2b72fdc7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_712b611f914922c87362904d2b72fdc7->m_frame.f_lineno = 320;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_712b611f914922c87362904d2b72fdc7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_712b611f914922c87362904d2b72fdc7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_712b611f914922c87362904d2b72fdc7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_712b611f914922c87362904d2b72fdc7,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_712b611f914922c87362904d2b72fdc7 == cache_frame_712b611f914922c87362904d2b72fdc7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_712b611f914922c87362904d2b72fdc7);
        cache_frame_712b611f914922c87362904d2b72fdc7 = NULL;
    }

    assertFrameObject(frame_712b611f914922c87362904d2b72fdc7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__10_median(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    PyObject *par_engine = python_pars[2];
    PyObject *par_engine_kwargs = python_pars[3];
    struct Nuitka_FrameObject *frame_f69d081d208f68562600ce0fcb068739;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f69d081d208f68562600ce0fcb068739 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f69d081d208f68562600ce0fcb068739)) {
        Py_XDECREF(cache_frame_f69d081d208f68562600ce0fcb068739);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f69d081d208f68562600ce0fcb068739 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f69d081d208f68562600ce0fcb068739 = MAKE_FUNCTION_FRAME(codeobj_f69d081d208f68562600ce0fcb068739, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f69d081d208f68562600ce0fcb068739->m_type_description == NULL);
    frame_f69d081d208f68562600ce0fcb068739 = cache_frame_f69d081d208f68562600ce0fcb068739;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f69d081d208f68562600ce0fcb068739);
    assert(Py_REFCNT(frame_f69d081d208f68562600ce0fcb068739) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 347;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_1_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_2_1 = par_engine_kwargs;
        frame_f69d081d208f68562600ce0fcb068739->m_frame.f_lineno = 347;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[11]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f69d081d208f68562600ce0fcb068739, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f69d081d208f68562600ce0fcb068739->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f69d081d208f68562600ce0fcb068739, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f69d081d208f68562600ce0fcb068739,
        type_description_1,
        par_self,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f69d081d208f68562600ce0fcb068739 == cache_frame_f69d081d208f68562600ce0fcb068739) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f69d081d208f68562600ce0fcb068739);
        cache_frame_f69d081d208f68562600ce0fcb068739 = NULL;
    }

    assertFrameObject(frame_f69d081d208f68562600ce0fcb068739);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__11_std(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_4ef2aca4d25cdf974b7f57108a1dbb3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f)) {
        Py_XDECREF(cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f = MAKE_FUNCTION_FRAME(codeobj_4ef2aca4d25cdf974b7f57108a1dbb3f, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f->m_type_description == NULL);
    frame_4ef2aca4d25cdf974b7f57108a1dbb3f = cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ef2aca4d25cdf974b7f57108a1dbb3f);
    assert(Py_REFCNT(frame_4ef2aca4d25cdf974b7f57108a1dbb3f) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[16]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_2_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_3_1 = par_engine_kwargs;
        frame_4ef2aca4d25cdf974b7f57108a1dbb3f->m_frame.f_lineno = 406;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ef2aca4d25cdf974b7f57108a1dbb3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ef2aca4d25cdf974b7f57108a1dbb3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ef2aca4d25cdf974b7f57108a1dbb3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ef2aca4d25cdf974b7f57108a1dbb3f,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_4ef2aca4d25cdf974b7f57108a1dbb3f == cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f);
        cache_frame_4ef2aca4d25cdf974b7f57108a1dbb3f = NULL;
    }

    assertFrameObject(frame_4ef2aca4d25cdf974b7f57108a1dbb3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__12_var(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    PyObject *par_engine = python_pars[3];
    PyObject *par_engine_kwargs = python_pars[4];
    struct Nuitka_FrameObject *frame_000d68c2cf6b436b6720c3654dc8b15a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_000d68c2cf6b436b6720c3654dc8b15a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_000d68c2cf6b436b6720c3654dc8b15a)) {
        Py_XDECREF(cache_frame_000d68c2cf6b436b6720c3654dc8b15a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_000d68c2cf6b436b6720c3654dc8b15a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_000d68c2cf6b436b6720c3654dc8b15a = MAKE_FUNCTION_FRAME(codeobj_000d68c2cf6b436b6720c3654dc8b15a, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_000d68c2cf6b436b6720c3654dc8b15a->m_type_description == NULL);
    frame_000d68c2cf6b436b6720c3654dc8b15a = cache_frame_000d68c2cf6b436b6720c3654dc8b15a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_000d68c2cf6b436b6720c3654dc8b15a);
    assert(Py_REFCNT(frame_000d68c2cf6b436b6720c3654dc8b15a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 466;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        CHECK_OBJECT(par_engine);
        tmp_kw_call_value_2_1 = par_engine;
        CHECK_OBJECT(par_engine_kwargs);
        tmp_kw_call_value_3_1 = par_engine_kwargs;
        frame_000d68c2cf6b436b6720c3654dc8b15a->m_frame.f_lineno = 466;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[17]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_000d68c2cf6b436b6720c3654dc8b15a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_000d68c2cf6b436b6720c3654dc8b15a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_000d68c2cf6b436b6720c3654dc8b15a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_000d68c2cf6b436b6720c3654dc8b15a,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        par_engine,
        par_engine_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_000d68c2cf6b436b6720c3654dc8b15a == cache_frame_000d68c2cf6b436b6720c3654dc8b15a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_000d68c2cf6b436b6720c3654dc8b15a);
        cache_frame_000d68c2cf6b436b6720c3654dc8b15a = NULL;
    }

    assertFrameObject(frame_000d68c2cf6b436b6720c3654dc8b15a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    CHECK_OBJECT(par_engine);
    Py_DECREF(par_engine);
    CHECK_OBJECT(par_engine_kwargs);
    Py_DECREF(par_engine_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__13_sem(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ddof = python_pars[1];
    PyObject *par_numeric_only = python_pars[2];
    struct Nuitka_FrameObject *frame_363c464dac8e7e18842345b64f9be162;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_363c464dac8e7e18842345b64f9be162 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_363c464dac8e7e18842345b64f9be162)) {
        Py_XDECREF(cache_frame_363c464dac8e7e18842345b64f9be162);

#if _DEBUG_REFCOUNTS
        if (cache_frame_363c464dac8e7e18842345b64f9be162 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_363c464dac8e7e18842345b64f9be162 = MAKE_FUNCTION_FRAME(codeobj_363c464dac8e7e18842345b64f9be162, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_363c464dac8e7e18842345b64f9be162->m_type_description == NULL);
    frame_363c464dac8e7e18842345b64f9be162 = cache_frame_363c464dac8e7e18842345b64f9be162;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_363c464dac8e7e18842345b64f9be162);
    assert(Py_REFCNT(frame_363c464dac8e7e18842345b64f9be162) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_0_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_1_1 = par_numeric_only;
        frame_363c464dac8e7e18842345b64f9be162->m_frame.f_lineno = 508;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_363c464dac8e7e18842345b64f9be162, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_363c464dac8e7e18842345b64f9be162->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_363c464dac8e7e18842345b64f9be162, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_363c464dac8e7e18842345b64f9be162,
        type_description_1,
        par_self,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_363c464dac8e7e18842345b64f9be162 == cache_frame_363c464dac8e7e18842345b64f9be162) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_363c464dac8e7e18842345b64f9be162);
        cache_frame_363c464dac8e7e18842345b64f9be162 = NULL;
    }

    assertFrameObject(frame_363c464dac8e7e18842345b64f9be162);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__14_skew(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_87f0697463fa7a61fa03c70a142d1bcf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_87f0697463fa7a61fa03c70a142d1bcf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_87f0697463fa7a61fa03c70a142d1bcf)) {
        Py_XDECREF(cache_frame_87f0697463fa7a61fa03c70a142d1bcf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_87f0697463fa7a61fa03c70a142d1bcf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_87f0697463fa7a61fa03c70a142d1bcf = MAKE_FUNCTION_FRAME(codeobj_87f0697463fa7a61fa03c70a142d1bcf, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_87f0697463fa7a61fa03c70a142d1bcf->m_type_description == NULL);
    frame_87f0697463fa7a61fa03c70a142d1bcf = cache_frame_87f0697463fa7a61fa03c70a142d1bcf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_87f0697463fa7a61fa03c70a142d1bcf);
    assert(Py_REFCNT(frame_87f0697463fa7a61fa03c70a142d1bcf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 526;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_87f0697463fa7a61fa03c70a142d1bcf->m_frame.f_lineno = 526;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_87f0697463fa7a61fa03c70a142d1bcf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_87f0697463fa7a61fa03c70a142d1bcf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_87f0697463fa7a61fa03c70a142d1bcf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_87f0697463fa7a61fa03c70a142d1bcf,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_87f0697463fa7a61fa03c70a142d1bcf == cache_frame_87f0697463fa7a61fa03c70a142d1bcf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_87f0697463fa7a61fa03c70a142d1bcf);
        cache_frame_87f0697463fa7a61fa03c70a142d1bcf = NULL;
    }

    assertFrameObject(frame_87f0697463fa7a61fa03c70a142d1bcf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__15_kurt(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_numeric_only = python_pars[1];
    struct Nuitka_FrameObject *frame_17090665d61fc1f5151cd81dd573597a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17090665d61fc1f5151cd81dd573597a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_17090665d61fc1f5151cd81dd573597a)) {
        Py_XDECREF(cache_frame_17090665d61fc1f5151cd81dd573597a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17090665d61fc1f5151cd81dd573597a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17090665d61fc1f5151cd81dd573597a = MAKE_FUNCTION_FRAME(codeobj_17090665d61fc1f5151cd81dd573597a, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17090665d61fc1f5151cd81dd573597a->m_type_description == NULL);
    frame_17090665d61fc1f5151cd81dd573597a = cache_frame_17090665d61fc1f5151cd81dd573597a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17090665d61fc1f5151cd81dd573597a);
    assert(Py_REFCNT(frame_17090665d61fc1f5151cd81dd573597a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 566;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[22]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_0_1 = par_numeric_only;
        frame_17090665d61fc1f5151cd81dd573597a->m_frame.f_lineno = 566;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17090665d61fc1f5151cd81dd573597a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17090665d61fc1f5151cd81dd573597a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17090665d61fc1f5151cd81dd573597a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17090665d61fc1f5151cd81dd573597a,
        type_description_1,
        par_self,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_17090665d61fc1f5151cd81dd573597a == cache_frame_17090665d61fc1f5151cd81dd573597a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17090665d61fc1f5151cd81dd573597a);
        cache_frame_17090665d61fc1f5151cd81dd573597a = NULL;
    }

    assertFrameObject(frame_17090665d61fc1f5151cd81dd573597a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__16_quantile(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_quantile = python_pars[1];
    PyObject *par_interpolation = python_pars[2];
    PyObject *par_numeric_only = python_pars[3];
    struct Nuitka_FrameObject *frame_a7bd2da149eb3ca8d630df7dc4393860;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a7bd2da149eb3ca8d630df7dc4393860 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a7bd2da149eb3ca8d630df7dc4393860)) {
        Py_XDECREF(cache_frame_a7bd2da149eb3ca8d630df7dc4393860);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a7bd2da149eb3ca8d630df7dc4393860 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a7bd2da149eb3ca8d630df7dc4393860 = MAKE_FUNCTION_FRAME(codeobj_a7bd2da149eb3ca8d630df7dc4393860, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a7bd2da149eb3ca8d630df7dc4393860->m_type_description == NULL);
    frame_a7bd2da149eb3ca8d630df7dc4393860 = cache_frame_a7bd2da149eb3ca8d630df7dc4393860;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a7bd2da149eb3ca8d630df7dc4393860);
    assert(Py_REFCNT(frame_a7bd2da149eb3ca8d630df7dc4393860) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 602;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_quantile);
        tmp_kw_call_value_0_1 = par_quantile;
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_value_1_1 = par_interpolation;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_2_1 = par_numeric_only;
        frame_a7bd2da149eb3ca8d630df7dc4393860->m_frame.f_lineno = 602;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a7bd2da149eb3ca8d630df7dc4393860, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a7bd2da149eb3ca8d630df7dc4393860->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a7bd2da149eb3ca8d630df7dc4393860, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a7bd2da149eb3ca8d630df7dc4393860,
        type_description_1,
        par_self,
        par_quantile,
        par_interpolation,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_a7bd2da149eb3ca8d630df7dc4393860 == cache_frame_a7bd2da149eb3ca8d630df7dc4393860) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a7bd2da149eb3ca8d630df7dc4393860);
        cache_frame_a7bd2da149eb3ca8d630df7dc4393860 = NULL;
    }

    assertFrameObject(frame_a7bd2da149eb3ca8d630df7dc4393860);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_quantile);
    Py_DECREF(par_quantile);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_quantile);
    Py_DECREF(par_quantile);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__17_rank(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_ascending = python_pars[2];
    PyObject *par_pct = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_27f4d721b155645f6af8423c703e70c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_27f4d721b155645f6af8423c703e70c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27f4d721b155645f6af8423c703e70c9)) {
        Py_XDECREF(cache_frame_27f4d721b155645f6af8423c703e70c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27f4d721b155645f6af8423c703e70c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27f4d721b155645f6af8423c703e70c9 = MAKE_FUNCTION_FRAME(codeobj_27f4d721b155645f6af8423c703e70c9, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_27f4d721b155645f6af8423c703e70c9->m_type_description == NULL);
    frame_27f4d721b155645f6af8423c703e70c9 = cache_frame_27f4d721b155645f6af8423c703e70c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_27f4d721b155645f6af8423c703e70c9);
    assert(Py_REFCNT(frame_27f4d721b155645f6af8423c703e70c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 676;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_method);
        tmp_kw_call_value_0_1 = par_method;
        CHECK_OBJECT(par_ascending);
        tmp_kw_call_value_1_1 = par_ascending;
        CHECK_OBJECT(par_pct);
        tmp_kw_call_value_2_1 = par_pct;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_27f4d721b155645f6af8423c703e70c9->m_frame.f_lineno = 676;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 676;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27f4d721b155645f6af8423c703e70c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27f4d721b155645f6af8423c703e70c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27f4d721b155645f6af8423c703e70c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27f4d721b155645f6af8423c703e70c9,
        type_description_1,
        par_self,
        par_method,
        par_ascending,
        par_pct,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_27f4d721b155645f6af8423c703e70c9 == cache_frame_27f4d721b155645f6af8423c703e70c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_27f4d721b155645f6af8423c703e70c9);
        cache_frame_27f4d721b155645f6af8423c703e70c9 = NULL;
    }

    assertFrameObject(frame_27f4d721b155645f6af8423c703e70c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_pct);
    Py_DECREF(par_pct);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    CHECK_OBJECT(par_ascending);
    Py_DECREF(par_ascending);
    CHECK_OBJECT(par_pct);
    Py_DECREF(par_pct);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__18_cov(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_9151d26133960f4845d5d25885c6298c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9151d26133960f4845d5d25885c6298c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9151d26133960f4845d5d25885c6298c)) {
        Py_XDECREF(cache_frame_9151d26133960f4845d5d25885c6298c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9151d26133960f4845d5d25885c6298c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9151d26133960f4845d5d25885c6298c = MAKE_FUNCTION_FRAME(codeobj_9151d26133960f4845d5d25885c6298c, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9151d26133960f4845d5d25885c6298c->m_type_description == NULL);
    frame_9151d26133960f4845d5d25885c6298c = cache_frame_9151d26133960f4845d5d25885c6298c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9151d26133960f4845d5d25885c6298c);
    assert(Py_REFCNT(frame_9151d26133960f4845d5d25885c6298c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 719;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[27]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_value_0_1 = par_other;
        CHECK_OBJECT(par_pairwise);
        tmp_kw_call_value_1_1 = par_pairwise;
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_2_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_9151d26133960f4845d5d25885c6298c->m_frame.f_lineno = 719;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[28]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 719;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9151d26133960f4845d5d25885c6298c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9151d26133960f4845d5d25885c6298c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9151d26133960f4845d5d25885c6298c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9151d26133960f4845d5d25885c6298c,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9151d26133960f4845d5d25885c6298c == cache_frame_9151d26133960f4845d5d25885c6298c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9151d26133960f4845d5d25885c6298c);
        cache_frame_9151d26133960f4845d5d25885c6298c = NULL;
    }

    assertFrameObject(frame_9151d26133960f4845d5d25885c6298c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__19_corr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *par_pairwise = python_pars[2];
    PyObject *par_ddof = python_pars[3];
    PyObject *par_numeric_only = python_pars[4];
    struct Nuitka_FrameObject *frame_22bebd964da7a04061f80271d45adc14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_22bebd964da7a04061f80271d45adc14 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_22bebd964da7a04061f80271d45adc14)) {
        Py_XDECREF(cache_frame_22bebd964da7a04061f80271d45adc14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_22bebd964da7a04061f80271d45adc14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_22bebd964da7a04061f80271d45adc14 = MAKE_FUNCTION_FRAME(codeobj_22bebd964da7a04061f80271d45adc14, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_22bebd964da7a04061f80271d45adc14->m_type_description == NULL);
    frame_22bebd964da7a04061f80271d45adc14 = cache_frame_22bebd964da7a04061f80271d45adc14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_22bebd964da7a04061f80271d45adc14);
    assert(Py_REFCNT(frame_22bebd964da7a04061f80271d45adc14) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 789;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_pandas$core$window$expanding, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_kw_call_value_0_1 = par_other;
        CHECK_OBJECT(par_pairwise);
        tmp_kw_call_value_1_1 = par_pairwise;
        CHECK_OBJECT(par_ddof);
        tmp_kw_call_value_2_1 = par_ddof;
        CHECK_OBJECT(par_numeric_only);
        tmp_kw_call_value_3_1 = par_numeric_only;
        frame_22bebd964da7a04061f80271d45adc14->m_frame.f_lineno = 789;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[28]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 789;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_22bebd964da7a04061f80271d45adc14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_22bebd964da7a04061f80271d45adc14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_22bebd964da7a04061f80271d45adc14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_22bebd964da7a04061f80271d45adc14,
        type_description_1,
        par_self,
        par_other,
        par_pairwise,
        par_ddof,
        par_numeric_only,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_22bebd964da7a04061f80271d45adc14 == cache_frame_22bebd964da7a04061f80271d45adc14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_22bebd964da7a04061f80271d45adc14);
        cache_frame_22bebd964da7a04061f80271d45adc14 = NULL;
    }

    assertFrameObject(frame_22bebd964da7a04061f80271d45adc14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    CHECK_OBJECT(par_pairwise);
    Py_DECREF(par_pairwise);
    CHECK_OBJECT(par_ddof);
    Py_DECREF(par_ddof);
    CHECK_OBJECT(par_numeric_only);
    Py_DECREF(par_numeric_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pandas$core$window$expanding$$$function__20__get_window_indexer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_window_indexer = NULL;
    struct Nuitka_FrameObject *frame_e768e0303b615c1f02813e4f8decb500;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e768e0303b615c1f02813e4f8decb500 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e768e0303b615c1f02813e4f8decb500)) {
        Py_XDECREF(cache_frame_e768e0303b615c1f02813e4f8decb500);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e768e0303b615c1f02813e4f8decb500 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e768e0303b615c1f02813e4f8decb500 = MAKE_FUNCTION_FRAME(codeobj_e768e0303b615c1f02813e4f8decb500, module_pandas$core$window$expanding, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e768e0303b615c1f02813e4f8decb500->m_type_description == NULL);
    frame_e768e0303b615c1f02813e4f8decb500 = cache_frame_e768e0303b615c1f02813e4f8decb500;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e768e0303b615c1f02813e4f8decb500);
    assert(Py_REFCNT(frame_e768e0303b615c1f02813e4f8decb500) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 813;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 814;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e768e0303b615c1f02813e4f8decb500->m_frame.f_lineno = 812;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 812;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_window_indexer == NULL);
        var_window_indexer = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e768e0303b615c1f02813e4f8decb500, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e768e0303b615c1f02813e4f8decb500->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e768e0303b615c1f02813e4f8decb500, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e768e0303b615c1f02813e4f8decb500,
        type_description_1,
        par_self,
        var_window_indexer
    );


    // Release cached frame if used for exception.
    if (frame_e768e0303b615c1f02813e4f8decb500 == cache_frame_e768e0303b615c1f02813e4f8decb500) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e768e0303b615c1f02813e4f8decb500);
        cache_frame_e768e0303b615c1f02813e4f8decb500 = NULL;
    }

    assertFrameObject(frame_e768e0303b615c1f02813e4f8decb500);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_window_indexer);
    tmp_return_value = var_window_indexer;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_window_indexer);
    Py_DECREF(var_window_indexer);
    var_window_indexer = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__10_median,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_f69d081d208f68562600ce0fcb068739,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__11_std,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_4ef2aca4d25cdf974b7f57108a1dbb3f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__12_var,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_000d68c2cf6b436b6720c3654dc8b15a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__13_sem,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_363c464dac8e7e18842345b64f9be162,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__14_skew,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_87f0697463fa7a61fa03c70a142d1bcf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__15_kurt,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_17090665d61fc1f5151cd81dd573597a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__16_quantile,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_a7bd2da149eb3ca8d630df7dc4393860,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__17_rank,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_27f4d721b155645f6af8423c703e70c9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__18_cov,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_9151d26133960f4845d5d25885c6298c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__19_corr,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_22bebd964da7a04061f80271d45adc14,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_4f0f882c3565df122c3aa7d77ecf9358,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__20__get_window_indexer,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_e768e0303b615c1f02813e4f8decb500,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_56d76f4a1bd95c2e2353c2f1a791ad35,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__3_aggregate,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[102],
#endif
        codeobj_0bf830f130558bb4349658fdac3a2c89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__4_count,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_ad69c5203ee5ac87ae8d95c8ffe35c60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__5_apply,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_945928fb7be1b48cc997d05c57a75a03,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__6_sum,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_c62c77aeeae26999e402eada227a726d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__7_max,
        mod_consts[12],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_f8630cc3649b2cfe7d91e8944fef528f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__8_min,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_4ec96866d28b1df7069ad228739fac8e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pandas$core$window$expanding$$$function__9_mean,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_712b611f914922c87362904d2b72fdc7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pandas$core$window$expanding,
        NULL,
        closure,
        1
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

function_impl_code functable_pandas$core$window$expanding[] = {
    impl_pandas$core$window$expanding$$$function__1___init__,
    impl_pandas$core$window$expanding$$$function__2__get_window_indexer,
    impl_pandas$core$window$expanding$$$function__3_aggregate,
    impl_pandas$core$window$expanding$$$function__4_count,
    impl_pandas$core$window$expanding$$$function__5_apply,
    impl_pandas$core$window$expanding$$$function__6_sum,
    impl_pandas$core$window$expanding$$$function__7_max,
    impl_pandas$core$window$expanding$$$function__8_min,
    impl_pandas$core$window$expanding$$$function__9_mean,
    impl_pandas$core$window$expanding$$$function__10_median,
    impl_pandas$core$window$expanding$$$function__11_std,
    impl_pandas$core$window$expanding$$$function__12_var,
    impl_pandas$core$window$expanding$$$function__13_sem,
    impl_pandas$core$window$expanding$$$function__14_skew,
    impl_pandas$core$window$expanding$$$function__15_kurt,
    impl_pandas$core$window$expanding$$$function__16_quantile,
    impl_pandas$core$window$expanding$$$function__17_rank,
    impl_pandas$core$window$expanding$$$function__18_cov,
    impl_pandas$core$window$expanding$$$function__19_corr,
    impl_pandas$core$window$expanding$$$function__20__get_window_indexer,
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

    function_impl_code *current = functable_pandas$core$window$expanding;
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

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
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

    if (offset > sizeof(functable_pandas$core$window$expanding) || offset < 0) {
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

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pandas$core$window$expanding[offset],
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
        module_pandas$core$window$expanding,
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
PyObject *modulecode_pandas$core$window$expanding(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pandas.core.window.expanding");

    // Store the module for future use.
    module_pandas$core$window$expanding = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.window.expanding: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.window.expanding: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pandas.core.window.expanding: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpandas$core$window$expanding\n");

    moduledict_pandas$core$window$expanding = MODULE_DICT(module_pandas$core$window$expanding);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pandas$core$window$expanding,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[100]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pandas$core$window$expanding,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pandas$core$window$expanding,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pandas$core$window$expanding);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pandas$core$window$expanding);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_CellObject *outline_0_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    struct Nuitka_FrameObject *frame_09133c0f352811827f43c45613c3b7a8;
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
    int tmp_res;
    PyObject *locals_pandas$core$window$expanding$$$class__1_Expanding_44 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_3e7f872e1784f0931f7df9cb32853a34_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797 = NULL;
    struct Nuitka_FrameObject *frame_951162f56ad18620b4dcb5320e64f1c5_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_2);
    }
    frame_09133c0f352811827f43c45613c3b7a8 = MAKE_MODULE_FRAME(codeobj_09133c0f352811827f43c45613c3b7a8, module_pandas$core$window$expanding);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_09133c0f352811827f43c45613c3b7a8);
    assert(Py_REFCNT(frame_09133c0f352811827f43c45613c3b7a8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[41]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[45],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_1, mod_consts[45]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[47],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_2, mod_consts[47]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[48],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_3, mod_consts[48]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_9);
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
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[49];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[50];
        tmp_level_value_2 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 10;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[51],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_4, mod_consts[51]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[52],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_5, mod_consts[52]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[53],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_6, mod_consts[53]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_13);
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[54];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[55];
        tmp_level_value_3 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 20;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[56],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_7, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[57];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 22;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_8 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[59],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_8, mod_consts[59]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_9 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[3],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_9, mod_consts[3]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_10 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[30],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_10, mod_consts[30]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_18);
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[60];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[61];
        tmp_level_value_5 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 27;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_19;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_11 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[62],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_11, mod_consts[62]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_12 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[63],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_12, mod_consts[63]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_13 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[64],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_13, mod_consts[64]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_14 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[65],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_14, mod_consts[65]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[66],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_15, mod_consts[66]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[67],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_16, mod_consts[67]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[68],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_17, mod_consts[68]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_18 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[69],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_18, mod_consts[69]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_19 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[70],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_19, mod_consts[70]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_28);
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[71];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_pandas$core$window$expanding;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[72];
        tmp_level_value_6 = mod_consts[44];
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 38;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_20 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[73],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_20, mod_consts[73]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_21 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_pandas$core$window$expanding,
                mod_consts[74],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tmp_import_name_from_21, mod_consts[74]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_31);
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_32, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_33 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[44];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[75]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[76];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 44;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[77]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[78];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[79];
        tmp_getattr_default_1 = mod_consts[80];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[79]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 44;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_37;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pandas$core$window$expanding$$$class__1_Expanding_44 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[76];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        tmp_dictset_value = MAKE_DICT_EMPTY();
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        frame_3e7f872e1784f0931f7df9cb32853a34_2 = MAKE_CLASS_FRAME(codeobj_3e7f872e1784f0931f7df9cb32853a34, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3e7f872e1784f0931f7df9cb32853a34_2);
        assert(Py_REFCNT(frame_3e7f872e1784f0931f7df9cb32853a34_2) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST3(mod_consts[86],mod_consts[87],mod_consts[88]);
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            tmp_ass_subvalue_1 = mod_consts[90];
            tmp_ass_subscribed_1 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[85]);

            if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[85]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            if (tmp_ass_subscribed_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_ass_subscript_1 = mod_consts[89];
            tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
            Py_DECREF(tmp_ass_subscribed_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_defaults_1 = mod_consts[91];
            tmp_annotations_1 = DICT_COPY(mod_consts[92]);
            Py_INCREF(tmp_defaults_1);

            tmp_closure_1[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__1___init__(tmp_defaults_1, tmp_annotations_1, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[1], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_annotations_2;
            tmp_annotations_2 = DICT_COPY(mod_consts[94]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__2__get_window_indexer(tmp_annotations_2);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_kw_call_dict_value_0_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_kw_call_dict_value_2_1;
            PyObject *tmp_kw_call_dict_value_3_1;
            PyObject *tmp_args_element_value_1;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_called_value_3 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_3 == NULL)) {
                        tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 139;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[62]);

            if (tmp_expression_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[62]);

                    if (unlikely(tmp_expression_value_6 == NULL)) {
                        tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
                    }

                    if (tmp_expression_value_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 140;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_subscript_value_2 = mod_consts[5];
            tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_kw_call_arg_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 140;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

            if (tmp_called_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_4 == NULL)) {
                        tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_called_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);

                        exception_lineno = 141;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 141;
            tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[97]);

            Py_DECREF(tmp_called_value_4);
            if (tmp_kw_call_dict_value_0_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);

                exception_lineno = 141;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

            if (tmp_called_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_called_value_5 == NULL)) {
                        tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_called_value_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);
                        Py_DECREF(tmp_kw_call_arg_value_0_1);
                        Py_DECREF(tmp_kw_call_dict_value_0_1);

                        exception_lineno = 149;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 149;
            tmp_kw_call_dict_value_1_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[98]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_kw_call_dict_value_1_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);
                Py_DECREF(tmp_kw_call_arg_value_0_1);
                Py_DECREF(tmp_kw_call_dict_value_0_1);

                exception_lineno = 149;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_kw_call_dict_value_2_1 = mod_consts[99];
            tmp_kw_call_dict_value_3_1 = mod_consts[100];
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 139;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_1};
                PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
                tmp_called_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[101]);
            }

            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }

            tmp_closure_2[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_args_element_value_1 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__3_aggregate(tmp_closure_2);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 139;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 170;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[5]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[103], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_2 = "c";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_3;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_called_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_7 == NULL)) {
                        tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 175;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_4 == NULL)) {
                        tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_7);

                        exception_lineno = 176;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_4);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_2 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_called_value_8;
                PyObject *tmp_called_value_9;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_subscript_value_3;
                PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_4);
                tmp_called_value_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_8 == NULL)) {
                            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 177;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_8);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 177;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[104]);

                Py_DECREF(tmp_called_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 177;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_4);
                tmp_tuple_element_4 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_4 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_4 == NULL)) {
                            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_4 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 178;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_4);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_2, 2, tmp_tuple_element_4);
                tmp_called_value_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_9 == NULL)) {
                            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 179;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_called_value_9);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 179;
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[105]);

                Py_DECREF(tmp_called_value_9);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 179;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 3, tmp_tuple_element_4);
                tmp_expression_value_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_expression_value_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_7 == NULL)) {
                            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 180;
                            type_description_2 = "c";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_7);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                tmp_subscript_value_3 = mod_consts[106];
                tmp_tuple_element_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
                Py_DECREF(tmp_expression_value_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 180;
                    type_description_2 = "c";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_args_value_2, 4, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[107]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 175;
            tmp_called_value_6 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[108];
            tmp_annotations_3 = DICT_COPY(mod_consts[109]);
            Py_INCREF(tmp_defaults_2);

            tmp_closure_3[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_args_element_value_2 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__4_count(tmp_defaults_2, tmp_annotations_3, tmp_closure_3);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 175;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[6], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_10;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_4;
            struct Nuitka_CellObject *tmp_closure_4[1];
            tmp_called_value_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_11 == NULL)) {
                        tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 188;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_5 == NULL)) {
                        tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_5 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_11);

                        exception_lineno = 189;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_5);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_3 = MAKE_TUPLE_EMPTY(7);
            {
                PyObject *tmp_called_value_12;
                PyObject *tmp_called_value_13;
                PyObject *tmp_called_value_14;
                PyObject *tmp_expression_value_8;
                PyObject *tmp_subscript_value_4;
                PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_5);
                tmp_called_value_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_12 == NULL)) {
                            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 190;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_12);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 190;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[111]);

                Py_DECREF(tmp_called_value_12);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 190;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[70]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[70]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 191;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 2, tmp_tuple_element_5);
                tmp_called_value_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_13 == NULL)) {
                            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 192;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_13);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 192;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[104]);

                Py_DECREF(tmp_called_value_13);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 192;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 3, tmp_tuple_element_5);
                tmp_tuple_element_5 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_5 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_5 == NULL)) {
                            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_5 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 193;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_tuple_element_5);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_3, 4, tmp_tuple_element_5);
                tmp_called_value_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_14 == NULL)) {
                            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 194;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_called_value_14);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 194;
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[105]);

                Py_DECREF(tmp_called_value_14);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 194;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 5, tmp_tuple_element_5);
                tmp_expression_value_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_expression_value_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_8 == NULL)) {
                            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 195;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_8);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_subscript_value_4 = mod_consts[106];
                tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_4);
                Py_DECREF(tmp_expression_value_8);
                if (tmp_tuple_element_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 195;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_args_value_3, 6, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_3);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_kwargs_value_3 = DICT_COPY(mod_consts[112]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 188;
            tmp_called_value_10 = CALL_FUNCTION(tmp_called_value_11, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_value_3);
            Py_DECREF(tmp_kwargs_value_3);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_3 = mod_consts[113];
            tmp_annotations_4 = DICT_COPY(mod_consts[114]);
            Py_INCREF(tmp_defaults_3);

            tmp_closure_4[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_4[0]);

            tmp_args_element_value_3 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__5_apply(tmp_defaults_3, tmp_annotations_4, tmp_closure_4);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 188;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[8], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_defaults_4;
            PyObject *tmp_annotations_5;
            struct Nuitka_CellObject *tmp_closure_5[1];
            tmp_called_value_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_16 == NULL)) {
                        tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 218;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_6 == NULL)) {
                        tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_6 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_16);

                        exception_lineno = 219;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_6);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_4 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_17;
                PyObject *tmp_called_value_18;
                PyObject *tmp_called_value_19;
                PyObject *tmp_called_value_20;
                PyObject *tmp_called_value_21;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_5;
                PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_6);
                tmp_called_value_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_17 == NULL)) {
                            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 220;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_17);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 220;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[111]);

                Py_DECREF(tmp_called_value_17);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 220;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 1, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 221;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 2, tmp_tuple_element_6);
                tmp_called_value_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_18 == NULL)) {
                            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 222;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_18);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 222;
                tmp_tuple_element_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_18);
                Py_DECREF(tmp_called_value_18);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 222;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 3, tmp_tuple_element_6);
                tmp_called_value_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_19 == NULL)) {
                            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_19);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 223;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[104]);

                Py_DECREF(tmp_called_value_19);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 4, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 224;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 5, tmp_tuple_element_6);
                tmp_called_value_20 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_20 == NULL)) {
                            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 225;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_20);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 225;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[105]);

                Py_DECREF(tmp_called_value_20);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 225;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 6, tmp_tuple_element_6);
                tmp_tuple_element_6 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_6 == NULL)) {
                            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 226;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_tuple_element_6);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_4, 7, tmp_tuple_element_6);
                tmp_called_value_21 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_21 == NULL)) {
                            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 227;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_called_value_21);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 227;
                tmp_tuple_element_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[116]);

                Py_DECREF(tmp_called_value_21);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 227;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 8, tmp_tuple_element_6);
                tmp_expression_value_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[65]);

                if (tmp_expression_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_9 == NULL)) {
                            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 228;
                            type_description_2 = "c";
                            goto tuple_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_9);
                    } else {
                        goto tuple_build_exception_4;
                    }
                }

                tmp_subscript_value_5 = mod_consts[106];
                tmp_tuple_element_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_9);
                if (tmp_tuple_element_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 228;
                    type_description_2 = "c";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_args_value_4, 9, tmp_tuple_element_6);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_4);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_kwargs_value_4 = DICT_COPY(mod_consts[117]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 218;
            tmp_called_value_15 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_args_value_4);
            Py_DECREF(tmp_kwargs_value_4);
            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_4 = mod_consts[118];
            tmp_annotations_5 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_4);

            tmp_closure_5[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_5[0]);

            tmp_args_element_value_4 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__6_sum(tmp_defaults_4, tmp_annotations_5, tmp_closure_5);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 218;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_22;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_5;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_defaults_5;
            PyObject *tmp_annotations_6;
            struct Nuitka_CellObject *tmp_closure_6[1];
            tmp_called_value_23 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_23 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_23 == NULL)) {
                        tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_23 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 245;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_23);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_7 == NULL)) {
                        tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_23);

                        exception_lineno = 246;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_5 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_24;
                PyObject *tmp_called_value_25;
                PyObject *tmp_called_value_26;
                PyObject *tmp_called_value_27;
                PyObject *tmp_called_value_28;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_6;
                PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_7);
                tmp_called_value_24 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_24 == NULL)) {
                            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 247;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_24);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 247;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[111]);

                Py_DECREF(tmp_called_value_24);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 247;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 1, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 248;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 2, tmp_tuple_element_7);
                tmp_called_value_25 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_25 == NULL)) {
                            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 249;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_25);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 249;
                tmp_tuple_element_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
                Py_DECREF(tmp_called_value_25);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 249;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 3, tmp_tuple_element_7);
                tmp_called_value_26 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_26 == NULL)) {
                            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 250;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_26);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 250;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[104]);

                Py_DECREF(tmp_called_value_26);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 250;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 4, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 251;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 5, tmp_tuple_element_7);
                tmp_called_value_27 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_27 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_27 == NULL)) {
                            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_27 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 252;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_27);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 252;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_27, mod_consts[105]);

                Py_DECREF(tmp_called_value_27);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 252;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 6, tmp_tuple_element_7);
                tmp_tuple_element_7 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_7 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_7 == NULL)) {
                            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_7 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 253;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_tuple_element_7);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_5, 7, tmp_tuple_element_7);
                tmp_called_value_28 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_28 == NULL)) {
                            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 254;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_called_value_28);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 254;
                tmp_tuple_element_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[116]);

                Py_DECREF(tmp_called_value_28);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 254;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 8, tmp_tuple_element_7);
                tmp_expression_value_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[65]);

                if (tmp_expression_value_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_10 == NULL)) {
                            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 255;
                            type_description_2 = "c";
                            goto tuple_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_10);
                    } else {
                        goto tuple_build_exception_5;
                    }
                }

                tmp_subscript_value_6 = mod_consts[106];
                tmp_tuple_element_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_10);
                if (tmp_tuple_element_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 255;
                    type_description_2 = "c";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_args_value_5, 9, tmp_tuple_element_7);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_value_5);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_kwargs_value_5 = DICT_COPY(mod_consts[121]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 245;
            tmp_called_value_22 = CALL_FUNCTION(tmp_called_value_23, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_called_value_23);
            Py_DECREF(tmp_args_value_5);
            Py_DECREF(tmp_kwargs_value_5);
            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_5 = mod_consts[118];
            tmp_annotations_6 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_5);

            tmp_closure_6[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_6[0]);

            tmp_args_element_value_5 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__7_max(tmp_defaults_5, tmp_annotations_6, tmp_closure_6);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 245;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_5);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[12], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_29;
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_defaults_6;
            PyObject *tmp_annotations_7;
            struct Nuitka_CellObject *tmp_closure_7[1];
            tmp_called_value_30 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_30 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_30 == NULL)) {
                        tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_30 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 272;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_30);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_8 == NULL)) {
                        tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_30);

                        exception_lineno = 273;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_8);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_6 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_31;
                PyObject *tmp_called_value_32;
                PyObject *tmp_called_value_33;
                PyObject *tmp_called_value_34;
                PyObject *tmp_called_value_35;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_7;
                PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_8);
                tmp_called_value_31 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_31 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_31 == NULL)) {
                            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_31 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 274;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_31);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 274;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[111]);

                Py_DECREF(tmp_called_value_31);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 274;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 275;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 2, tmp_tuple_element_8);
                tmp_called_value_32 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_32 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_32 == NULL)) {
                            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_32 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 276;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_32);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 276;
                tmp_tuple_element_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_32);
                Py_DECREF(tmp_called_value_32);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 276;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 3, tmp_tuple_element_8);
                tmp_called_value_33 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_33 == NULL)) {
                            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 277;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_33);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 277;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[104]);

                Py_DECREF(tmp_called_value_33);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 277;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 4, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 278;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 5, tmp_tuple_element_8);
                tmp_called_value_34 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_34 == NULL)) {
                            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 279;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_34);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 279;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[105]);

                Py_DECREF(tmp_called_value_34);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 279;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 6, tmp_tuple_element_8);
                tmp_tuple_element_8 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_8 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_8 == NULL)) {
                            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_8 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 280;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_tuple_element_8);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_6, 7, tmp_tuple_element_8);
                tmp_called_value_35 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_35 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_35 == NULL)) {
                            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_35 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 281;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_called_value_35);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 281;
                tmp_tuple_element_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[116]);

                Py_DECREF(tmp_called_value_35);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 281;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 8, tmp_tuple_element_8);
                tmp_expression_value_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[65]);

                if (tmp_expression_value_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_11 == NULL)) {
                            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 282;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_11);
                    } else {
                        goto tuple_build_exception_6;
                    }
                }

                tmp_subscript_value_7 = mod_consts[106];
                tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_11);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 282;
                    type_description_2 = "c";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_args_value_6, 9, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_value_6);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_kwargs_value_6 = DICT_COPY(mod_consts[123]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 272;
            tmp_called_value_29 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_args_value_6);
            Py_DECREF(tmp_kwargs_value_6);
            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_6 = mod_consts[118];
            tmp_annotations_7 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_6);

            tmp_closure_7[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_7[0]);

            tmp_args_element_value_6 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__8_min(tmp_defaults_6, tmp_annotations_7, tmp_closure_7);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 272;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 272;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[13], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_36;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_defaults_7;
            PyObject *tmp_annotations_8;
            struct Nuitka_CellObject *tmp_closure_8[1];
            tmp_called_value_37 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_37 == NULL)) {
                        tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 299;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_37);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_9 == NULL)) {
                        tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_37);

                        exception_lineno = 300;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_7 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_38;
                PyObject *tmp_called_value_39;
                PyObject *tmp_called_value_40;
                PyObject *tmp_called_value_41;
                PyObject *tmp_called_value_42;
                PyObject *tmp_expression_value_12;
                PyObject *tmp_subscript_value_8;
                PyTuple_SET_ITEM(tmp_args_value_7, 0, tmp_tuple_element_9);
                tmp_called_value_38 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_38 == NULL)) {
                            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 301;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_38);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 301;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[111]);

                Py_DECREF(tmp_called_value_38);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 301;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 1, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 302;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 2, tmp_tuple_element_9);
                tmp_called_value_39 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_39 == NULL)) {
                            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 303;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_39);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 303;
                tmp_tuple_element_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
                Py_DECREF(tmp_called_value_39);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 303;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 3, tmp_tuple_element_9);
                tmp_called_value_40 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_40 == NULL)) {
                            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 304;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_40);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 304;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_40, mod_consts[104]);

                Py_DECREF(tmp_called_value_40);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 304;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 4, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 305;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 5, tmp_tuple_element_9);
                tmp_called_value_41 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_41 == NULL)) {
                            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 306;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_41);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 306;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[105]);

                Py_DECREF(tmp_called_value_41);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 306;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 6, tmp_tuple_element_9);
                tmp_tuple_element_9 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_9 == NULL)) {
                            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 307;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_tuple_element_9);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_7, 7, tmp_tuple_element_9);
                tmp_called_value_42 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_42 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_42 == NULL)) {
                            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_42 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 308;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_called_value_42);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 308;
                tmp_tuple_element_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[116]);

                Py_DECREF(tmp_called_value_42);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 308;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 8, tmp_tuple_element_9);
                tmp_expression_value_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[65]);

                if (tmp_expression_value_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_12 == NULL)) {
                            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 309;
                            type_description_2 = "c";
                            goto tuple_build_exception_7;
                        }
                        Py_INCREF(tmp_expression_value_12);
                    } else {
                        goto tuple_build_exception_7;
                    }
                }

                tmp_subscript_value_8 = mod_consts[106];
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 309;
                    type_description_2 = "c";
                    goto tuple_build_exception_7;
                }
                PyTuple_SET_ITEM(tmp_args_value_7, 9, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_value_7);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_kwargs_value_7 = DICT_COPY(mod_consts[125]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 299;
            tmp_called_value_36 = CALL_FUNCTION(tmp_called_value_37, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_value_7);
            Py_DECREF(tmp_kwargs_value_7);
            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_7 = mod_consts[118];
            tmp_annotations_8 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_7);

            tmp_closure_8[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_8[0]);

            tmp_args_element_value_7 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__9_mean(tmp_defaults_7, tmp_annotations_8, tmp_closure_8);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 299;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_7);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_7);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 299;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 314;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_43;
            PyObject *tmp_called_value_44;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_8;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_defaults_8;
            PyObject *tmp_annotations_9;
            struct Nuitka_CellObject *tmp_closure_9[1];
            tmp_called_value_44 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_44 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_44 == NULL)) {
                        tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_44 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 326;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_44);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_10 == NULL)) {
                        tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_44);

                        exception_lineno = 327;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_10);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_8 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_45;
                PyObject *tmp_called_value_46;
                PyObject *tmp_called_value_47;
                PyObject *tmp_called_value_48;
                PyObject *tmp_called_value_49;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_subscript_value_9;
                PyTuple_SET_ITEM(tmp_args_value_8, 0, tmp_tuple_element_10);
                tmp_called_value_45 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_45 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_45 == NULL)) {
                            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_45 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 328;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_45);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 328;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[111]);

                Py_DECREF(tmp_called_value_45);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 328;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 1, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 329;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 2, tmp_tuple_element_10);
                tmp_called_value_46 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_46 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_46 == NULL)) {
                            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_46 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 330;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_46);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 330;
                tmp_tuple_element_10 = CALL_FUNCTION_NO_ARGS(tmp_called_value_46);
                Py_DECREF(tmp_called_value_46);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 330;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 3, tmp_tuple_element_10);
                tmp_called_value_47 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_47 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_47 == NULL)) {
                            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_47 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 331;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_47);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 331;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[104]);

                Py_DECREF(tmp_called_value_47);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 331;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 4, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 332;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 5, tmp_tuple_element_10);
                tmp_called_value_48 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_48 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_48 == NULL)) {
                            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_48 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 333;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_48);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 333;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[105]);

                Py_DECREF(tmp_called_value_48);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 333;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 6, tmp_tuple_element_10);
                tmp_tuple_element_10 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_10 == NULL)) {
                            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_10 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 334;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_8, 7, tmp_tuple_element_10);
                tmp_called_value_49 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_49 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_49 == NULL)) {
                            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_49 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 335;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_called_value_49);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 335;
                tmp_tuple_element_10 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[116]);

                Py_DECREF(tmp_called_value_49);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 335;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 8, tmp_tuple_element_10);
                tmp_expression_value_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[65]);

                if (tmp_expression_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[65]);

                        if (unlikely(tmp_expression_value_13 == NULL)) {
                            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
                        }

                        if (tmp_expression_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 336;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_13);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                tmp_subscript_value_9 = mod_consts[106];
                tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_tuple_element_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 336;
                    type_description_2 = "c";
                    goto tuple_build_exception_8;
                }
                PyTuple_SET_ITEM(tmp_args_value_8, 9, tmp_tuple_element_10);
            }
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_value_8);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_kwargs_value_8 = DICT_COPY(mod_consts[127]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 326;
            tmp_called_value_43 = CALL_FUNCTION(tmp_called_value_44, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_args_value_8);
            Py_DECREF(tmp_kwargs_value_8);
            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_8 = mod_consts[118];
            tmp_annotations_9 = DICT_COPY(mod_consts[119]);
            Py_INCREF(tmp_defaults_8);

            tmp_closure_9[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_9[0]);

            tmp_args_element_value_8 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__10_median(tmp_defaults_8, tmp_annotations_9, tmp_closure_9);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 326;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_43);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[15], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_value_9;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_defaults_9;
            PyObject *tmp_annotations_10;
            struct Nuitka_CellObject *tmp_closure_10[1];
            tmp_called_value_51 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 353;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_11 == NULL)) {
                        tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);

                        exception_lineno = 354;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_9 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_52;
                PyObject *tmp_called_value_53;
                PyObject *tmp_expression_value_14;
                PyObject *tmp_called_value_54;
                PyObject *tmp_called_value_55;
                PyObject *tmp_called_value_56;
                PyObject *tmp_called_value_57;
                PyObject *tmp_called_value_58;
                PyObject *tmp_called_value_59;
                PyObject *tmp_expression_value_15;
                PyObject *tmp_called_value_60;
                PyObject *tmp_called_value_61;
                PyObject *tmp_called_value_62;
                PyObject *tmp_expression_value_16;
                PyObject *tmp_called_value_63;
                PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_11);
                tmp_called_value_52 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_52 == NULL)) {
                            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 355;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_52);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 355;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_52, mod_consts[111]);

                Py_DECREF(tmp_called_value_52);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 355;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 1, tmp_tuple_element_11);
                tmp_called_value_54 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_54 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_54 == NULL)) {
                            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_54 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 356;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_54);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 356;
                tmp_expression_value_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_54, mod_consts[129]);

                Py_DECREF(tmp_called_value_54);
                if (tmp_expression_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[130]);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_called_value_53 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 356;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_53, mod_consts[131]);

                Py_DECREF(tmp_called_value_53);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 356;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 2, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 363;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 3, tmp_tuple_element_11);
                tmp_called_value_55 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_55 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_55 == NULL)) {
                            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_55 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 364;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_55);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 364;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[132]);

                Py_DECREF(tmp_called_value_55);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 364;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 4, tmp_tuple_element_11);
                tmp_called_value_56 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_56 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_56 == NULL)) {
                            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_56 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 365;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_56);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 365;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_56, mod_consts[104]);

                Py_DECREF(tmp_called_value_56);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 365;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 5, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 366;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 6, tmp_tuple_element_11);
                tmp_called_value_57 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_57 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_57 == NULL)) {
                            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_57 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 367;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_57);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 367;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[105]);

                Py_DECREF(tmp_called_value_57);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 367;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 7, tmp_tuple_element_11);
                tmp_tuple_element_11 = mod_consts[133];
                PyTuple_SET_ITEM0(tmp_args_value_9, 8, tmp_tuple_element_11);
                tmp_tuple_element_11 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_11 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_11 == NULL)) {
                            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 369;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_11);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_9, 9, tmp_tuple_element_11);
                tmp_called_value_58 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_58 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_58 == NULL)) {
                            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_58 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 370;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_58);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 370;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[116]);

                Py_DECREF(tmp_called_value_58);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 370;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 10, tmp_tuple_element_11);
                tmp_called_value_60 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_60 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_60 == NULL)) {
                            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_60 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 371;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_60);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 371;
                tmp_expression_value_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_60, mod_consts[134]);

                Py_DECREF(tmp_called_value_60);
                if (tmp_expression_value_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[130]);
                Py_DECREF(tmp_expression_value_15);
                if (tmp_called_value_59 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 371;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_59, mod_consts[131]);

                Py_DECREF(tmp_called_value_59);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 371;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 11, tmp_tuple_element_11);
                tmp_called_value_61 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_61 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_61 == NULL)) {
                            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_61 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 379;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_61);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 379;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_61, mod_consts[135]);

                Py_DECREF(tmp_called_value_61);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 379;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 12, tmp_tuple_element_11);
                tmp_called_value_63 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_63 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_63 == NULL)) {
                            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_63 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 380;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_called_value_63);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 380;
                tmp_expression_value_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_63, mod_consts[136]);

                Py_DECREF(tmp_called_value_63);
                if (tmp_expression_value_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[130]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_called_value_62 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 380;
                tmp_tuple_element_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_62, mod_consts[131]);

                Py_DECREF(tmp_called_value_62);
                if (tmp_tuple_element_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 380;
                    type_description_2 = "c";
                    goto tuple_build_exception_9;
                }
                PyTuple_SET_ITEM(tmp_args_value_9, 13, tmp_tuple_element_11);
            }
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_value_9);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_kwargs_value_9 = DICT_COPY(mod_consts[137]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 353;
            tmp_called_value_50 = CALL_FUNCTION(tmp_called_value_51, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_value_9);
            Py_DECREF(tmp_kwargs_value_9);
            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_9 = mod_consts[138];
            tmp_annotations_10 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_9);

            tmp_closure_10[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_10[0]);

            tmp_args_element_value_9 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__11_std(tmp_defaults_9, tmp_annotations_10, tmp_closure_10);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 353;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_9);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 353;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 399;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_64;
            PyObject *tmp_called_value_65;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_10;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_defaults_10;
            PyObject *tmp_annotations_11;
            struct Nuitka_CellObject *tmp_closure_11[1];
            tmp_called_value_65 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_65 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_65 == NULL)) {
                        tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_65 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_65);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_12 == NULL)) {
                        tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_65);

                        exception_lineno = 414;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_12);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_10 = MAKE_TUPLE_EMPTY(14);
            {
                PyObject *tmp_called_value_66;
                PyObject *tmp_called_value_67;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_called_value_68;
                PyObject *tmp_called_value_69;
                PyObject *tmp_called_value_70;
                PyObject *tmp_called_value_71;
                PyObject *tmp_called_value_72;
                PyObject *tmp_called_value_73;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_called_value_74;
                PyObject *tmp_called_value_75;
                PyObject *tmp_called_value_76;
                PyObject *tmp_expression_value_19;
                PyObject *tmp_called_value_77;
                PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_12);
                tmp_called_value_66 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_66 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_66 == NULL)) {
                            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_66 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 415;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_66);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 415;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_66, mod_consts[111]);

                Py_DECREF(tmp_called_value_66);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 415;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 1, tmp_tuple_element_12);
                tmp_called_value_68 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_68 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_68 == NULL)) {
                            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_68 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 416;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_68);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 416;
                tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_68, mod_consts[129]);

                Py_DECREF(tmp_called_value_68);
                if (tmp_expression_value_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[130]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_called_value_67 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 416;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_67, mod_consts[131]);

                Py_DECREF(tmp_called_value_67);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 416;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 2, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 423;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 3, tmp_tuple_element_12);
                tmp_called_value_69 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[69]);

                if (tmp_called_value_69 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[69]);

                        if (unlikely(tmp_called_value_69 == NULL)) {
                            tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
                        }

                        if (tmp_called_value_69 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 424;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_69);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 424;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_69, mod_consts[132]);

                Py_DECREF(tmp_called_value_69);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 424;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 4, tmp_tuple_element_12);
                tmp_called_value_70 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_70 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_70 == NULL)) {
                            tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_70 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 425;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_70);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 425;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_70, mod_consts[104]);

                Py_DECREF(tmp_called_value_70);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 425;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 5, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 426;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 6, tmp_tuple_element_12);
                tmp_called_value_71 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_71 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_71 == NULL)) {
                            tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_71 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 427;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_71);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 427;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_71, mod_consts[105]);

                Py_DECREF(tmp_called_value_71);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 427;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 7, tmp_tuple_element_12);
                tmp_tuple_element_12 = mod_consts[141];
                PyTuple_SET_ITEM0(tmp_args_value_10, 8, tmp_tuple_element_12);
                tmp_tuple_element_12 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_12 == NULL)) {
                            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_12 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 429;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_10, 9, tmp_tuple_element_12);
                tmp_called_value_72 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_72 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_72 == NULL)) {
                            tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_72 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 430;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_72);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 430;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_72, mod_consts[116]);

                Py_DECREF(tmp_called_value_72);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 430;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 10, tmp_tuple_element_12);
                tmp_called_value_74 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_74 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_74 == NULL)) {
                            tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_74 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 431;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_74);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 431;
                tmp_expression_value_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_74, mod_consts[142]);

                Py_DECREF(tmp_called_value_74);
                if (tmp_expression_value_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 431;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[130]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_called_value_73 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 431;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 431;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_73, mod_consts[131]);

                Py_DECREF(tmp_called_value_73);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 431;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 11, tmp_tuple_element_12);
                tmp_called_value_75 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_75 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_75 == NULL)) {
                            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_75 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 439;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_75);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 439;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_75, mod_consts[135]);

                Py_DECREF(tmp_called_value_75);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 439;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 12, tmp_tuple_element_12);
                tmp_called_value_77 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_77 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_77 == NULL)) {
                            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_77 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 440;
                            type_description_2 = "c";
                            goto tuple_build_exception_10;
                        }
                        Py_INCREF(tmp_called_value_77);
                    } else {
                        goto tuple_build_exception_10;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 440;
                tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_77, mod_consts[143]);

                Py_DECREF(tmp_called_value_77);
                if (tmp_expression_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 440;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[130]);
                Py_DECREF(tmp_expression_value_19);
                if (tmp_called_value_76 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 440;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 440;
                tmp_tuple_element_12 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_76, mod_consts[131]);

                Py_DECREF(tmp_called_value_76);
                if (tmp_tuple_element_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 440;
                    type_description_2 = "c";
                    goto tuple_build_exception_10;
                }
                PyTuple_SET_ITEM(tmp_args_value_10, 13, tmp_tuple_element_12);
            }
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_value_10);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_kwargs_value_10 = DICT_COPY(mod_consts[144]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 413;
            tmp_called_value_64 = CALL_FUNCTION(tmp_called_value_65, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_args_value_10);
            Py_DECREF(tmp_kwargs_value_10);
            if (tmp_called_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_10 = mod_consts[138];
            tmp_annotations_11 = DICT_COPY(mod_consts[139]);
            Py_INCREF(tmp_defaults_10);

            tmp_closure_11[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_11[0]);

            tmp_args_element_value_10 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__12_var(tmp_defaults_10, tmp_annotations_11, tmp_closure_11);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 413;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_64, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[18], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_78;
            PyObject *tmp_called_value_79;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_11;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_defaults_11;
            PyObject *tmp_annotations_12;
            struct Nuitka_CellObject *tmp_closure_12[1];
            tmp_called_value_79 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_79 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_79 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_79 == NULL)) {
                        tmp_called_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_79 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 473;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_79);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_13 == NULL)) {
                        tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_79);

                        exception_lineno = 474;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_13);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_11 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_80;
                PyObject *tmp_called_value_81;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_called_value_82;
                PyObject *tmp_called_value_83;
                PyObject *tmp_called_value_84;
                PyObject *tmp_called_value_85;
                PyObject *tmp_called_value_86;
                PyObject *tmp_called_value_87;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_called_value_88;
                PyTuple_SET_ITEM(tmp_args_value_11, 0, tmp_tuple_element_13);
                tmp_called_value_80 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_80 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_80 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_80 == NULL)) {
                            tmp_called_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_80 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 475;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_80);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 475;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_80, mod_consts[111]);

                Py_DECREF(tmp_called_value_80);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 475;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 1, tmp_tuple_element_13);
                tmp_called_value_82 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_82 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_82 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_82 == NULL)) {
                            tmp_called_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_82 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 476;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_82);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 476;
                tmp_expression_value_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_82, mod_consts[129]);

                Py_DECREF(tmp_called_value_82);
                if (tmp_expression_value_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 476;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[130]);
                Py_DECREF(tmp_expression_value_20);
                if (tmp_called_value_81 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 476;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 476;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_81, mod_consts[131]);

                Py_DECREF(tmp_called_value_81);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 476;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 2, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 483;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 3, tmp_tuple_element_13);
                tmp_called_value_83 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_83 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_83 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_83 == NULL)) {
                            tmp_called_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_83 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 484;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_83);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 484;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_83, mod_consts[104]);

                Py_DECREF(tmp_called_value_83);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 484;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 4, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 485;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 5, tmp_tuple_element_13);
                tmp_called_value_84 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_84 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_84 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_84 == NULL)) {
                            tmp_called_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_84 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 486;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_84);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 486;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_84, mod_consts[105]);

                Py_DECREF(tmp_called_value_84);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 486;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 6, tmp_tuple_element_13);
                tmp_tuple_element_13 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_13 == NULL)) {
                            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 487;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_tuple_element_13);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_11, 7, tmp_tuple_element_13);
                tmp_called_value_85 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_85 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_85 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_85 == NULL)) {
                            tmp_called_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_85 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 488;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_85);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 488;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_85, mod_consts[116]);

                Py_DECREF(tmp_called_value_85);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 488;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 8, tmp_tuple_element_13);
                tmp_tuple_element_13 = mod_consts[146];
                PyTuple_SET_ITEM0(tmp_args_value_11, 9, tmp_tuple_element_13);
                tmp_called_value_86 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_86 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_86 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_86 == NULL)) {
                            tmp_called_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_86 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 490;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_86);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 490;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_86, mod_consts[135]);

                Py_DECREF(tmp_called_value_86);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 490;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 10, tmp_tuple_element_13);
                tmp_called_value_88 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_88 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_88 == NULL)) {
                            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_88 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 491;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_called_value_88);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 491;
                tmp_expression_value_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_88, mod_consts[147]);

                Py_DECREF(tmp_called_value_88);
                if (tmp_expression_value_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[130]);
                Py_DECREF(tmp_expression_value_21);
                if (tmp_called_value_87 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 491;
                tmp_tuple_element_13 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_87, mod_consts[131]);

                Py_DECREF(tmp_called_value_87);
                if (tmp_tuple_element_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 491;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_args_value_11, 11, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_value_11);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_kwargs_value_11 = DICT_COPY(mod_consts[148]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 473;
            tmp_called_value_78 = CALL_FUNCTION(tmp_called_value_79, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_args_value_11);
            Py_DECREF(tmp_kwargs_value_11);
            if (tmp_called_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_11 = mod_consts[149];
            tmp_annotations_12 = DICT_COPY(mod_consts[150]);
            Py_INCREF(tmp_defaults_11);

            tmp_closure_12[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_12[0]);

            tmp_args_element_value_11 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__13_sem(tmp_defaults_11, tmp_annotations_12, tmp_closure_12);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 473;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 473;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[19], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 507;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_89;
            PyObject *tmp_called_value_90;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_12;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_defaults_12;
            PyObject *tmp_annotations_13;
            struct Nuitka_CellObject *tmp_closure_13[1];
            tmp_called_value_90 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_90 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_90 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_90 == NULL)) {
                        tmp_called_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_90 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 510;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_90);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_14 == NULL)) {
                        tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_14 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_90);

                        exception_lineno = 511;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_14);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_12 = MAKE_TUPLE_EMPTY(10);
            {
                PyObject *tmp_called_value_91;
                PyObject *tmp_called_value_92;
                PyObject *tmp_called_value_93;
                PyObject *tmp_called_value_94;
                PyTuple_SET_ITEM(tmp_args_value_12, 0, tmp_tuple_element_14);
                tmp_called_value_91 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_91 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_91 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_91 == NULL)) {
                            tmp_called_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_91 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 512;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_91);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 512;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_91, mod_consts[111]);

                Py_DECREF(tmp_called_value_91);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 512;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 513;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 2, tmp_tuple_element_14);
                tmp_called_value_92 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_92 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_92 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_92 == NULL)) {
                            tmp_called_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_92 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 514;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_92);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 514;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_92, mod_consts[104]);

                Py_DECREF(tmp_called_value_92);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 514;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 3, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 515;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 4, tmp_tuple_element_14);
                tmp_called_value_93 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_93 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_93 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_93 == NULL)) {
                            tmp_called_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_93 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 516;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_93);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 516;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_93, mod_consts[105]);

                Py_DECREF(tmp_called_value_93);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 516;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 5, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[152];
                PyTuple_SET_ITEM0(tmp_args_value_12, 6, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 518;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_12, 7, tmp_tuple_element_14);
                tmp_called_value_94 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_94 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_94 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_94 == NULL)) {
                            tmp_called_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_94 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 519;
                            type_description_2 = "c";
                            goto tuple_build_exception_12;
                        }
                        Py_INCREF(tmp_called_value_94);
                    } else {
                        goto tuple_build_exception_12;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 519;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_94, mod_consts[116]);

                Py_DECREF(tmp_called_value_94);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 519;
                    type_description_2 = "c";
                    goto tuple_build_exception_12;
                }
                PyTuple_SET_ITEM(tmp_args_value_12, 8, tmp_tuple_element_14);
                tmp_tuple_element_14 = mod_consts[153];
                PyTuple_SET_ITEM0(tmp_args_value_12, 9, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_value_12);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_kwargs_value_12 = DICT_COPY(mod_consts[154]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 510;
            tmp_called_value_89 = CALL_FUNCTION(tmp_called_value_90, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_args_value_12);
            Py_DECREF(tmp_kwargs_value_12);
            if (tmp_called_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_12 = mod_consts[108];
            tmp_annotations_13 = DICT_COPY(mod_consts[109]);
            Py_INCREF(tmp_defaults_12);

            tmp_closure_13[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_13[0]);

            tmp_args_element_value_12 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__14_skew(tmp_defaults_12, tmp_annotations_13, tmp_closure_13);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 510;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_12);
            Py_DECREF(tmp_called_value_89);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 510;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 525;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_95;
            PyObject *tmp_called_value_96;
            PyObject *tmp_args_value_13;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_13;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_defaults_13;
            PyObject *tmp_annotations_14;
            struct Nuitka_CellObject *tmp_closure_14[1];
            tmp_called_value_96 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_96 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_96 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_96 == NULL)) {
                        tmp_called_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_96 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 528;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_96);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_15 == NULL)) {
                        tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_96);

                        exception_lineno = 529;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_13 = MAKE_TUPLE_EMPTY(12);
            {
                PyObject *tmp_called_value_97;
                PyObject *tmp_called_value_98;
                PyObject *tmp_called_value_99;
                PyObject *tmp_called_value_100;
                PyObject *tmp_called_value_101;
                PyObject *tmp_called_value_102;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_called_value_103;
                PyTuple_SET_ITEM(tmp_args_value_13, 0, tmp_tuple_element_15);
                tmp_called_value_97 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_97 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_97 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_97 == NULL)) {
                            tmp_called_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_97 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 530;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_97);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 530;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_97, mod_consts[111]);

                Py_DECREF(tmp_called_value_97);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 530;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 1, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 531;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 2, tmp_tuple_element_15);
                tmp_called_value_98 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_98 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_98 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_98 == NULL)) {
                            tmp_called_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_98 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 532;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_98);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 532;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_98, mod_consts[104]);

                Py_DECREF(tmp_called_value_98);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 532;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 3, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 533;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 4, tmp_tuple_element_15);
                tmp_called_value_99 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_99 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_99 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_99 == NULL)) {
                            tmp_called_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_99 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 534;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_99);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 534;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_99, mod_consts[105]);

                Py_DECREF(tmp_called_value_99);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 534;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 5, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[156];
                PyTuple_SET_ITEM0(tmp_args_value_13, 6, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 536;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_13, 7, tmp_tuple_element_15);
                tmp_called_value_100 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_100 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_100 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_100 == NULL)) {
                            tmp_called_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_100 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 537;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_100);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 537;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_100, mod_consts[116]);

                Py_DECREF(tmp_called_value_100);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 537;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 8, tmp_tuple_element_15);
                tmp_tuple_element_15 = mod_consts[157];
                PyTuple_SET_ITEM0(tmp_args_value_13, 9, tmp_tuple_element_15);
                tmp_called_value_101 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_101 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_101 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_101 == NULL)) {
                            tmp_called_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_101 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 539;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_101);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 539;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_101, mod_consts[135]);

                Py_DECREF(tmp_called_value_101);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 539;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 10, tmp_tuple_element_15);
                tmp_called_value_103 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_103 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_103 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_103 == NULL)) {
                            tmp_called_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_103 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 540;
                            type_description_2 = "c";
                            goto tuple_build_exception_13;
                        }
                        Py_INCREF(tmp_called_value_103);
                    } else {
                        goto tuple_build_exception_13;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 540;
                tmp_expression_value_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_103, mod_consts[158]);

                Py_DECREF(tmp_called_value_103);
                if (tmp_expression_value_22 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 540;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                tmp_called_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[130]);
                Py_DECREF(tmp_expression_value_22);
                if (tmp_called_value_102 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 540;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 540;
                tmp_tuple_element_15 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_102, mod_consts[131]);

                Py_DECREF(tmp_called_value_102);
                if (tmp_tuple_element_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 540;
                    type_description_2 = "c";
                    goto tuple_build_exception_13;
                }
                PyTuple_SET_ITEM(tmp_args_value_13, 11, tmp_tuple_element_15);
            }
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_args_value_13);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_kwargs_value_13 = DICT_COPY(mod_consts[159]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 528;
            tmp_called_value_95 = CALL_FUNCTION(tmp_called_value_96, tmp_args_value_13, tmp_kwargs_value_13);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_args_value_13);
            Py_DECREF(tmp_kwargs_value_13);
            if (tmp_called_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_13 = mod_consts[108];
            tmp_annotations_14 = DICT_COPY(mod_consts[109]);
            Py_INCREF(tmp_defaults_13);

            tmp_closure_14[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_14[0]);

            tmp_args_element_value_13 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__15_kurt(tmp_defaults_13, tmp_annotations_14, tmp_closure_14);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 528;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_95, tmp_args_element_value_13);
            Py_DECREF(tmp_called_value_95);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 565;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_104;
            PyObject *tmp_called_value_105;
            PyObject *tmp_args_value_14;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_14;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_defaults_14;
            PyObject *tmp_annotations_15;
            struct Nuitka_CellObject *tmp_closure_15[1];
            tmp_called_value_105 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_105 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_105 == NULL)) {
                        tmp_called_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_105 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 568;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_105);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_16 == NULL)) {
                        tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_16 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_105);

                        exception_lineno = 569;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_16);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_14 = MAKE_TUPLE_EMPTY(8);
            {
                PyObject *tmp_called_value_106;
                PyObject *tmp_called_value_107;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_called_value_108;
                PyObject *tmp_called_value_109;
                PyObject *tmp_called_value_110;
                PyObject *tmp_expression_value_24;
                PyObject *tmp_subscript_value_10;
                PyTuple_SET_ITEM(tmp_args_value_14, 0, tmp_tuple_element_16);
                tmp_called_value_106 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_106 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_106 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_106 == NULL)) {
                            tmp_called_value_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_106 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 570;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_106);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 570;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_106, mod_consts[111]);

                Py_DECREF(tmp_called_value_106);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 570;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 1, tmp_tuple_element_16);
                tmp_called_value_108 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_108 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_108 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_108 == NULL)) {
                            tmp_called_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_108 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 571;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_108);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 571;
                tmp_expression_value_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_108, mod_consts[161]);

                Py_DECREF(tmp_called_value_108);
                if (tmp_expression_value_23 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 571;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                tmp_called_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[130]);
                Py_DECREF(tmp_expression_value_23);
                if (tmp_called_value_107 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 571;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 571;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_107, mod_consts[131]);

                Py_DECREF(tmp_called_value_107);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 571;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 2, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 587;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 3, tmp_tuple_element_16);
                tmp_called_value_109 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_109 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_109 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_109 == NULL)) {
                            tmp_called_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_109 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 588;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_109);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 588;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_109, mod_consts[104]);

                Py_DECREF(tmp_called_value_109);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 588;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 4, tmp_tuple_element_16);
                tmp_tuple_element_16 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_16 == NULL)) {
                            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 589;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_tuple_element_16);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_14, 5, tmp_tuple_element_16);
                tmp_called_value_110 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_110 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_110 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_110 == NULL)) {
                            tmp_called_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_110 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 590;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_called_value_110);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 590;
                tmp_tuple_element_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_110, mod_consts[105]);

                Py_DECREF(tmp_called_value_110);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 590;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 6, tmp_tuple_element_16);
                tmp_expression_value_24 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_expression_value_24 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_24 == NULL)) {
                            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_24 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 591;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_24);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                tmp_subscript_value_10 = mod_consts[106];
                tmp_tuple_element_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_10);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_tuple_element_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 591;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_args_value_14, 7, tmp_tuple_element_16);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_value_14);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_kwargs_value_14 = DICT_COPY(mod_consts[162]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 568;
            tmp_called_value_104 = CALL_FUNCTION(tmp_called_value_105, tmp_args_value_14, tmp_kwargs_value_14);
            Py_DECREF(tmp_called_value_105);
            Py_DECREF(tmp_args_value_14);
            Py_DECREF(tmp_kwargs_value_14);
            if (tmp_called_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_14 = mod_consts[163];
            tmp_annotations_15 = DICT_COPY(mod_consts[164]);
            Py_INCREF(tmp_defaults_14);

            tmp_closure_15[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_15[0]);

            tmp_args_element_value_14 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__16_quantile(tmp_defaults_14, tmp_annotations_15, tmp_closure_15);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 568;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_104, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_args_element_value_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 568;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 596;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_111;
            PyObject *tmp_called_value_112;
            PyObject *tmp_args_value_15;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_kwargs_value_15;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_defaults_15;
            PyObject *tmp_annotations_16;
            struct Nuitka_CellObject *tmp_closure_16[1];
            tmp_called_value_112 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_112 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_112 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_112 == NULL)) {
                        tmp_called_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_112 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 608;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_112);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_17 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_17 == NULL)) {
                        tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_17 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_112);

                        exception_lineno = 609;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_17);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_15 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_113;
                PyObject *tmp_called_value_114;
                PyObject *tmp_expression_value_25;
                PyObject *tmp_called_value_115;
                PyObject *tmp_called_value_116;
                PyObject *tmp_called_value_117;
                PyObject *tmp_called_value_118;
                PyObject *tmp_called_value_119;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_called_value_120;
                PyTuple_SET_ITEM(tmp_args_value_15, 0, tmp_tuple_element_17);
                tmp_tuple_element_17 = mod_consts[166];
                PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_17);
                tmp_called_value_113 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_113 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_113 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_113 == NULL)) {
                            tmp_called_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_113 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 611;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_113);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 611;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_113, mod_consts[111]);

                Py_DECREF(tmp_called_value_113);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 611;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 2, tmp_tuple_element_17);
                tmp_called_value_115 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_115 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_115 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_115 == NULL)) {
                            tmp_called_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_115 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 612;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_115);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 612;
                tmp_expression_value_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_115, mod_consts[167]);

                Py_DECREF(tmp_called_value_115);
                if (tmp_expression_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 612;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                tmp_called_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[130]);
                Py_DECREF(tmp_expression_value_25);
                if (tmp_called_value_114 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 612;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 612;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_114, mod_consts[131]);

                Py_DECREF(tmp_called_value_114);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 612;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 3, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 628;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 4, tmp_tuple_element_17);
                tmp_called_value_116 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_116 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_116 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_116 == NULL)) {
                            tmp_called_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_116 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 629;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_116);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 629;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_116, mod_consts[104]);

                Py_DECREF(tmp_called_value_116);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 629;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 5, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 630;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 6, tmp_tuple_element_17);
                tmp_called_value_117 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_117 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_117 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_117 == NULL)) {
                            tmp_called_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_117 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 631;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_117);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 631;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_117, mod_consts[105]);

                Py_DECREF(tmp_called_value_117);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 631;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 7, tmp_tuple_element_17);
                tmp_tuple_element_17 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_17 == NULL)) {
                            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 632;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_tuple_element_17);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_15, 8, tmp_tuple_element_17);
                tmp_called_value_118 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_118 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_118 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_118 == NULL)) {
                            tmp_called_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_118 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 633;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_118);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 633;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_118, mod_consts[135]);

                Py_DECREF(tmp_called_value_118);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 633;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 9, tmp_tuple_element_17);
                tmp_called_value_120 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_120 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_120 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_120 == NULL)) {
                            tmp_called_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_120 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 634;
                            type_description_2 = "c";
                            goto tuple_build_exception_15;
                        }
                        Py_INCREF(tmp_called_value_120);
                    } else {
                        goto tuple_build_exception_15;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 634;
                tmp_expression_value_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_120, mod_consts[168]);

                Py_DECREF(tmp_called_value_120);
                if (tmp_expression_value_26 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                tmp_called_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[130]);
                Py_DECREF(tmp_expression_value_26);
                if (tmp_called_value_119 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 634;
                tmp_tuple_element_17 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_119, mod_consts[131]);

                Py_DECREF(tmp_called_value_119);
                if (tmp_tuple_element_17 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 634;
                    type_description_2 = "c";
                    goto tuple_build_exception_15;
                }
                PyTuple_SET_ITEM(tmp_args_value_15, 10, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_15);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_kwargs_value_15 = DICT_COPY(mod_consts[169]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 608;
            tmp_called_value_111 = CALL_FUNCTION(tmp_called_value_112, tmp_args_value_15, tmp_kwargs_value_15);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_args_value_15);
            Py_DECREF(tmp_kwargs_value_15);
            if (tmp_called_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_15 = mod_consts[170];
            tmp_annotations_16 = DICT_COPY(mod_consts[171]);
            Py_INCREF(tmp_defaults_15);

            tmp_closure_16[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_16[0]);

            tmp_args_element_value_15 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__17_rank(tmp_defaults_15, tmp_annotations_16, tmp_closure_16);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 608;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_111, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_111);
            Py_DECREF(tmp_args_element_value_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 608;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 669;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_121;
            PyObject *tmp_called_value_122;
            PyObject *tmp_args_value_16;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_16;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_defaults_16;
            PyObject *tmp_annotations_17;
            struct Nuitka_CellObject *tmp_closure_17[1];
            tmp_called_value_122 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_122 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_122 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_122 == NULL)) {
                        tmp_called_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_122 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 683;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_122);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_18 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_18 == NULL)) {
                        tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_18 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_122);

                        exception_lineno = 684;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_18);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_16 = MAKE_TUPLE_EMPTY(8);
            {
                PyObject *tmp_called_value_123;
                PyObject *tmp_called_value_124;
                PyObject *tmp_expression_value_27;
                PyObject *tmp_called_value_125;
                PyObject *tmp_called_value_126;
                PyObject *tmp_called_value_127;
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_11;
                PyTuple_SET_ITEM(tmp_args_value_16, 0, tmp_tuple_element_18);
                tmp_called_value_123 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_123 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_123 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_123 == NULL)) {
                            tmp_called_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_123 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 685;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_123);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 685;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_123, mod_consts[111]);

                Py_DECREF(tmp_called_value_123);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 685;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 1, tmp_tuple_element_18);
                tmp_called_value_125 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_125 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_125 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_125 == NULL)) {
                            tmp_called_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_125 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 686;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_125);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 686;
                tmp_expression_value_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_125, mod_consts[173]);

                Py_DECREF(tmp_called_value_125);
                if (tmp_expression_value_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 686;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                tmp_called_value_124 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[130]);
                Py_DECREF(tmp_expression_value_27);
                if (tmp_called_value_124 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 686;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 686;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_124, mod_consts[131]);

                Py_DECREF(tmp_called_value_124);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 686;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 2, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 703;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 3, tmp_tuple_element_18);
                tmp_called_value_126 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_126 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_126 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_126 == NULL)) {
                            tmp_called_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_126 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 704;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_126);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 704;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_126, mod_consts[104]);

                Py_DECREF(tmp_called_value_126);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 704;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 4, tmp_tuple_element_18);
                tmp_tuple_element_18 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_18 == NULL)) {
                            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 705;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_tuple_element_18);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_16, 5, tmp_tuple_element_18);
                tmp_called_value_127 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_127 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_127 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_127 == NULL)) {
                            tmp_called_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_127 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 706;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_called_value_127);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 706;
                tmp_tuple_element_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_127, mod_consts[105]);

                Py_DECREF(tmp_called_value_127);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 706;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 6, tmp_tuple_element_18);
                tmp_expression_value_28 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 707;
                            type_description_2 = "c";
                            goto tuple_build_exception_16;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto tuple_build_exception_16;
                    }
                }

                tmp_subscript_value_11 = mod_consts[106];
                tmp_tuple_element_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_11);
                Py_DECREF(tmp_expression_value_28);
                if (tmp_tuple_element_18 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 707;
                    type_description_2 = "c";
                    goto tuple_build_exception_16;
                }
                PyTuple_SET_ITEM(tmp_args_value_16, 7, tmp_tuple_element_18);
            }
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_value_16);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_kwargs_value_16 = DICT_COPY(mod_consts[174]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 683;
            tmp_called_value_121 = CALL_FUNCTION(tmp_called_value_122, tmp_args_value_16, tmp_kwargs_value_16);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_args_value_16);
            Py_DECREF(tmp_kwargs_value_16);
            if (tmp_called_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_16 = mod_consts[175];
            tmp_annotations_17 = DICT_COPY(mod_consts[176]);
            Py_INCREF(tmp_defaults_16);

            tmp_closure_17[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_17[0]);

            tmp_args_element_value_16 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__18_cov(tmp_defaults_16, tmp_annotations_17, tmp_closure_17);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 683;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_121, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_121);
            Py_DECREF(tmp_args_element_value_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 683;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[27], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 712;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_128;
            PyObject *tmp_called_value_129;
            PyObject *tmp_args_value_17;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_kwargs_value_17;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_defaults_17;
            PyObject *tmp_annotations_18;
            struct Nuitka_CellObject *tmp_closure_18[1];
            tmp_called_value_129 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[56]);

            if (tmp_called_value_129 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_129 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[56]);

                    if (unlikely(tmp_called_value_129 == NULL)) {
                        tmp_called_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
                    }

                    if (tmp_called_value_129 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 726;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_129);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[66]);

            if (tmp_tuple_element_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[66]);

                    if (unlikely(tmp_tuple_element_19 == NULL)) {
                        tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
                    }

                    if (tmp_tuple_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_129);

                        exception_lineno = 727;
                        type_description_2 = "c";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_tuple_element_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_args_value_17 = MAKE_TUPLE_EMPTY(11);
            {
                PyObject *tmp_called_value_130;
                PyObject *tmp_called_value_131;
                PyObject *tmp_expression_value_29;
                PyObject *tmp_called_value_132;
                PyObject *tmp_called_value_133;
                PyObject *tmp_called_value_134;
                PyObject *tmp_called_value_135;
                PyObject *tmp_expression_value_30;
                PyObject *tmp_called_value_136;
                PyObject *tmp_called_value_137;
                PyObject *tmp_called_value_138;
                PyObject *tmp_expression_value_31;
                PyObject *tmp_called_value_139;
                PyTuple_SET_ITEM(tmp_args_value_17, 0, tmp_tuple_element_19);
                tmp_called_value_130 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_130 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_130 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_130 == NULL)) {
                            tmp_called_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_130 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 728;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_130);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 728;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_130, mod_consts[111]);

                Py_DECREF(tmp_called_value_130);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 728;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 1, tmp_tuple_element_19);
                tmp_called_value_132 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_132 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_132 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_132 == NULL)) {
                            tmp_called_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_132 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 729;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_132);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 729;
                tmp_expression_value_29 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_132, mod_consts[178]);

                Py_DECREF(tmp_called_value_132);
                if (tmp_expression_value_29 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 729;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                tmp_called_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[130]);
                Py_DECREF(tmp_expression_value_29);
                if (tmp_called_value_131 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 729;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 729;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_131, mod_consts[131]);

                Py_DECREF(tmp_called_value_131);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 729;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 2, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[64]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[64]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 743;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 3, tmp_tuple_element_19);
                tmp_called_value_133 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_133 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_133 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_133 == NULL)) {
                            tmp_called_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_133 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 744;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_133);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 744;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_133, mod_consts[104]);

                Py_DECREF(tmp_called_value_133);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 744;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 4, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[67]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[67]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 745;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 5, tmp_tuple_element_19);
                tmp_called_value_134 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_134 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_134 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_134 == NULL)) {
                            tmp_called_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_134 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 746;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_134);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 746;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_134, mod_consts[105]);

                Py_DECREF(tmp_called_value_134);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 746;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 6, tmp_tuple_element_19);
                tmp_called_value_136 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_136 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_136 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_136 == NULL)) {
                            tmp_called_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_136 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 747;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_136);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 747;
                tmp_expression_value_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_136, mod_consts[179]);

                Py_DECREF(tmp_called_value_136);
                if (tmp_expression_value_30 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 747;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                tmp_called_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[130]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_called_value_135 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 747;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 747;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_135, mod_consts[131]);

                Py_DECREF(tmp_called_value_135);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 747;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 7, tmp_tuple_element_19);
                tmp_tuple_element_19 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[68]);

                if (tmp_tuple_element_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[68]);

                        if (unlikely(tmp_tuple_element_19 == NULL)) {
                            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                        }

                        if (tmp_tuple_element_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 753;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_tuple_element_19);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                PyTuple_SET_ITEM(tmp_args_value_17, 8, tmp_tuple_element_19);
                tmp_called_value_137 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[63]);

                if (tmp_called_value_137 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_137 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[63]);

                        if (unlikely(tmp_called_value_137 == NULL)) {
                            tmp_called_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
                        }

                        if (tmp_called_value_137 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 754;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_137);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 754;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_137, mod_consts[116]);

                Py_DECREF(tmp_called_value_137);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 754;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 9, tmp_tuple_element_19);
                tmp_called_value_139 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[45]);

                if (tmp_called_value_139 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_called_value_139 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[45]);

                        if (unlikely(tmp_called_value_139 == NULL)) {
                            tmp_called_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                        }

                        if (tmp_called_value_139 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 755;
                            type_description_2 = "c";
                            goto tuple_build_exception_17;
                        }
                        Py_INCREF(tmp_called_value_139);
                    } else {
                        goto tuple_build_exception_17;
                    }
                }

                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 755;
                tmp_expression_value_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_139, mod_consts[180]);

                Py_DECREF(tmp_called_value_139);
                if (tmp_expression_value_31 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 755;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                tmp_called_value_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[130]);
                Py_DECREF(tmp_expression_value_31);
                if (tmp_called_value_138 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 755;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 755;
                tmp_tuple_element_19 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_138, mod_consts[131]);

                Py_DECREF(tmp_called_value_138);
                if (tmp_tuple_element_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 755;
                    type_description_2 = "c";
                    goto tuple_build_exception_17;
                }
                PyTuple_SET_ITEM(tmp_args_value_17, 10, tmp_tuple_element_19);
            }
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_value_17);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_kwargs_value_17 = DICT_COPY(mod_consts[181]);
            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 726;
            tmp_called_value_128 = CALL_FUNCTION(tmp_called_value_129, tmp_args_value_17, tmp_kwargs_value_17);
            Py_DECREF(tmp_called_value_129);
            Py_DECREF(tmp_args_value_17);
            Py_DECREF(tmp_kwargs_value_17);
            if (tmp_called_value_128 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_defaults_17 = mod_consts[175];
            tmp_annotations_18 = DICT_COPY(mod_consts[176]);
            Py_INCREF(tmp_defaults_17);

            tmp_closure_18[0] = outline_0_var___class__;
            Py_INCREF(tmp_closure_18[0]);

            tmp_args_element_value_17 = MAKE_FUNCTION_pandas$core$window$expanding$$$function__19_corr(tmp_defaults_17, tmp_annotations_18, tmp_closure_18);

            frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame.f_lineno = 726;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_128, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_args_element_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 726;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[29], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 782;
                type_description_2 = "c";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3e7f872e1784f0931f7df9cb32853a34_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3e7f872e1784f0931f7df9cb32853a34_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3e7f872e1784f0931f7df9cb32853a34_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3e7f872e1784f0931f7df9cb32853a34_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_3e7f872e1784f0931f7df9cb32853a34_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_8;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__1_Expanding_44, mod_consts[183], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto try_except_handler_8;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_140;
            PyObject *tmp_args_value_18;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_18;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_140 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_20 = mod_consts[76];
            tmp_args_value_18 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_20 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = locals_pandas$core$window$expanding$$$class__1_Expanding_44;
            PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_18 = tmp_class_creation_1__class_decl_dict;
            frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 44;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_140, tmp_args_value_18, tmp_kwargs_value_18);
            Py_DECREF(tmp_args_value_18);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
            PyCell_SET(outline_0_var___class__, tmp_assign_source_39);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
        tmp_assign_source_38 = Nuitka_Cell_GET(outline_0_var___class__);
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_44);
        locals_pandas$core$window$expanding$$$class__1_Expanding_44 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$window$expanding$$$class__1_Expanding_44);
        locals_pandas$core$window$expanding$$$class__1_Expanding_44 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 44;
        goto try_except_handler_6;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_38);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_21;
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_40, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_assign_source_40, 1, tmp_tuple_element_21);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_assign_source_40);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_41 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_32 = tmp_class_creation_2__bases;
        tmp_subscript_value_12 = mod_consts[44];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_12, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_33 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[75]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_19;
        PyObject *tmp_tuple_element_22;
        PyObject *tmp_kwargs_value_19;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_34 = tmp_class_creation_2__metaclass;
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[75]);
        if (tmp_called_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_tuple_element_22 = mod_consts[184];
        tmp_args_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_22 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_22);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_19 = tmp_class_creation_2__class_decl_dict;
        frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 797;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_141, tmp_args_value_19, tmp_kwargs_value_19);
        Py_DECREF(tmp_called_value_141);
        Py_DECREF(tmp_args_value_19);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_35 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[77]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[78];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[79];
        tmp_getattr_default_2 = mod_consts[80];
        tmp_tuple_element_23 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[79]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 797;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_19;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_19:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_19:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 797;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_45;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[81];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[82], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[185];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[184];
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[84], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_11;
        }
        frame_951162f56ad18620b4dcb5320e64f1c5_3 = MAKE_CLASS_FRAME(codeobj_951162f56ad18620b4dcb5320e64f1c5, module_pandas$core$window$expanding, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_951162f56ad18620b4dcb5320e64f1c5_3);
        assert(Py_REFCNT(frame_951162f56ad18620b4dcb5320e64f1c5_3) == 2);

        // Framed code:
        {
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            tmp_expression_value_37 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[76]);

            if (tmp_expression_value_37 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_expression_value_37 == NULL)) {
                        tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_expression_value_37 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 802;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_37);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[89]);
            Py_DECREF(tmp_expression_value_37);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 802;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_expression_value_38 = PyObject_GetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[73]);

            if (tmp_expression_value_38 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[73]);

                    if (unlikely(tmp_expression_value_38 == NULL)) {
                        tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                    }

                    if (tmp_expression_value_38 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_add_expr_left_1);

                        exception_lineno = 802;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_38);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[89]);
            Py_DECREF(tmp_expression_value_38);
            if (tmp_add_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 802;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dictset_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 802;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[89], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 802;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_19;
            tmp_annotations_19 = DICT_COPY(mod_consts[186]);


            tmp_dictset_value = MAKE_FUNCTION_pandas$core$window$expanding$$$function__20__get_window_indexer(tmp_annotations_19);

            tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 804;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_951162f56ad18620b4dcb5320e64f1c5_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_951162f56ad18620b4dcb5320e64f1c5_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_951162f56ad18620b4dcb5320e64f1c5_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_951162f56ad18620b4dcb5320e64f1c5_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_951162f56ad18620b4dcb5320e64f1c5_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_11;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 797;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797, mod_consts[183], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 797;

            goto try_except_handler_11;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_142;
            PyObject *tmp_args_value_20;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_kwargs_value_20;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_142 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_24 = mod_consts[184];
            tmp_args_value_20 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_24 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797;
            PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_24);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_20 = tmp_class_creation_2__class_decl_dict;
            frame_09133c0f352811827f43c45613c3b7a8->m_frame.f_lineno = 797;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_142, tmp_args_value_20, tmp_kwargs_value_20);
            Py_DECREF(tmp_args_value_20);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 797;

                goto try_except_handler_11;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_47;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_46 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797);
        locals_pandas$core$window$expanding$$$class__2_ExpandingGroupby_797 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 797;
        goto try_except_handler_9;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_46);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_09133c0f352811827f43c45613c3b7a8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_09133c0f352811827f43c45613c3b7a8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_09133c0f352811827f43c45613c3b7a8, exception_lineno);
    }



    assertFrameObject(frame_09133c0f352811827f43c45613c3b7a8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pandas.core.window.expanding", false);

    Py_INCREF(module_pandas$core$window$expanding);
    return module_pandas$core$window$expanding;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pandas$core$window$expanding, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pandas$core$window$expanding", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
