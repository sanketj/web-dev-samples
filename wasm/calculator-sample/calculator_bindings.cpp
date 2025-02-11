#include <emscripten/bind.h>
#include "calculator.h"

using namespace emscripten;

EMSCRIPTEN_BINDINGS(calculator_module) {
    class_<Calculator>("Calculator")
        .constructor<>()
        .function("add", &Calculator::add)
        .function("subtract", &Calculator::subtract)
        .function("multiply", &Calculator::multiply)
        .function("divide", &Calculator::divide);
}