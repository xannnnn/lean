/*
Copyright (c) 2014 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#pragma once
#include "library/annotation.h"

namespace lean {
/** \brief Annotate \c e with "extra-info" annotation.
    It instructs elaborator to store the type of \c e.
*/
expr mk_extra_info(expr const & e, tag g);
expr mk_extra_info(expr const & e);
/** \brief Return true iff \c e is a term annotated with mk_extra_info */
bool is_extra_info(expr const & e);

void initialize_extra_info();
void finalize_extra_info();
}
