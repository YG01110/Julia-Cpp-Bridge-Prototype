#include "jlcxx/jlcxx.hpp"
#include "Shape.h"

JLCXX_MODULE define_julia_module(jlcxx::Module& mod) {
    // This maps the C++ "Shape" class to a Julia type
    mod.add_type<Shape>("Shape")
       .constructor<>()
       .method("area", &Shape::area);
}
